<?php
/**
 * @file
 * csc_color_tile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function csc_color_tile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function csc_color_tile_node_info() {
  $items = array(
    'colortile' => array(
      'name' => t('Color Tile'),
      'base' => 'node_content',
      'description' => t('Color tiles shown on home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
