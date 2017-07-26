<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Main menu'),
  'description' => t('Shows main menu.'),
  'category' => t('CSC Plugins'),
  'render callback' => 'csc_main_menu_render',
  'admin info' => 'csc_main_menu_admin_info',
);

/**
 * 'admin info' callback for panel pane.
 */
function csc_main_menu_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = 'Main menu';
    $block->content = 'Main menu widget';
    return $block;
  }
}

/**
 * Run-time rendering of the body of the block (content type)
 * See ctools_plugin_examples for more advanced info
 */
function csc_main_menu_render($subtype, $conf, $panel_args, $context = NULL) {
  drupal_add_js(drupal_get_path('module', 'csc_main_menu') .'/plugins/content_types/csc_main_menu.js');
  drupal_add_css(drupal_get_path('module', 'csc_main_menu') .'/plugins/content_types/csc_main_menu.css');
  
  $block = new stdClass();

  $block->title = 'Main menu';

  $tree = menu_tree_all_data('main-menu');
  $menu_array = menu_tree_output($tree);
  $csc_main_menu = drupal_render($menu_array);
  $block->content = '<ul id="main-menu"' . substr($csc_main_menu, 3);
  
  return $block;
}