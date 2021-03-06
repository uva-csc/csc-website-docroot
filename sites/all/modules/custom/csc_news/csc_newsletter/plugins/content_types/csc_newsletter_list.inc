<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('CSC Newsletter List'),
  'description' => t('List of Newsletters from Mailchimp'),
  'category' => t('CSC Plugins'),
  'render callback' => 'csc_newsletter_list_render',
  'admin info' => 'csc_newsletter_list_admin_info',
  'edit form' => 'csc_newsletter_list_edit_form',
  'defaults' => array(
        'list_title' => t('CSC Newsletter List'),
        'list_text' => '',
        'numn' => 10,
        'show_count' => FALSE,
    ),
);

function csc_newsletter_list_edit_form($form, &$form_state) {
    $conf = $form_state['conf'];
    $form['list_text'] = array(
        '#type' => 'textarea',
        '#title' => t('Text above list'),
        '#default_value' => (empty($conf['list_text'])) ? '' : $conf['list_text'],
        '#description' => t('The descriptive text to appear above the list, leave blank for none.'),
    );
    $form['numn'] = array(
        '#type' => 'textfield',
        '#title' => t('Number of Newletters to Show'),
        '#default_value' => (empty($conf['numn'])) ? 10 : $conf['numn'],
        '#description' => t('How many newsletters do you want to list in this pane'),
    );
    
    $form['show_count'] = array(
        '#type' => 'checkbox',
        '#title' => t('Display Count'),
        '#default_value' => (empty($conf['show_count'])) ? FALSE : $conf['show_count'],
        '#description' => t('Display "Showing n newsletters"?'),
    );
    return $form;
}

/**
 * The submit form stores the data in $conf.
 */
 
function csc_newsletter_list_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * 'admin info' callback for panel pane.
 */
function csc_newsletter_list_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = 'CSC Newsletter List';
    $block->content = 'Block showing a list of past CSC newsletters';
    return $block;
  }
}

function csc_newsletter_list_render($subtype, $conf, $panel_args, $context = NULL) {
  global $base_root, $base_path;
  $numn = isset($conf['numn']) ? $conf['numn'] : '';
  $output = '<div class="csc-newsletter-list">';
  if (!empty ($conf['list_text']) || $conf['show_count']) {
      $output .= '<p>' . $conf['list_text'];
      if ($conf['show_count']) {
          $output .= ' This is a list of the past ' . $numn . ' newsletters.';
      }
      $output .= '</p>';
  }
  $output .= csc_newsletter_mclist($numn);
  $output .= '</div>';
  $block = new stdClass();
  /*$block->title = $conf['list_title'];*/
  $block->content = $output;
  return $block;
}

/**
 * Uses MailChimp API with key to get list of all newletter "campaigns" and processes into an html list
 */
function csc_newsletter_mclist($numn = 10, $reset = FALSE) {
    static $nsl_list;
    if (!isset($nsl_list) || $reset) {
        if (!$reset && ($cache = cache_get('csc_newsletter_list_data')) && !empty($cache->data)) {
            $nsl_list = unserialize($cache->data);
        }
        else {
            $nsl_list = csc_newsletter_list_set_cache();
        }
    }
    if (!is_array($nsl_list)) { $nsl_list = array(); }
    $out = '<ul>';
    if (empty($nsl_list)) { $out .= '<li>There was a problem retrieving the list of newsletters</li>'; }
    $cnt = 0;
    foreach($nsl_list as $n => $nsl) {
        $cnt++;
        if ($cnt > $numn) { break; }
        $nsl_date = date_create($nsl->create_time);
        $date_out = date_format($nsl_date, 'M j, Y');
        $out .= '<li><a href="' . $nsl->archive_url . '" target="_blank">' . $nsl->settings->title . ' (' . $date_out . ')</a></li>';
    }
    $out .= '</ul>';
    return $out;
}

function csc_newsletter_list_set_cache() {
    $mcapi = 'https://us5.api.mailchimp.com/3.0/';
    $apiKey = variable_get('csc_newsletter_mckey');
    if (!$apiKey || empty($apiKey)) { watchdog('csc_newsletter_list', "The CSC mailchimp API key has not been set for this site"); return; }
    $curl = curl_init();
    curl_setopt_array($curl, array(
        CURLOPT_RETURNTRANSFER => 1,
        CURLOPT_URL => $mcapi . 'campaigns?count=200', // Implement the count variable from plugin settings.
        CURLOPT_HTTPHEADER => array(
            'X-Sifter-Token: ' . $apiKey,
            'Accept: application/json',
         ),
        CURLOPT_USERPWD => 'anystring:' . $apiKey,
    ));
    $results = curl_exec($curl);
    $results = json_decode($results);
    $newsletters = array();
    if (isset($results->campaigns) && is_array($results->campaigns)) {
        foreach($results->campaigns as $result) {
            if($result->recipients->list_name == 'General Newsletter' && strstr($result->settings->subject_line, 'Newsletter') ) {
                 $d = strtotime($result->create_time);
                 $newsletters[$d] = $result; 
            }
        }
        krsort($newsletters);
        cache_set('csc_newsletter_list_data', serialize($newsletters));
    } else {
        if ($results->status == 401) {
            watchdog('csc_newsletter_list', $results->title . ": " . $results->detail . ' (CSC Mailchimp)');
        }
    }
    return $newsletters;
}

