<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('CSC Related Instruction'),
  'description' => t('Shows Instruction related to current page'),
  'category' => t('CSC Plugins'),
  'render callback' => 'csc_related_classes_render',
  'edit form' => 'csc_related_edit_form',
  'admin info' => 'csc_related_classes_info','defaults' => array(
        'link_params' => '',  // parameter to add search string to the "All" link
    ),
);

/**
 * 'admin info' callback for panel pane.
 */
function csc_related_classes_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = 'Related Instruction';
    $block->content = 'CSC Related Instruction widget';
    return $block;
  }
}

/**
 * 'Edit form' callback for the class list settings.
 */
function csc_related_edit_form($form, &$form_state) {

    $conf = $form_state['conf'];
    
    $form['link_params'] = array(
        '#type' => 'textfield',
        '#title' => t('Link Parameters'),
        '#default_value' => (empty($conf['link_params'])) ? '' : $conf['link_params'],
        '#description' => t('Add "search" string to append after "all" link with parameters. Do not include the "?"'),
    );
    return $form;

}

/**
 * The submit form stores the data in $conf. Saving settings submitted
 */
 
function csc_related_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Build blocks for Related events
 */
function csc_related_classes_render($subtype, $conf, $panel_args, $context = NULL) {
  module_load_include('inc', 'csc_related', 'csc_related');

  $type = 'class';
  $params = (!empty($conf['link_params'])) ? '?' . $conf['link_params'] : '';  // Get the search string param from the settings
  $nids = csc_related_get_nodes($type);
   
  if(is_array($nids) && sizeof($nids) > 0){
    $output = '<div class="see-all"><a href="'. url('list/class/' . csc_related_current_nid()) . $params . '">SEE ALL</a></div>';
    foreach($nids as $nid){
      $node = node_load($nid);
      $lng = $node->language;
      $output .= theme('csc_related_classes_item', array('title' => $node->title,
                                                        'body' => isset($node->field_small_teaser[$lng][0]['value']) ? $node->field_small_teaser[$lng][0]['value'] : '',
                                                        'image' => ($node->field_featured_image) ? $node->field_featured_image[$lng][0]['uri'] : '',
                                                        'nid' => $node->nid,
                                                  ));
    }

    $block = new stdClass();
    $block->title = 'Instruction';
    $block->content = $output;

    return $block;
  }
}

/**
 * Theme function
 */
function theme_csc_related_classes_item($var){
  $url = l($var['title'], "node/" . $var['nid']);
  $image = ($var['image']) ? '<img src="'. image_style_url('panopoly_image_featured', $var['image']) .'" alt = "'. $var['title'] . '" title="' . $var['title'] .'">' : '';

  $output ='<div class="csc-classes-item"><div class="csc-item-container">';
  $output.= "<h2>$url</h2>";
  if ($var['image']) $output .= l($image, 'node/' . $var['nid'], array('html'=>true));
  $output.= '<div class="csc-item-teaser">' . $var['body'] . "</div>";
  $output.= "</div></div>\n";

  return $output;
}
