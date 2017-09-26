<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('CSC Newsletter'),
  'description' => t('Newsletter subscription form'),
  'category' => t('CSC Plugins'),
  'render callback' => 'csc_newsletter_render',
  'admin info' => 'csc_newsletter_admin_info',
);

/**
 * 'admin info' callback for panel pane.
 */
function csc_newsletter_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = 'CSC Newsletter Signup Form';
    $block->content = 'Newsletter subscription form';
    return $block;
  }
}

/**
 * Run-time rendering of the body of the block (content type)
 * See ctools_plugin_examples for more advanced info
 */
function csc_newsletter_render_original($subtype, $conf, $panel_args, $context = NULL) {
  $block = new stdClass();

  $block->title = 'Sign up for our Newsletter';

  //Load block from simplenews module
  $block = block_load('simplenews', 1);
  $render_array = _block_get_renderable_array(_block_render_blocks(array($block)));
  $output = render($render_array);

  $block->content = $output;

  return $block;
}

function csc_newsletter_render($subtype, $conf, $panel_args, $context = NULL) {
  global $base_root, $base_path;

  $path = drupal_get_path('module', 'csc_newsletter');
  /*drupal_add_js($base_root . $base_path . 'profiles/panopoly/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.position.min.js');
  drupal_add_js($base_root . $base_path . 'profiles/panopoly/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.dialog.min.js');*/
  drupal_add_js($path . '/plugins/content_types/csc_newsletter.js');

  $output = '

    <div class="content csc_newsletter_signup">
      <p>Click here to sign up for our newsletter and e-mail list.</p>
    </div>
  ';

  $block = new stdClass();
  $block->title = 'Sign up for our Newsletter';
  $block->content = $output;

  return $block;
}
