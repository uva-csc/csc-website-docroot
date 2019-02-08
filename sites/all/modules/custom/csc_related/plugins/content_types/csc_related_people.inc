<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('CSC Related People'),
  'description' => t('Shows People related to current page'),
  'category' => t('CSC Plugins'),
  'render callback' => 'csc_related_people_render',
  'admin info' => 'csc_related_people_info',
  'edit form' => 'csc_related_people_edit_form',
  'defaults' => array(
        'position' => 'right',
        'order' => 'noderef',
        'node_count' => '10',
        'link_params' => '',  // parameter to add search string to the "All" link
    ),
);

/**
 * 'admin info' callback for panel pane.
 */
function csc_related_people_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = 'Related People';
    $block->content = 'CSC Related People widget';
    return $block;
  }
}

/**
 * 'Edit form' callback for the class list settings.
 */
function csc_related_people_edit_form($form, &$form_state) {

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
    $form['node_count'] = array(
        '#type' => 'textfield',
        '#title' => t('Number of Classes to Show'),
        '#default_value' => (empty($conf['node_count'])) ? '3' : $conf['node_count'],
        '#description' => t('How many classes should show in the list? Type "all" to show all nodes'),
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

function csc_related_people_edit_form_submit($form, &$form_state) {
    foreach (array_keys($form_state['plugin']['defaults']) as $key) {
        if (isset($form_state['values'][$key])) {
            $form_state['conf'][$key] = $form_state['values'][$key];
        }
    }
}

/**
 * Build blocks for Related events
 */
function csc_related_people_render($subtype, $conf, $panel_args, $context = NULL) {
  module_load_include('inc', 'csc_related', 'csc_related');

  $type = 'people';
  $node_count = (!empty($conf['node_count'])) ? $conf['node_count'] : 8;
  if  ($node_count == 'all' || !is_numeric($node_count)) { $node_count = FALSE; }
  $nids = csc_related_get_nodes($type, $node_count);

  // Filter field_related nids by related people nids to get proper order for display
  $curr_nid = csc_related_current_nid();
  $curr_node = node_load($curr_nid);
  if ($curr_node) {
      $emw = entity_metadata_wrapper('node', $curr_node);
      $frnids = $emw->field_related->value();
      foreach($frnids as $n => $obj) {
        $frnids[$n] = $obj->nid;
      }
      $nids = array_intersect($frnids, $nids); // use array_intersect to impart the proper order of nids
      
      if(is_array($nids) && sizeof($nids) > 0){
        $output = '<div class="see-all"><a href="'. url('list/people/' . $curr_nid) .'">SEE ALL</a></div>';
        foreach($nids as $nid){
          $node = node_load($nid);
          $lng = $node->language;
          $output .= theme('csc_related_people_item', array('title' => $node->title,
                                                            'body' => $node->field_small_teaser[$lng][0]['value'],
                                                            'nid' => $node->nid,
                                                            'position' => (!empty($node->field_position[$lng])) ? $node->field_position[$lng][0]['value'] : '',
                                                            'image' => isset($node->field_thumbnail[$lng][0]['uri']) ? $node->field_thumbnail[$lng][0]['uri'] : '',
                                                            //'image' => isset($node->field_featured_image[$lng][1]['uri']) ? $node->field_featured_image[$lng][1]['uri'] : ''
                                                      ));
        }
    
        $block = new stdClass();
        $block->title = 'People';
        $block->content = '<div class="csc-people-container">' . $output . '</div>';
    
        return $block;
      }
   }
}

/**
 * Theme function
 */
function theme_csc_related_people_item($var){
  $image = ($var['image']) ? theme_image_style(array('style_name' => 'csc_medium','path' => $var['image'], 'alt' => $var['title'], 'title' => $var['title'], 'width' => '', 'height' => ''  )) : '<img src="/sites/all/themes/csc/images/CSC_ImagePlaceholder9.png" />';

  $output = '<div class="csc-people-wrapper">';
  $outputInner = '<div class="csc-people-detail"><div class="csc-people-text'. ($image == '' ? ' show' : '') . '">';
  $outputInner.= "<h2>" . $var['title'] . "</h2>";
  $outputInner.= $var['position'];
  $outputInner.= '</div></div>';
  $outputInner.= $image;
  $url = l($outputInner, "node/" . $var['nid'], array('html' => true));
  $output.= $url . '</div>';

  return $output;
}
