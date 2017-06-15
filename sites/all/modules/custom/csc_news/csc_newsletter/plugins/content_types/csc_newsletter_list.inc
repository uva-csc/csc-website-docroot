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
        'numn' => 5,
    ),
);

function csc_newsletter_list_edit_form($form, &$form_state) {
    $conf = $form_state['conf'];
    
    $form['numn'] = array(
        '#type' => 'textfield',
        '#title' => t('Number of Newletters to Show'),
        '#default_value' => (empty($conf['numn'])) ? 5 : $conf['numn'],
        '#description' => t('How many newsletters do you want to list in this pane'),
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
    $block->content = 'Newsletter subscription form';
    return $block;
  }
}

function csc_newsletter_list_render($subtype, $conf, $panel_args, $context = NULL) {
  global $base_root, $base_path;

  $path = drupal_get_path('module', 'csc_newsletter');
  /*
  drupal_add_js($base_root . $base_path . 'profiles/panopoly/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.position.min.js');
  drupal_add_js($base_root . $base_path . 'profiles/panopoly/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.dialog.min.js');
  drupal_add_js($path . '/plugins/content_types/csc_newsletter.js');
*/
  $output = '<div class="csc-newsletter-liste"><h1>Newsletter List</h1><p>This is a list of the past N newsletters:</p></div>';
  $output .= csc_newsletter_mc_query();
  $block = new stdClass();
  $block->title = t('View Past News Letters');
  $block->content = $output;

  return $block;
}

/**
 * Uses MailChimp API with key to get list of all newletter "campaigns" and processes into an html list
 */
function csc_newsletter_mc_query() {
    // TODO: Cache the call to Mailchimp and do it during cron jobs.
    $mcapi = 'https://us5.api.mailchimp.com/3.0/';
    $apiKey = '739d6fc0b36d318ca00dad61f18b533b-us5'; 
    $curl = curl_init();
    curl_setopt_array($curl, array(
        CURLOPT_RETURNTRANSFER => 1,
        CURLOPT_URL => $mcapi . 'campaigns?count=200',
        CURLOPT_HTTPHEADER => array(
            'X-Sifter-Token: ' . $apiKey,
            'Accept: application/json',
         ),
        CURLOPT_USERPWD => 'anystring:' . $apiKey,
    ));
    $results = curl_exec($curl);
    $results = json_decode($results);
    $newsletters = array();
    foreach($results->campaigns as $result) {
        if($result->recipients->list_name == 'General Newsletter' && strstr($result->settings->subject_line, 'Newsletter') ) { $newsletters[] = $result; }
    }
    $out = '<ul>';
    foreach($newsletters as $nsl) {
        $nsl_date = date_create($nsl->create_time);
        $date_out = date_format($nsl_date, 'M j, Y');
        $out .= '<li><a href="' . $nsl->archive_url . '" target="_blank">' . $nsl->settings->title . ' (' . $date_out . ')</a></li>';
    }
    $out .= '</ul>';
}
