<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('CSC Related Instruction'),
  'description' => t('Shows Instruction related to current page'),
  'category' => t('CSC Plugins'),
  'render callback' => 'csc_related_classes_render',
  'edit form' => 'csc_related_edit_form',
  'admin info' => 'csc_related_classes_info',
  'defaults' => array(
        'position' => 'right',
        'order' => 'title',
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
    $form['position'] = array(
        '#type' => 'select',
        '#title' => t('Position'),
        '#options' => drupal_map_assoc(array('right', 'center')),
        '#default_value' => (empty($conf['position'])) ? 'right' : $conf['position'],
        '#description' => t('Choose which column this list will be displayed in'),
    );
    $form['order'] = array(
        '#type' => 'select',
        '#title' => t('Order'),
        '#options' => drupal_map_assoc(array('title', 'noderef')),
        '#default_value' => (empty($conf['order'])) ? 'right' : $conf['order'],
        '#description' => t('Chose whether to sort list alphabetically by title or by order of the node references'),
    );
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
  $position = (!empty($conf['position'])) ? $conf['position'] : 'right';
  $order = (!empty($conf['order'])) ? $conf['order'] : 'title';
  $params = (!empty($conf['link_params'])) ? '?' . $conf['link_params'] : '';  // Get the search string param from the settings
  $nids = csc_related_get_nodes($type);
  dpm($order, $position);
  if ($order == 'noderef') {
      $node = menu_get_object();
      dpm($nids, 'nodes before');
      _csc_related_classes_order_nodes($nids); 
      dpm($nids, 'nodes after');
  }
  if(is_array($nids) && sizeof($nids) > 0){
    $output = '<div class="see-all"><a href="'. url('list/class/' . csc_related_current_nid()) . $params . '">SEE ALL</a></div>';
    foreach($nids as $nid){
      $node = node_load($nid);
      $lng = $node->language;
       if ( $position == 'center' ) {
          $ra = node_view($node, 'teaser');
          $output .= render($ra);
       } else {
            $output .= theme('csc_related_classes_item', array('title' => $node->title,
                                    'body' => isset($node->field_small_teaser[$lng][0]['value']) ? $node->field_small_teaser[$lng][0]['value'] : '',
                                    'image' => ($node->field_featured_image) ? $node->field_featured_image[$lng][0]['uri'] : '',
                                    'nid' => $node->nid,
                              ));
       }
    }

    $block = new stdClass();
    $block->title = 'Instruction';
    $block->content = $output;

    return $block;
  }
}

function _csc_related_classes_order_nodes(&$nids) {
    $node = menu_get_object();
    if (is_object($node) && !empty($node->field_related)) {
        $order = array();
        watchdog('csc_related node id', $nid);
        foreach ($node->field_related['und'] as $n => $ref) {
            $refid = $ref->target_id;
            if (in_array($refid, $nids)) { $order[] = $refid; }
        }
        $nids = $order;
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
