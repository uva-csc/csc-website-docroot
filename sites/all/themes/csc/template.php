<?php

function csc_preprocess_html(&$variables) {
      // Add variables for path to theme.
      $variables['base_path'] = base_path();
      $variables['path_to_resbartik'] = drupal_get_path('theme', 'responsive_bartik');

      // Add body classes if certain regions have content.
      if (!empty($variables['page']['featured'])) {
        $variables['classes_array'][] = 'featured';
      }

      if (!empty($variables['page']['triptych_first'])
        || !empty($variables['page']['triptych_middle'])
        || !empty($variables['page']['triptych_last'])) {
        $variables['classes_array'][] = 'triptych';
      }

      if (!empty($variables['page']['footer_firstcolumn'])
        || !empty($variables['page']['footer_secondcolumn'])
        || !empty($variables['page']['footer_thirdcolumn'])
        || !empty($variables['page']['footer_fourthcolumn'])) {
        $variables['classes_array'][] = 'footer-columns';
      }

      // og metadata
      $ogtitle = $variables['head_title'];
      if (strstr($ogtitle, '|')) {
          $pts = explode('|', $ogtitle);
          $ogtitle = trim($pts[0]);
          if ($ogtitle == 'Home') { $ogtitle = 'CSC Home'; }
      }
     $variables['og_title'] = $ogtitle;
}

/**
 * Override or insert variables into the page template for HTML output.
 */
function csc_process_html(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_html_alter($variables);
  }
}

/**
 * Override or insert variables into the page template.
 */
function csc_process_page(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
  // Always print the site name and slogan, but if they are toggled off, we'll
  // just hide them visually.
  $variables['hide_site_name']   = theme_get_setting('toggle_name') ? FALSE : TRUE;
  $variables['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TRUE;
  if ($variables['hide_site_name']) {
    // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
    $variables['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
  }
  if ($variables['hide_site_slogan']) {
    // If toggle_site_slogan is FALSE, the site_slogan will be empty, so we rebuild it.
    $variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
  }
  // Since the title and the shortcut link are both block level elements,
  // positioning them next to each other is much simpler with a wrapper div.
  if (!empty($variables['title_suffix']['add_or_remove_shortcut']) && $variables['title']) {
    // Add a wrapper div using the title_prefix and title_suffix render elements.
    $variables['title_prefix']['shortcut_wrapper'] = array(
      '#markup' => '<div class="shortcut-wrapper clearfix">',
      '#weight' => 100,
    );
    $variables['title_suffix']['shortcut_wrapper'] = array(
      '#markup' => '</div>',
      '#weight' => -99,
    );
    // Make sure the shortcut link is the first item in title_suffix.
    $variables['title_suffix']['add_or_remove_shortcut']['#weight'] = -100;
  }
}

/**
 * Implements hook_preprocess_maintenance_page().
 */
function csc_preprocess_maintenance_page(&$variables) {
  // By default, site_name is set to Drupal if no db connection is available
  // or during site installation. Setting site_name to an empty string makes
  // the site and update pages look cleaner.
  // @see template_preprocess_maintenance_page
  if (!$variables['db_is_active']) {
    $variables['site_name'] = '';
  }
  drupal_add_css(drupal_get_path('theme', 'responsive_bartik') . '/css/maintenance-page.css');
}

/**
 * Override or insert variables into the maintenance page template.
 */
function csc_process_maintenance_page(&$variables) {
  // Always print the site name and slogan, but if they are toggled off, we'll
  // just hide them visually.
  $variables['hide_site_name']   = theme_get_setting('toggle_name') ? FALSE : TRUE;
  $variables['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TRUE;
  if ($variables['hide_site_name']) {
    // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
    $variables['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
  }
  if ($variables['hide_site_slogan']) {
    // If toggle_site_slogan is FALSE, the site_slogan will be empty, so we rebuild it.
    $variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
  }
}

/**
 * Override or insert variables into the node template.
 */
function csc_preprocess_node(&$variables) {
  if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
    $variables['classes_array'][] = 'node-full';
  }
}

/**
 * Override or insert variables into the block template.
 */
function csc_preprocess_block(&$variables) {
  // In the header region visually hide block titles.
  if ($variables['block']->region == 'header') {
    $variables['title_attributes_array']['class'][] = 'element-invisible';
  }
}

/**
 * Implements theme_menu_tree().
 */
function csc_menu_tree($variables) {
  return '<ul class="menu clearfix">' . $variables['tree'] . '</ul>';
}

function csc_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . ' id="m-'. $element['#original_link']['mlid'] .'">' . $output . $sub_menu . "</li>\n";
}

function csc_menu_link__main_menu(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = $element['#title'];
  if(isset($element['#localized_options']['attributes']['title']) && $element['#localized_options']['attributes']['title']) {
    $output .= '<br><span class="menu-desc">'. $element['#localized_options']['attributes']['title'] .'</span>';
  }
  $element['#localized_options']['html'] = true;
  $output = l($output, $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . ' id="m-'. $element['#original_link']['mlid'] .'">' . $output . $sub_menu . "</li>\n";
}

/**
 * Implements theme_field__field_type().
 */
function csc_field__taxonomy_term_reference($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<h3 class="field-label">' . $variables['label'] . ': </h3>';
  }

  // Render the items.
  $output .= ($variables['element']['#label_display'] == 'inline') ? '<ul class="links inline">' : '<ul class="links">';
  foreach ($variables['items'] as $delta => $item) {
    $output .= '<li class="taxonomy-term-reference-' . $delta . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</li>';
  }
  $output .= '</ul>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . (!in_array('clearfix', $variables['classes_array']) ? ' clearfix' : '') . '"' . $variables['attributes'] .'>' . $output . '</div>';

  return $output;
}

/**
 * Print image located on theme floder
 */
function print_image($img, $width='', $height='', $alt='', $attr='', $print=true){
 $path = base_path() . path_to_theme() . "/images/" . $img;
 $w = ($width) ? "width='$width'" : '';
 $h = ($height) ? "height='$height'" : '';

 $img = "<img src='$path' $w $h alt='$alt' $attr>";

 if($print)
  echo $img;
 else
  return $img;
}
