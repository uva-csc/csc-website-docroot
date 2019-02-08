<?php
/**
 * @file
 * csc_panopoly_feature_overrides.features.inc
 */

/**
 * Implements hook_field_group_info_alter().
 */
function csc_panopoly_feature_overrides_field_group_info_alter(&$data) {
  if (isset($data['group_user_profile|user|user|form'])) {
    $data['group_user_profile|user|user|form']->data['format_settings']['instance_settings']['classes'] = ' group-user-profile field-group-fieldset'; /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function csc_panopoly_feature_overrides_field_default_field_instances_alter(&$data) {
  if (isset($data['fieldable_panels_pane-basic_file-field_basic_file_file'])) {
    $data['fieldable_panels_pane-basic_file-field_basic_file_file']['widget']['settings']['imce_filefield_on'] = 0; /* WAS: '' */
  }
  if (isset($data['fieldable_panels_pane-image-field_basic_image_image'])) {
    $data['fieldable_panels_pane-image-field_basic_image_image']['settings']['image_field_caption'] = 0; /* WAS: '' */
    $data['fieldable_panels_pane-image-field_basic_image_image']['settings']['image_field_caption_wrapper'] = array(
      'image_field_caption_default' => array(
        'format' => 'plain_text',
        'value' => '',
      ),
    ); /* WAS: '' */
    $data['fieldable_panels_pane-image-field_basic_image_image']['widget']['settings']['imce_filefield_on'] = 0; /* WAS: '' */
    unset($data['fieldable_panels_pane-image-field_basic_image_image']['widget']['settings']['manualcrop_styles_list']['panopoly_image_full']);
  }
  if (isset($data['fieldable_panels_pane-map-field_map_address'])) {
    $data['fieldable_panels_pane-map-field_map_address']['display']['default']['settings']['apikey'] = ''; /* WAS: '' */
  }
  if (isset($data['fieldable_panels_pane-table-field_basic_table_table'])) {
    $data['fieldable_panels_pane-table-field_basic_table_table']['default_value'][0]['tablefield']['cell_0_0'] = ''; /* WAS: '' */
    $data['fieldable_panels_pane-table-field_basic_table_table']['default_value'][0]['tablefield']['cell_0_1'] = ''; /* WAS: '' */
    $data['fieldable_panels_pane-table-field_basic_table_table']['default_value'][0]['tablefield']['cell_1_0'] = ''; /* WAS: '' */
    $data['fieldable_panels_pane-table-field_basic_table_table']['default_value'][0]['tablefield']['cell_1_1'] = ''; /* WAS: '' */
    $data['fieldable_panels_pane-table-field_basic_table_table']['default_value'][0]['tablefield']['cell_2_0'] = ''; /* WAS: '' */
    $data['fieldable_panels_pane-table-field_basic_table_table']['default_value'][0]['tablefield']['cell_2_1'] = ''; /* WAS: '' */
    $data['fieldable_panels_pane-table-field_basic_table_table']['display']['default']['settings']['export_csv'] = FALSE; /* WAS: 0 */
    $data['fieldable_panels_pane-table-field_basic_table_table']['display']['default']['settings']['hide_cols_skip_head'] = FALSE; /* WAS: 0 */
    $data['fieldable_panels_pane-table-field_basic_table_table']['display']['default']['settings']['hide_empty_cols'] = FALSE; /* WAS: 0 */
    $data['fieldable_panels_pane-table-field_basic_table_table']['display']['default']['settings']['hide_empty_rows'] = FALSE; /* WAS: 0 */
    $data['fieldable_panels_pane-table-field_basic_table_table']['display']['default']['settings']['hide_header'] = FALSE; /* WAS: 0 */
    unset($data['fieldable_panels_pane-table-field_basic_table_table']['default_value'][0]['tablefield']['caption']);
    unset($data['fieldable_panels_pane-table-field_basic_table_table']['default_value'][0]['tablefield']['paste']);
    unset($data['fieldable_panels_pane-table-field_basic_table_table']['default_value'][0]['tablefield']['tabledata']);
    unset($data['fieldable_panels_pane-table-field_basic_table_table']['widget']['settings']['cell_processing']);
    unset($data['fieldable_panels_pane-table-field_basic_table_table']['widget']['settings']['lock_values']);
    unset($data['fieldable_panels_pane-table-field_basic_table_table']['widget']['settings']['restrict_rebuild']);
  }
  if (isset($data['node-panopoly_page-body'])) {
    $data['node-panopoly_page-body']['display']['default']['type'] = 'hidden'; /* WAS: 'text_default' */
    $data['node-panopoly_page-body']['display']['featured']['type'] = 'hidden'; /* WAS: 'text_summary_or_trimmed' */
    $data['node-panopoly_page-body']['display']['teaser']['type'] = 'hidden'; /* WAS: 'text_summary_or_trimmed' */
    unset($data['node-panopoly_page-body']['display']['default']['module']);
    unset($data['node-panopoly_page-body']['display']['featured']['module']);
    unset($data['node-panopoly_page-body']['display']['featured']['settings']['trim_length']);
    unset($data['node-panopoly_page-body']['display']['teaser']['module']);
    unset($data['node-panopoly_page-body']['display']['teaser']['settings']['trim_length']);
  }
  if (isset($data['node-panopoly_page-field_featured_categories'])) {
    $data['node-panopoly_page-field_featured_categories']['display']['default']['type'] = 'hidden'; /* WAS: 'taxonomy_term_reference_link' */
    unset($data['node-panopoly_page-field_featured_categories']['display']['default']['module']);
  }
  if (isset($data['node-panopoly_page-field_featured_image'])) {
    $data['node-panopoly_page-field_featured_image']['display']['default']['type'] = 'hidden'; /* WAS: 'image' */
    $data['node-panopoly_page-field_featured_image']['display']['featured']['type'] = 'hidden'; /* WAS: 'image' */
    $data['node-panopoly_page-field_featured_image']['display']['teaser']['type'] = 'hidden'; /* WAS: 'image' */
    $data['node-panopoly_page-field_featured_image']['settings']['image_field_caption'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['settings']['image_field_caption_wrapper'] = array(
      'image_field_caption_default' => array(
        'format' => 'plain_text',
        'value' => '',
      ),
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['module'] = 'media'; /* WAS: 'image' */
    $data['node-panopoly_page-field_featured_image']['widget']['settings']['allowed_schemes'] = array(
      'public' => 'public',
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['settings']['allowed_types'] = array(
      'image' => 'image',
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['settings']['browser_plugins'] = array(); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['settings']['imce_filefield_on'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['type'] = 'media_generic'; /* WAS: 'image_image' */
    unset($data['node-panopoly_page-field_featured_image']['display']['default']['module']);
    unset($data['node-panopoly_page-field_featured_image']['display']['default']['settings']['image_link']);
    unset($data['node-panopoly_page-field_featured_image']['display']['default']['settings']['image_style']);
    unset($data['node-panopoly_page-field_featured_image']['display']['featured']['module']);
    unset($data['node-panopoly_page-field_featured_image']['display']['featured']['settings']['image_link']);
    unset($data['node-panopoly_page-field_featured_image']['display']['featured']['settings']['image_style']);
    unset($data['node-panopoly_page-field_featured_image']['display']['teaser']['module']);
    unset($data['node-panopoly_page-field_featured_image']['display']['teaser']['settings']['image_link']);
    unset($data['node-panopoly_page-field_featured_image']['display']['teaser']['settings']['image_style']);
    unset($data['node-panopoly_page-field_featured_image']['widget']['settings']['manualcrop_styles_list']['panopoly_image_full']);
  }
  if (isset($data['node-panopoly_page-field_featured_status'])) {
    $data['node-panopoly_page-field_featured_status']['display']['default']['type'] = 'hidden'; /* WAS: 'list_default' */
    unset($data['node-panopoly_page-field_featured_status']['display']['default']['module']);
  }
  if (isset($data['taxonomy_term-panopoly_categories-field_featured_image'])) {
    $data['taxonomy_term-panopoly_categories-field_featured_image']['display']['default']['type'] = 'hidden'; /* WAS: 'image' */
    $data['taxonomy_term-panopoly_categories-field_featured_image']['settings']['image_field_caption'] = 0; /* WAS: '' */
    $data['taxonomy_term-panopoly_categories-field_featured_image']['settings']['image_field_caption_wrapper'] = array(
      'image_field_caption_default' => array(
        'format' => 'plain_text',
        'value' => '',
      ),
    ); /* WAS: '' */
    $data['taxonomy_term-panopoly_categories-field_featured_image']['widget']['settings']['imce_filefield_on'] = 0; /* WAS: '' */
    unset($data['taxonomy_term-panopoly_categories-field_featured_image']['display']['default']['module']);
    unset($data['taxonomy_term-panopoly_categories-field_featured_image']['display']['default']['settings']['image_link']);
    unset($data['taxonomy_term-panopoly_categories-field_featured_image']['display']['default']['settings']['image_style']);
    unset($data['taxonomy_term-panopoly_categories-field_featured_image']['widget']['settings']['manualcrop_styles_list']['panopoly_image_full']);
  }
  if (isset($data['user-user-field_user_about'])) {
    $data['user-user-field_user_about']['display']['default']['type'] = 'hidden'; /* WAS: 'text_default' */
    unset($data['user-user-field_user_about']['display']['default']['module']);
  }
  if (isset($data['user-user-field_user_picture'])) {
    $data['user-user-field_user_picture']['display']['default']['type'] = 'hidden'; /* WAS: 'image' */
    $data['user-user-field_user_picture']['settings']['image_field_caption'] = 0; /* WAS: '' */
    $data['user-user-field_user_picture']['settings']['image_field_caption_wrapper'] = array(
      'image_field_caption_default' => array(
        'format' => 'plain_text',
        'value' => '',
      ),
    ); /* WAS: '' */
    $data['user-user-field_user_picture']['widget']['settings']['imce_filefield_on'] = 0; /* WAS: '' */
    unset($data['user-user-field_user_picture']['display']['default']['module']);
    unset($data['user-user-field_user_picture']['display']['default']['settings']['image_link']);
    unset($data['user-user-field_user_picture']['display']['default']['settings']['image_style']);
    unset($data['user-user-field_user_picture']['widget']['settings']['manualcrop_styles_list']['panopoly_image_full']);
  }
}

/**
 * Implements hook_file_default_displays_alter().
 */
function csc_panopoly_feature_overrides_file_default_displays_alter(&$data) {
  if (isset($data['image__default__file_field_file_default'])) {
    $data['image__default__file_field_file_default']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['image__default__file_field_image'])) {
    $data['image__default__file_field_image']->settings['image_link'] = 'file'; /* WAS: '' */
    $data['image__default__file_field_image']->settings['image_style'] = 'panopoly_image_original'; /* WAS: '' */
  }
  if (isset($data['image__preview__file_field_file_default'])) {
    $data['image__preview__file_field_file_default']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['image__preview__file_field_image'])) {
    $data['image__preview__file_field_image']->settings['image_style'] = 'panopoly_image_thumbnail'; /* WAS: 'thumbnail' */
  }
  if (isset($data['image__preview__file_field_media_large_icon'])) {
    $data['image__preview__file_field_media_large_icon']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['image__teaser__file_field_file_default'])) {
    $data['image__teaser__file_field_file_default']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['image__teaser__file_field_image'])) {
    $data['image__teaser__file_field_image']->settings['image_style'] = 'panopoly_image_quarter'; /* WAS: 'medium' */
  }
  if (isset($data['video__default__media_vimeo_video'])) {
    $data['video__default__media_vimeo_video']->settings['protocol_specify'] = FALSE; /* WAS: 0 */
  }
  if (isset($data['video__default__media_youtube_video'])) {
    $data['video__default__media_youtube_video']->settings['modestbranding'] = 1; /* WAS: 0 */
    $data['video__default__media_youtube_video']->settings['rel'] = 1; /* WAS: 0 */
  }
  if (isset($data['video__preview__file_field_file_default'])) {
    $data['video__preview__file_field_file_default']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['video__preview__media_vimeo_image'])) {
    $data['video__preview__media_vimeo_image']->settings['image_style'] = 'panopoly_image_thumbnail'; /* WAS: 'media_thumbnail' */
  }
  if (isset($data['video__preview__media_youtube_image'])) {
    $data['video__preview__media_youtube_image']->settings['image_style'] = 'panopoly_image_thumbnail'; /* WAS: 'media_thumbnail' */
  }
  if (isset($data['video__teaser__media_youtube_video'])) {
    $data['video__teaser__media_youtube_video']->settings['rel'] = 1; /* WAS: 0 */
  }
}

/**
 * Implements hook_file_default_types_alter().
 */
function csc_panopoly_feature_overrides_file_default_types_alter(&$data) {
  if (isset($data['audio'])) {
    $data['audio']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['document'])) {
    $data['document']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['image'])) {
    $data['image']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['video'])) {
    $data['video']->disabled = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_filter_default_formats_alter().
 */
function csc_panopoly_feature_overrides_filter_default_formats_alter(&$data) {
  if (isset($data['panopoly_html_text'])) {
    $data['panopoly_html_text']['filters']['wysiwyg']['settings']['rule_bypass_style_urls'] = 0; /* WAS: '' */
    $data['panopoly_html_text']['filters']['wysiwyg']['settings']['rule_bypass_valid_classes'] = 0; /* WAS: '' */
    $data['panopoly_html_text']['filters']['wysiwyg']['settings']['rule_bypass_valid_ids'] = 0; /* WAS: '' */
  }
  if (isset($data['panopoly_wysiwyg_text'])) {
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['rule_bypass_style_urls'] = 0; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['rule_bypass_valid_classes'] = 0; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['rule_bypass_valid_ids'] = 0; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_border-1']['border'] = 'border'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_box']['margin'] = 'margin'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_box']['margin-bottom'] = 'margin-bottom'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_box']['margin-left'] = 'margin-left'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_box']['margin-right'] = 'margin-right'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_box']['margin-top'] = 'margin-top'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_box']['padding'] = 'padding'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_box']['padding-bottom'] = 'padding-bottom'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_box']['padding-top'] = 'padding-top'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_color']['background-color'] = 'background-color'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_layout']['clear'] = 'clear'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_layout']['display'] = 'display'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_layout']['position'] = 'position'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_layout']['visibility'] = 'visibility'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_list']['list-style'] = 'list-style'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_list']['list-style-type'] = 'list-style-type'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_positioning']['bottom'] = 'bottom'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_positioning']['left'] = 'left'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_positioning']['overflow'] = 'overflow'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_positioning']['right'] = 'right'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_positioning']['top'] = 'top'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_positioning']['vertical-align'] = 'vertical-align'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_positioning']['z-index'] = 'z-index'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_table']['border-collapse'] = 'border-collapse'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_table']['border-spacing'] = 'border-spacing'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_table']['caption-side'] = 'caption-side'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_table']['empty-cells'] = 'empty-cells'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_table']['table-layout'] = 'table-layout'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_user']['cursor'] = 'cursor'; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['valid_elements'] = '@[style|class],
            a[!href|target<_blank|title],
            div[align<center?justify?left?right],
            br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,hr,
            span,p,
            h1,h2,h3,h4,h5,h6,
            img[!src|title|alt|width|height|hspace|vspace],
            table,tr,th,td'; /* WAS: '@[style|class],
    a[!href|target<_blank|title],
    div[align<center?justify?left?right],
    br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
    span,p,
    h1,h2,h3,h4,h5,h6,
    img[!src|title|alt|width|height|hspace|vspace],' */
  }
}

/**
 * Implements hook_image_styles_alter().
 */
function csc_panopoly_feature_overrides_image_styles_alter(&$data) {
  if (isset($data['apps_featured_screenshot'])) {

  if (!isset($data['apps_featured_screenshot']['storage']) || $data['apps_featured_screenshot']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['apps_featured_screenshot']['effects'] = array_values($data['apps_featured_screenshot']['effects']);
    $data['apps_featured_screenshot']['label'] = 'apps_featured_screenshot';
  }
  }
  if (isset($data['apps_logo'])) {

  if (!isset($data['apps_logo']['storage']) || $data['apps_logo']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['apps_logo']['effects'] = array_values($data['apps_logo']['effects']);
    $data['apps_logo']['label'] = 'apps_logo';
  }
  }
  if (isset($data['apps_logo_small'])) {

  if (!isset($data['apps_logo_small']['storage']) || $data['apps_logo_small']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['apps_logo_small']['effects'] = array_values($data['apps_logo_small']['effects']);
    $data['apps_logo_small']['label'] = 'apps_logo_small';
  }
  }
  if (isset($data['apps_screenshot'])) {

  if (!isset($data['apps_screenshot']['storage']) || $data['apps_screenshot']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['apps_screenshot']['effects'] = array_values($data['apps_screenshot']['effects']);
    $data['apps_screenshot']['label'] = 'apps_screenshot';
  }
  }
  if (isset($data['linkit_thumb'])) {

  if (!isset($data['linkit_thumb']['storage']) || $data['linkit_thumb']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['linkit_thumb']['effects'] = array_values($data['linkit_thumb']['effects']);
    $data['linkit_thumb']['label'] = 'linkit_thumb';
  }
  }
  if (isset($data['panopoly_image_featured'])) {

  if (!isset($data['panopoly_image_featured']['storage']) || $data['panopoly_image_featured']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['panopoly_image_featured']['effects'] = array_values($data['panopoly_image_featured']['effects']);
    $data['panopoly_image_featured']['effects'][0]['data']['upscale'] = 1;
  }

  if (!isset($data['panopoly_image_featured']['storage']) || $data['panopoly_image_featured']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['panopoly_image_featured']['effects'] = array_values($data['panopoly_image_featured']['effects']);
    $data['panopoly_image_featured']['effects'][0]['data']['width'] = 720;
  }

  if (!isset($data['panopoly_image_featured']['storage']) || $data['panopoly_image_featured']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['panopoly_image_featured']['effects'] = array_values($data['panopoly_image_featured']['effects']);
    $data['panopoly_image_featured']['effects'][1]['data']['height'] = 390;
  }

  if (!isset($data['panopoly_image_featured']['storage']) || $data['panopoly_image_featured']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['panopoly_image_featured']['effects'] = array_values($data['panopoly_image_featured']['effects']);
    $data['panopoly_image_featured']['effects'][1]['data']['width'] = 720;
  }

  if (!isset($data['panopoly_image_featured']['storage']) || $data['panopoly_image_featured']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['panopoly_image_featured']['effects'] = array_values($data['panopoly_image_featured']['effects']);
    $data['panopoly_image_featured']['effects'][1]['weight'] = 2;
  }

  if (!isset($data['panopoly_image_featured']['storage']) || $data['panopoly_image_featured']['storage'] == IMAGE_STORAGE_DEFAULT) {
    unset($data['panopoly_image_featured']['effects'][2]);
  }
  }
  if (isset($data['panopoly_image_full'])) {

  if (!isset($data['panopoly_image_full']['storage']) || $data['panopoly_image_full']['storage'] == IMAGE_STORAGE_DEFAULT) {
    unset($data['panopoly_image_full']['effects'][0]);
  }

  if (!isset($data['panopoly_image_full']['storage']) || $data['panopoly_image_full']['storage'] == IMAGE_STORAGE_DEFAULT) {
    unset($data['panopoly_image_full']['effects'][1]);
  }
  }
}

/**
 * Implements hook_default_linkit_profiles_alter().
 */
function csc_panopoly_feature_overrides_default_linkit_profiles_alter(&$data) {
  if (isset($data['content_editors'])) {
    $data['content_editors']->data['attribute_plugins']['class']['enabled'] = 0; /* WAS: 1 */
    $data['content_editors']->data['attributes'] = array(
      'rel' => array(
        'weight' => 0,
        'enabled' => 0,
      ),
      'class' => array(
        'weight' => 0,
        'enabled' => 0,
      ),
      'accesskey' => array(
        'weight' => 0,
        'enabled' => 0,
      ),
      'id' => array(
        'weight' => 0,
        'enabled' => 0,
      ),
      'title' => array(
        'weight' => 0,
        'enabled' => 1,
      ),
    ); /* WAS: '' */
    $data['content_editors']->data['entity:file']['url_type'] = 'entity'; /* WAS: '' */
    $data['content_editors']->data['entity:node']['bundles'] = array(
      'activities' => 0,
      'article' => 0,
      'class' => 0,
      'panopoly_page' => 0,
      'initiatives' => 0,
      'engagement' => 0,
      'event' => 0,
      'feature' => 0,
      'learning' => 0,
      'news' => 0,
      'organization' => 0,
      'page' => 0,
      'people' => 0,
      'research' => 0,
      'simplenews' => 0,
    ); /* WAS: '' */
    $data['content_editors']->data['entity:node']['group_by_bundle'] = 0; /* WAS: '' */
    $data['content_editors']->data['entity:taxonomy_term']['bundles'] = array(
      'panopoly_categories' => 0,
      'tags' => 0,
      'newsletter' => 0,
    ); /* WAS: '' */
    $data['content_editors']->data['entity:taxonomy_term']['group_by_bundle'] = 0; /* WAS: '' */
    $data['content_editors']->data['insert_plugin']['plugin'] = 'raw_url'; /* WAS: '' */
    $data['content_editors']->data['insert_plugin']['url_method'] = 1; /* WAS: 2 */
    $data['content_editors']->profile_type = 2; /* WAS: 1 */
    unset($data['content_editors']->data['entity:search_api_index']);
    unset($data['content_editors']->data['entity:search_api_server']);
    unset($data['content_editors']->data['search_plugins']['entity:search_api_index']);
    unset($data['content_editors']->data['search_plugins']['entity:search_api_server']);
    unset($data['content_editors']->data['text_formats']);
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function csc_panopoly_feature_overrides_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_edit_panel_context'])) {
    $data['node_edit_panel_context']->conf['display']->content['new-0581ce01-43a7-4745-b1fb-b10754d71419'] = (object) array(
          'pid' => 'new-0581ce01-43a7-4745-b1fb-b10754d71419',
          'panel' => 'sidebar',
          'type' => 'node_form_buttons',
          'subtype' => 'node_form_buttons',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => array(),
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 8,
          'locks' => array(),
          'uuid' => '0581ce01-43a7-4745-b1fb-b10754d71419',
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-1557fa3f-0820-4917-b5a3-2e94dab584d3'] = (object) array(
          'pid' => 'new-1557fa3f-0820-4917-b5a3-2e94dab584d3',
          'panel' => 'sidebar',
          'type' => 'entity_form_field',
          'subtype' => 'node:field_vertical',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => '',
            'formatter' => '',
            'context' => 'argument_node_edit_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => '1557fa3f-0820-4917-b5a3-2e94dab584d3',
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-1f8f9b3f-280d-41c0-ace8-d9d7a65b05cb'] = (object) array(
          'pid' => 'new-1f8f9b3f-280d-41c0-ace8-d9d7a65b05cb',
          'panel' => 'sidebar',
          'type' => 'node_form_menu',
          'subtype' => 'node_form_menu',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_node_edit_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 5,
          'locks' => array(),
          'uuid' => '1f8f9b3f-280d-41c0-ace8-d9d7a65b05cb',
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-27461e33-2142-496b-bdef-3b4f4f37f390'] = (object) array(
          'pid' => 'new-27461e33-2142-496b-bdef-3b4f4f37f390',
          'panel' => 'sidebar',
          'type' => 'node_form_author',
          'subtype' => 'node_form_author',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => array(),
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 7,
          'locks' => array(),
          'uuid' => '27461e33-2142-496b-bdef-3b4f4f37f390',
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-646a54da-4dce-4c04-a911-3d4cbbbe8b9c'] = (object) array(
          'pid' => 'new-646a54da-4dce-4c04-a911-3d4cbbbe8b9c',
          'panel' => 'contentmain',
          'type' => 'node_form_path',
          'subtype' => 'node_form_path',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_node_edit_1',
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '646a54da-4dce-4c04-a911-3d4cbbbe8b9c',
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-6b9f3387-e850-4081-ad22-70e8e0fcb583'] = (object) array(
          'pid' => 'new-6b9f3387-e850-4081-ad22-70e8e0fcb583',
          'panel' => 'sidebar',
          'type' => 'entity_form_field',
          'subtype' => 'node:field_featured_image',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => '',
            'formatter' => '',
            'context' => 'argument_node_edit_1',
            'override_title' => 1,
            'override_title_text' => 'Featured image',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '6b9f3387-e850-4081-ad22-70e8e0fcb583',
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-850eeb5b-d2f5-4e30-8cde-170ddff1467a'] = (object) array(
          'pid' => 'new-850eeb5b-d2f5-4e30-8cde-170ddff1467a',
          'panel' => 'contentmain',
          'type' => 'form',
          'subtype' => 'form',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_node_edit_1',
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => '850eeb5b-d2f5-4e30-8cde-170ddff1467a',
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-96febc9f-78f6-4052-b0d7-5f079124b924'] = (object) array(
          'pid' => 'new-96febc9f-78f6-4052-b0d7-5f079124b924',
          'panel' => 'sidebar',
          'type' => 'panelizer_form_default',
          'subtype' => 'panelizer_form_default',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
          'uuid' => '96febc9f-78f6-4052-b0d7-5f079124b924',
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-a33ad46b-8f12-4020-bb22-95d5055c6097'] = (object) array(
          'pid' => 'new-a33ad46b-8f12-4020-bb22-95d5055c6097',
          'panel' => 'contentmain',
          'type' => 'node_form_title',
          'subtype' => 'node_form_title',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_node_edit_1',
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => 'a33ad46b-8f12-4020-bb22-95d5055c6097',
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-bf0d67ac-6135-482f-af87-4ffb78f4fcb7'] = (object) array(
          'pid' => 'new-bf0d67ac-6135-482f-af87-4ffb78f4fcb7',
          'panel' => 'sidebar',
          'type' => 'entity_form_field',
          'subtype' => 'node:field_thumbnail',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => '',
            'formatter' => '',
            'context' => 'argument_node_edit_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => 'bf0d67ac-6135-482f-af87-4ffb78f4fcb7',
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-c457a13f-1434-40ea-b081-46264ac49bc4'] = (object) array(
          'pid' => 'new-c457a13f-1434-40ea-b081-46264ac49bc4',
          'panel' => 'sidebar',
          'type' => 'entity_form_field',
          'subtype' => 'node:field_featured_categories',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => '',
            'formatter' => '',
            'context' => 'argument_node_edit_1',
            'override_title' => 1,
            'override_title_text' => 'Content category',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 4,
          'locks' => array(),
          'uuid' => 'c457a13f-1434-40ea-b081-46264ac49bc4',
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-edd5febf-95e6-4554-a486-4481da969e37'] = (object) array(
          'pid' => 'new-edd5febf-95e6-4554-a486-4481da969e37',
          'panel' => 'sidebar',
          'type' => 'node_form_publishing',
          'subtype' => 'node_form_publishing',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_node_edit_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 6,
          'locks' => array(),
          'uuid' => 'edd5febf-95e6-4554-a486-4481da969e37',
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->panels['contentmain'][0] = 'new-a33ad46b-8f12-4020-bb22-95d5055c6097'; /* WAS: 'new-73569090-5f67-47b1-b6a5-634bc8104c2b' */
    $data['node_edit_panel_context']->conf['display']->panels['contentmain'][1] = 'new-646a54da-4dce-4c04-a911-3d4cbbbe8b9c'; /* WAS: 'new-17fa67de-e033-46f2-bdd8-a138e91da0e4' */
    $data['node_edit_panel_context']->conf['display']->panels['contentmain'][2] = 'new-850eeb5b-d2f5-4e30-8cde-170ddff1467a'; /* WAS: 'new-fb4920fb-24fa-425e-b6fc-958b5ccd2d52' */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar'][0] = 'new-6b9f3387-e850-4081-ad22-70e8e0fcb583'; /* WAS: 'new-373bd769-1e08-4ec5-85b6-0a1d2fc759fd' */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar'][1] = 'new-bf0d67ac-6135-482f-af87-4ffb78f4fcb7'; /* WAS: 'new-51126c95-cf51-4ad6-a27a-11e4260d8023' */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar'][2] = 'new-1557fa3f-0820-4917-b5a3-2e94dab584d3'; /* WAS: 'new-99f6c0bd-36fd-411b-9833-c0be0fab7548' */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar'][3] = 'new-96febc9f-78f6-4052-b0d7-5f079124b924'; /* WAS: 'new-e38ab3a3-24d0-4ac2-900e-4ddb0248be0c' */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar'][4] = 'new-c457a13f-1434-40ea-b081-46264ac49bc4'; /* WAS: 'new-9176b962-e64f-44a6-8ebe-e03ebf0f6c3d' */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar'][5] = 'new-1f8f9b3f-280d-41c0-ace8-d9d7a65b05cb'; /* WAS: 'new-6e4a98d8-3738-41b9-8c33-4b4c905c6834' */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar'][6] = 'new-edd5febf-95e6-4554-a486-4481da969e37'; /* WAS: 'new-c0926cca-059c-4bb1-bccd-2838ec7a93f2' */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar'][7] = 'new-27461e33-2142-496b-bdef-3b4f4f37f390'; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar'][8] = 'new-0581ce01-43a7-4745-b1fb-b10754d71419'; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->title_pane = 'new-850eeb5b-d2f5-4e30-8cde-170ddff1467a'; /* WAS: 'new-fb4920fb-24fa-425e-b6fc-958b5ccd2d52' */
    $data['node_edit_panel_context']->conf['display']->uuid = '2f3914a5-73cc-4a8c-81b7-4b7400fba22a'; /* WAS: '56f6d0a5-d0cb-4670-8442-80de25b84871' */
    unset($data['node_edit_panel_context']->conf['display']->content['new-17fa67de-e033-46f2-bdd8-a138e91da0e4']);
    unset($data['node_edit_panel_context']->conf['display']->content['new-373bd769-1e08-4ec5-85b6-0a1d2fc759fd']);
    unset($data['node_edit_panel_context']->conf['display']->content['new-51126c95-cf51-4ad6-a27a-11e4260d8023']);
    unset($data['node_edit_panel_context']->conf['display']->content['new-6e4a98d8-3738-41b9-8c33-4b4c905c6834']);
    unset($data['node_edit_panel_context']->conf['display']->content['new-73569090-5f67-47b1-b6a5-634bc8104c2b']);
    unset($data['node_edit_panel_context']->conf['display']->content['new-9176b962-e64f-44a6-8ebe-e03ebf0f6c3d']);
    unset($data['node_edit_panel_context']->conf['display']->content['new-99f6c0bd-36fd-411b-9833-c0be0fab7548']);
    unset($data['node_edit_panel_context']->conf['display']->content['new-c0926cca-059c-4bb1-bccd-2838ec7a93f2']);
    unset($data['node_edit_panel_context']->conf['display']->content['new-e38ab3a3-24d0-4ac2-900e-4ddb0248be0c']);
    unset($data['node_edit_panel_context']->conf['display']->content['new-fb4920fb-24fa-425e-b6fc-958b5ccd2d52']);
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function csc_panopoly_feature_overrides_default_page_manager_pages_alter(&$data) {
  if (isset($data['panopoly_search'])) {
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-0c89e409-2d28-4af8-ac83-c25b4875c518'] = (object) array(
          'pid' => 'new-0c89e409-2d28-4af8-ac83-c25b4875c518',
          'panel' => 'fixed',
          'type' => 'csc_newsletter',
          'subtype' => 'csc_newsletter',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => '0c89e409-2d28-4af8-ac83-c25b4875c518',
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-3e13a5f8-cf24-4d72-adb1-9fc1cc2e5cbd'] = (object) array(
          'pid' => 'new-3e13a5f8-cf24-4d72-adb1-9fc1cc2e5cbd',
          'panel' => 'fluid1',
          'type' => 'search_current',
          'subtype' => 'search_current',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'type' => 'node',
            'form' => 'advanced',
            'path_type' => 'default',
            'path' => '',
            'override_prompt' => FALSE,
            'prompt' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '3e13a5f8-cf24-4d72-adb1-9fc1cc2e5cbd',
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-70a065f1-4c36-4835-9354-644ecee826f9'] = (object) array(
          'pid' => 'new-70a065f1-4c36-4835-9354-644ecee826f9',
          'panel' => 'fluid2',
          'type' => 'facet',
          'subtype' => 'facet',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => array(),
            'override_title' => 1,
            'override_title_text' => 'Filter by Type',
            'delta' => '1Cpx6naJU4Y3YvKVc0vcLK7Yo0ahaN0l',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '70a065f1-4c36-4835-9354-644ecee826f9',
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-78b2ab61-7841-4c9e-b063-3ed0e19f9528'] = (object) array(
          'pid' => 'new-78b2ab61-7841-4c9e-b063-3ed0e19f9528',
          'panel' => 'fixed',
          'type' => 'main_menu',
          'subtype' => 'main_menu',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '78b2ab61-7841-4c9e-b063-3ed0e19f9528',
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-9708aa7d-5cb0-4a6f-9580-c6400ef66e63'] = (object) array(
          'pid' => 'new-9708aa7d-5cb0-4a6f-9580-c6400ef66e63',
          'panel' => 'fixed',
          'type' => 'csc_latest_news',
          'subtype' => 'csc_latest_news',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '9708aa7d-5cb0-4a6f-9580-c6400ef66e63',
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-cbef272f-253a-4c15-9d8b-7e907a6618aa'] = (object) array(
          'pid' => 'new-cbef272f-253a-4c15-9d8b-7e907a6618aa',
          'panel' => 'fluid1',
          'type' => 'views_panes',
          'subtype' => 'panopoly_database_search-search_database_results',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'view_mode' => 'teaser',
            'widget_title' => '',
            'items_per_page' => 15,
            'context' => array(
              0 => 'argument_string_1',
            ),
            'fields_override' => array(
              'field_featured_image' => 1,
              'title' => 1,
              'body' => 1,
            ),
            'exposed' => array(
              'widget_title' => '',
            ),
            'override_title' => '',
            'override_title_text' => '',
            'view_settings' => 'fields',
            'use_pager' => 1,
            'pager_id' => 0,
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => 'cbef272f-253a-4c15-9d8b-7e907a6618aa',
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-f4183e6c-42a9-4eee-b148-14c9559a3523'] = (object) array(
          'pid' => 'new-f4183e6c-42a9-4eee-b148-14c9559a3523',
          'panel' => 'fluid1',
          'type' => 'search_box',
          'subtype' => 'search_box',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'type' => 'node',
            'form' => 'simple',
            'path_type' => 'default',
            'path' => '',
            'override_prompt' => 1,
            'prompt' => '',
            'context' => array(),
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => 'f4183e6c-42a9-4eee-b148-14c9559a3523',
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->hide_title = 0; /* WAS: 2 */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->layout = 'csc_3col'; /* WAS: 'radix_burr_flipped' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panel_settings['style_settings']['fixed'] = NULL; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panel_settings['style_settings']['fluid1'] = NULL; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panel_settings['style_settings']['fluid2'] = NULL; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panels['fixed'] = array(
      0 => 'new-0c89e409-2d28-4af8-ac83-c25b4875c518',
      1 => 'new-78b2ab61-7841-4c9e-b063-3ed0e19f9528',
      2 => 'new-9708aa7d-5cb0-4a6f-9580-c6400ef66e63',
    ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panels['fluid1'] = array(
      0 => 'new-3e13a5f8-cf24-4d72-adb1-9fc1cc2e5cbd',
      1 => 'new-cbef272f-253a-4c15-9d8b-7e907a6618aa',
      2 => 'new-f4183e6c-42a9-4eee-b148-14c9559a3523',
    ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panels['fluid2'] = array(
      0 => 'new-70a065f1-4c36-4835-9354-644ecee826f9',
    ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->title_pane = 'new-f4183e6c-42a9-4eee-b148-14c9559a3523'; /* WAS: 'new-2693d0e2-3b32-4ca3-87b6-fa2ccec54399' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->uuid = '8b2bd2f9-1e2b-475a-8d6d-078396b6c17b'; /* WAS: '2d27c2cb-916a-4d51-8a64-9eba5a57a81e' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->content['new-0b8b4180-9210-4ae7-b9e3-0233bbdf0c40'] = (object) array(
          'pid' => 'new-0b8b4180-9210-4ae7-b9e3-0233bbdf0c40',
          'panel' => 'sidebar',
          'type' => 'facet',
          'subtype' => 'facet',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => array(),
            'override_title' => 1,
            'override_title_text' => 'Filter by Type',
            'delta' => 'Shb0Q1vWgCArrHrjHszTyhl2jaEhIjzW',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '0b8b4180-9210-4ae7-b9e3-0233bbdf0c40',
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->content['new-2da563e5-9dda-43e3-a6db-364c4536091e'] = (object) array(
          'pid' => 'new-2da563e5-9dda-43e3-a6db-364c4536091e',
          'panel' => 'contentmain',
          'type' => 'search_box',
          'subtype' => 'search_box',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'type' => 'node',
            'form' => 'simple',
            'path_type' => 'default',
            'path' => '',
            'override_prompt' => 1,
            'prompt' => '',
            'context' => array(),
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '2da563e5-9dda-43e3-a6db-364c4536091e',
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->content['new-89d7b6f1-fb52-4b6e-a446-732a2b0e4d16'] = (object) array(
          'pid' => 'new-89d7b6f1-fb52-4b6e-a446-732a2b0e4d16',
          'panel' => 'contentmain',
          'type' => 'search_current',
          'subtype' => 'search_current',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'type' => 'node',
            'form' => 'advanced',
            'path_type' => 'default',
            'path' => '',
            'override_prompt' => FALSE,
            'prompt' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '89d7b6f1-fb52-4b6e-a446-732a2b0e4d16',
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->content['new-a2f7b2c1-be52-4ef1-81f8-cb414bd52f0e'] = (object) array(
          'pid' => 'new-a2f7b2c1-be52-4ef1-81f8-cb414bd52f0e',
          'panel' => 'contentmain',
          'type' => 'views_panes',
          'subtype' => 'panopoly_search-search_solr_results',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => array(
              0 => 'argument_string_1',
            ),
            'view_mode' => NULL,
            'widget_title' => '',
            'items_per_page' => NULL,
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => 'a2f7b2c1-be52-4ef1-81f8-cb414bd52f0e',
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->hide_title = 0; /* WAS: 2 */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->panels['contentmain'][0] = 'new-2da563e5-9dda-43e3-a6db-364c4536091e'; /* WAS: 'new-15f4a1d6-8bf1-43cd-8ef3-a8b484aabe79' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->panels['contentmain'][1] = 'new-89d7b6f1-fb52-4b6e-a446-732a2b0e4d16'; /* WAS: 'new-9315ef28-12fb-4ed8-a491-1c628e698406' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->panels['contentmain'][2] = 'new-a2f7b2c1-be52-4ef1-81f8-cb414bd52f0e'; /* WAS: 'new-25ec26bf-8e25-4163-bf5c-406fed80259d' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->panels['sidebar'][0] = 'new-0b8b4180-9210-4ae7-b9e3-0233bbdf0c40'; /* WAS: 'new-3d1478d7-0f89-424e-824f-82483bc89651' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->title_pane = 'new-a2f7b2c1-be52-4ef1-81f8-cb414bd52f0e'; /* WAS: 'new-15f4a1d6-8bf1-43cd-8ef3-a8b484aabe79' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->uuid = 'b00a586b-3993-43f8-a5b5-90afa896347b'; /* WAS: 'b369b7fe-466f-4e52-b315-5070800e6d63' */
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-2693d0e2-3b32-4ca3-87b6-fa2ccec54399']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-44eb1f21-6415-4344-ae5a-45172ed2cb8c']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-6e68b43e-ac55-4417-9705-64e3c639c681']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-dbac3f16-6f98-43f5-a2b3-bb1b0dc363d9']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panels['contentmain']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panels['sidebar']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->content['new-15f4a1d6-8bf1-43cd-8ef3-a8b484aabe79']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->content['new-25ec26bf-8e25-4163-bf5c-406fed80259d']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->content['new-3d1478d7-0f89-424e-824f-82483bc89651']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->content['new-9315ef28-12fb-4ed8-a491-1c628e698406']);
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function csc_panopoly_feature_overrides_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:panopoly_page:default'])) {
    $data['node:panopoly_page:default']->display->content['new-1e4a2e89-fc55-406c-bf48-e97e5baccf00'] = (object) array(
          'pid' => 'new-1e4a2e89-fc55-406c-bf48-e97e5baccf00',
          'panel' => 'fluid2',
          'type' => 'csc_related_news',
          'subtype' => 'csc_related_news',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 4,
          'locks' => array(),
          'uuid' => '1e4a2e89-fc55-406c-bf48-e97e5baccf00',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-2bc509db-cdf6-44ba-a300-59da4e59cf67'] = (object) array(
          'pid' => 'new-2bc509db-cdf6-44ba-a300-59da4e59cf67',
          'panel' => 'fluid2',
          'type' => 'csc_related_people',
          'subtype' => 'csc_related_people',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '2bc509db-cdf6-44ba-a300-59da4e59cf67',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-4e2e56d2-e059-4650-a12d-ba50e9868401'] = (object) array(
          'pid' => 'new-4e2e56d2-e059-4650-a12d-ba50e9868401',
          'panel' => 'fixed',
          'type' => 'main_menu',
          'subtype' => 'main_menu',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '4e2e56d2-e059-4650-a12d-ba50e9868401',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-5a7d057c-bc5b-4e5a-9ebe-29b215bbf6da'] = (object) array(
          'pid' => 'new-5a7d057c-bc5b-4e5a-9ebe-29b215bbf6da',
          'panel' => 'fluid1',
          'type' => 'node_title',
          'subtype' => 'node_title',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'link' => 0,
            'markup' => 'none',
            'id' => '',
            'class' => '',
            'context' => 'panelizer',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '5a7d057c-bc5b-4e5a-9ebe-29b215bbf6da',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-70bae994-6dcf-4034-9825-181f454cc884'] = (object) array(
          'pid' => 'new-70bae994-6dcf-4034-9825-181f454cc884',
          'panel' => 'fluid1',
          'type' => 'csc_related_research',
          'subtype' => 'csc_related_research',
          'shown' => FALSE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '70bae994-6dcf-4034-9825-181f454cc884',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-835b50a6-bbd7-4971-81c0-9a7d76abae4c'] = (object) array(
          'pid' => 'new-835b50a6-bbd7-4971-81c0-9a7d76abae4c',
          'panel' => 'fixed',
          'type' => 'csc_latest_news',
          'subtype' => 'csc_latest_news',
          'shown' => FALSE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '835b50a6-bbd7-4971-81c0-9a7d76abae4c',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-9b436078-d0da-44a0-86f3-023fd3848add'] = (object) array(
          'pid' => 'new-9b436078-d0da-44a0-86f3-023fd3848add',
          'panel' => 'fluid2',
          'type' => 'csc_related_events',
          'subtype' => 'csc_related_events',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
          'uuid' => '9b436078-d0da-44a0-86f3-023fd3848add',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-a8ea8e1c-4cc2-4172-a62a-6e1ea5d5f3d6'] = (object) array(
          'pid' => 'new-a8ea8e1c-4cc2-4172-a62a-6e1ea5d5f3d6',
          'panel' => 'fluid2',
          'type' => 'csc_node_image',
          'subtype' => 'csc_node_image',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => 'a8ea8e1c-4cc2-4172-a62a-6e1ea5d5f3d6',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-b0a0704e-69fd-49b0-bd95-29f938214359'] = (object) array(
          'pid' => 'new-b0a0704e-69fd-49b0-bd95-29f938214359',
          'panel' => 'fluid2',
          'type' => 'csc_related_activities',
          'subtype' => 'csc_related_activities',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => 'b0a0704e-69fd-49b0-bd95-29f938214359',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-b570b4d9-b1f8-4ab2-a536-4a739809af00'] = (object) array(
          'pid' => 'new-b570b4d9-b1f8-4ab2-a536-4a739809af00',
          'panel' => 'fluid2',
          'type' => 'csc_related_organizations',
          'subtype' => 'csc_related_organizations',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 5,
          'locks' => array(),
          'uuid' => 'b570b4d9-b1f8-4ab2-a536-4a739809af00',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-d79f2d84-4cc9-4eb7-8b14-69fdde8e8509'] = (object) array(
          'pid' => 'new-d79f2d84-4cc9-4eb7-8b14-69fdde8e8509',
          'panel' => 'fluid1',
          'type' => 'csc_teaser',
          'subtype' => 'csc_teaser',
          'shown' => FALSE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => 'd79f2d84-4cc9-4eb7-8b14-69fdde8e8509',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-e2df6280-bb65-4a65-bbde-9127e87852bc'] = (object) array(
          'pid' => 'new-e2df6280-bb65-4a65-bbde-9127e87852bc',
          'panel' => 'fluid1',
          'type' => 'entity_field',
          'subtype' => 'node:body',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'title',
            'formatter' => 'text_default',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(),
            'context' => array(),
            'override_title' => 1,
            'override_title_text' => '',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
          'uuid' => 'e2df6280-bb65-4a65-bbde-9127e87852bc',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-ed4d2a85-1473-401f-a4e0-e0d94c2ca699'] = (object) array(
          'pid' => 'new-ed4d2a85-1473-401f-a4e0-e0d94c2ca699',
          'panel' => 'fixed',
          'type' => 'block',
          'subtype' => 'social_media_links-social-media-links',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 0,
            'override_title_text' => '',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => 'ed4d2a85-1473-401f-a4e0-e0d94c2ca699',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-f89132a4-56c1-436e-82ae-77eccf45b18c'] = (object) array(
          'pid' => 'new-f89132a4-56c1-436e-82ae-77eccf45b18c',
          'panel' => 'fixed',
          'type' => 'csc_newsletter',
          'subtype' => 'csc_newsletter',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'username' => 'wiifm',
            'tweets_to_show' => 5,
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
          'uuid' => 'f89132a4-56c1-436e-82ae-77eccf45b18c',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->layout = 'csc_3col'; /* WAS: 'radix_bryant' */
    $data['node:panopoly_page:default']->display->panel_settings['style_settings']['fixed'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default']->display->panel_settings['style_settings']['fluid1'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default']->display->panel_settings['style_settings']['fluid2'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default']->display->panels['fixed'] = array(
      0 => 'new-4e2e56d2-e059-4650-a12d-ba50e9868401',
      1 => 'new-835b50a6-bbd7-4971-81c0-9a7d76abae4c',
      2 => 'new-ed4d2a85-1473-401f-a4e0-e0d94c2ca699',
      3 => 'new-f89132a4-56c1-436e-82ae-77eccf45b18c',
    ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->panels['fluid1'] = array(
      0 => 'new-5a7d057c-bc5b-4e5a-9ebe-29b215bbf6da',
      1 => 'new-70bae994-6dcf-4034-9825-181f454cc884',
      2 => 'new-d79f2d84-4cc9-4eb7-8b14-69fdde8e8509',
      3 => 'new-e2df6280-bb65-4a65-bbde-9127e87852bc',
    ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->panels['fluid2'] = array(
      0 => 'new-a8ea8e1c-4cc2-4172-a62a-6e1ea5d5f3d6',
      1 => 'new-2bc509db-cdf6-44ba-a300-59da4e59cf67',
      2 => 'new-b0a0704e-69fd-49b0-bd95-29f938214359',
      3 => 'new-9b436078-d0da-44a0-86f3-023fd3848add',
      4 => 'new-1e4a2e89-fc55-406c-bf48-e97e5baccf00',
      5 => 'new-b570b4d9-b1f8-4ab2-a536-4a739809af00',
    ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->title_pane = 'new-f89132a4-56c1-436e-82ae-77eccf45b18c'; /* WAS: 'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1' */
    $data['node:panopoly_page:default']->display->uuid = 'e4c588ce-e8eb-43ff-aae6-9f58c56cd20e'; /* WAS: '16346c80-6fcf-4cee-bf7a-9c0173fc2916' */
    $data['node:panopoly_page:default']->pipeline = 'standard'; /* WAS: 'ipe' */
    unset($data['node:panopoly_page:default']->display->content['new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71']);
    unset($data['node:panopoly_page:default']->display->content['new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1']);
    unset($data['node:panopoly_page:default']->display->content['new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b']);
    unset($data['node:panopoly_page:default']->display->content['new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1']);
    unset($data['node:panopoly_page:default']->display->content['new-f3bf9c22-9b22-41d2-a57e-110951093871']);
    unset($data['node:panopoly_page:default']->display->panels['contentmain']);
    unset($data['node:panopoly_page:default']->display->panels['sidebar']);
  }
  if (isset($data['user:user:default'])) {
    $data['user:user:default']->display->content['new-34b9aa04-6a1b-4636-a5ac-17f88991aae6'] = (object) array(
          'pid' => 'new-34b9aa04-6a1b-4636-a5ac-17f88991aae6',
          'panel' => 'column1',
          'type' => 'user_profile',
          'subtype' => 'user_profile',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'view_mode' => 'full',
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '34b9aa04-6a1b-4636-a5ac-17f88991aae6',
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-f7cfaed1-924a-4b68-9ede-c907b81a5a60'] = (object) array(
          'pid' => 'new-f7cfaed1-924a-4b68-9ede-c907b81a5a60',
          'panel' => 'column2',
          'type' => 'entity_field',
          'subtype' => 'user:field_user_picture',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'hidden',
            'formatter' => 'image',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'image_style' => 'panopoly_image_full',
              'image_link' => '',
            ),
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '',
            'view_mode' => NULL,
            'widget_title' => NULL,
            'items_per_page' => NULL,
            'exposed' => array(
              'sort_by' => NULL,
              'sort_order' => NULL,
            ),
            'use_pager' => NULL,
            'pager_id' => NULL,
            'offset' => NULL,
            'link_to_view' => NULL,
            'more_link' => NULL,
            'path' => NULL,
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => 'f7cfaed1-924a-4b68-9ede-c907b81a5a60',
        ); /* WAS: '' */
    $data['user:user:default']->display->panels['column1'][0] = 'new-34b9aa04-6a1b-4636-a5ac-17f88991aae6'; /* WAS: 'new-d76e85cd-4625-4a52-a17b-e5c65e1a0247' */
    $data['user:user:default']->display->panels['column2'][0] = 'new-f7cfaed1-924a-4b68-9ede-c907b81a5a60'; /* WAS: 'new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9' */
    $data['user:user:default']->display->uuid = '98ac168f-c536-4838-a97e-a3000b1b6886'; /* WAS: '51ca002d-c24e-4ba7-b2dd-d966ff32e4a3' */
    $data['user:user:default']->pipeline = 'standard'; /* WAS: 'ipe' */
    unset($data['user:user:default']->display->content['new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9']);
    unset($data['user:user:default']->display->content['new-d76e85cd-4625-4a52-a17b-e5c65e1a0247']);
  }
}

/**
 * Implements hook_default_search_api_server_alter().
 */
function csc_panopoly_feature_overrides_default_search_api_server_alter(&$data) {
  if (isset($data['database_server'])) {
    unset($data['database_server']->options['partial_matches']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function csc_panopoly_feature_overrides_strongarm_alter(&$data) {
  if (isset($data['date_popup_authored_enabled_panopoly_landing_page'])) {
    $data['date_popup_authored_enabled_panopoly_landing_page']->value = 1; /* WAS: 0 */
  }
  if (isset($data['field_bundle_settings_node__panopoly_page'])) {
    $data['field_bundle_settings_node__panopoly_page']->value['extra_fields']['form']['path']['weight'] = 1; /* WAS: 5 */
    $data['field_bundle_settings_node__panopoly_page']->value['view_modes']['email_html'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__panopoly_page']->value['view_modes']['email_plain'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__panopoly_page']->value['view_modes']['email_textalt'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['node_options_panopoly_page'])) {
    $data['node_options_panopoly_page']->value[1] = 'revision'; /* WAS: 'promote' */
  }
  if (isset($data['node_preview_panopoly_landing_page'])) {
    $data['node_preview_panopoly_landing_page']->value = 1; /* WAS: 0 */
  }
  if (isset($data['node_submitted_panopoly_landing_page'])) {
    $data['node_submitted_panopoly_landing_page']->value = 1; /* WAS: 0 */
  }
  if (isset($data['panelizer_defaults_node_panopoly_landing_page'])) {
    $data['panelizer_defaults_node_panopoly_landing_page']->value['status'] = 0; /* WAS: 1 */
    unset($data['panelizer_defaults_node_panopoly_landing_page']->value['view modes']['default']);
    unset($data['panelizer_defaults_node_panopoly_landing_page']->value['view modes']['featured']);
    unset($data['panelizer_defaults_node_panopoly_landing_page']->value['view modes']['page_manager']);
    unset($data['panelizer_defaults_node_panopoly_landing_page']->value['view modes']['teaser']);
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function csc_panopoly_feature_overrides_views_default_views_alter(&$data) {
  if (isset($data['admin_views_file'])) {
    $data['admin_views_file']->display['default']->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_file'; /* WAS: 'file_managed' */
    unset($data['admin_views_file']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::panelizer_set_status_action']);
    unset($data['admin_views_file']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_send_email_action']);
    unset($data['admin_views_file']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_argument_selector_action']);
    unset($data['admin_views_file']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_script_action']);
  }
  if (isset($data['admin_views_node'])) {
    $data['admin_views_node']->display['default']->display_options['fields']['promote'] = array(
      'id' => 'promote',
      'table' => 'node',
      'field' => 'promote',
      'label' => 'Front page',
      'element_label_colon' => FALSE,
      'not' => 0,
    ); /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node'; /* WAS: 'node' */
    $data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_assign_owner_action']['skip_confirmation'] = 0; /* WAS: 1 */
    $data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_export_json_action'] = array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ); /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_export_serialize_action'] = array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ); /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_export_xml_action'] = array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ); /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_promote_action']['skip_confirmation'] = 0; /* WAS: 1 */
    $data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_publish_action']['skip_confirmation'] = 0; /* WAS: 1 */
    $data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_save_action']['label'] = 'Save Nodes'; /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_save_action']['override_label'] = 1; /* WAS: 0 */
    $data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_save_action']['selected'] = 1; /* WAS: 0 */
    $data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_unpromote_action']['skip_confirmation'] = 0; /* WAS: 1 */
    $data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_unpublish_action']['skip_confirmation'] = 0; /* WAS: 1 */
    $data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::pathauto_node_update_action'] = array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Update Alias',
    ); /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_modify_action']['skip_confirmation'] = 0; /* WAS: 1 */
    $data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1; /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['filters']['promote'] = array(
      'id' => 'promote',
      'table' => 'node',
      'field' => 'promote',
      'group' => 1,
      'exposed' => TRUE,
      'expose' => array(
        'operator_id' => '',
        'label' => 'Front Page',
        'operator' => 'promote_op',
        'identifier' => 'promote',
        'remember_roles' => array(
          2 => 2,
          1 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
    ); /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['filters']['status']['group'] = 1; /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['filters']['title']['group'] = 1; /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['filters']['type']['group'] = 1; /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['filters']['uid']['group'] = 1; /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['filters']['vid']['group'] = 1; /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['header'] = array(
      'result' => array(
        'id' => 'result',
        'table' => 'views',
        'field' => 'result',
      ),
    ); /* WAS: '' */
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_make_sticky_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_make_unsticky_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_unpublish_by_keyword_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_goto_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_message_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_send_email_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_argument_selector_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_script_action']);
  }
  if (isset($data['admin_views_user'])) {
    $data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_user'; /* WAS: 'users' */
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_block_ip_action']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_goto_action']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_message_action']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::user_block_user_action']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_argument_selector_action']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_delete_item']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_script_action']);
  }
  if (isset($data['archive'])) {
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['archive']->display['default']->display_options['access']['perm']);
  }
  if (isset($data['backlinks'])) {
    $data['backlinks']->display['block']->display_options['arguments']['nid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['block']->display_options['arguments']['nid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['arguments']['nid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['arguments']['nid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['backlinks']->display['default']->display_options['access']['perm']);
    unset($data['backlinks']->display['default']->display_options['empty']['text']['empty']);
    unset($data['backlinks']->display['default']->display_options['fields']['title']['link_to_node']);
  }
  if (isset($data['events'])) {
    $data['events']->display['default']->display_options['empty']['area']['content'] = '<?php
        $args = arg();
        $pg = (count($args) > 2) ? $args[2] : FALSE;
        $cp = current_path();
    
        $title = $head_title = "Events";
        if ($cp == \'events/all/future\') {
            $title = $head_title = "Upcoming Events";
        } else if ($cp == \'events/all/past\') {
            $title = $head_title = "Past Events";
        }
    drupal_set_title($title);
    ?>
    <div class="view-header">
          <h2 class="pane-title"><?php echo $head_title; ?></h2>
          <div id="event-nav">
             <a href="/events/all/past" <?php if($pg == \'past\') { echo \'class="active"\'; }?>>PAST</a>
             <a href="/events/all/future" <?php if($pg == \'future\') { echo \'class="active"\'; }?>>FUTURE</a>
             <a href="/events">ALL</a>
          </div>    
    </div>
    <p>We’re busy planning for Fall 2018 semester. Stay tuned for our full listing late this summer!</p>
    '; /* WAS: '<?php
        $args = arg();
        $pg = (count($args) > 2) ? $args[2] : FALSE;
        $cp = current_path();
    
        $title = $head_title = "Events";
        if ($cp == \'events/all/future\') {
            $title = $head_title = "Upcoming Events";
        } else if ($cp == \'events/all/past\') {
            $title = $head_title = "Past Events";
        }
    drupal_set_title($title);
    ?>
    <div class="view-header">
          <h2 class="pane-title"><?php echo $head_title; ?></h2>
          <div id="event-nav">
             <a href="/events/all/past" <?php if($pg == \'past\') { echo \'class="active"\'; }?>>PAST</a>
             <a href="/events/all/future" <?php if($pg == \'future\') { echo \'class="active"\'; }?>>FUTURE</a>
             <a href="/events">ALL</a>
          </div>    
    </div>
    <p>There are no events to show at this time.</p>
    ' */
  }
  if (isset($data['frontpage'])) {
    $data['frontpage']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['frontpage']->display['default']->display_options['access']['perm']);
    unset($data['frontpage']->display['default']->display_options['row_options']);
  }
  if (isset($data['glossary'])) {
    $data['glossary']->display['attachment']->display_options['arguments']['title']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['glossary'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['summary_options']['inline'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['inherit_arguments'] = FALSE; /* WAS: 0 */
    $data['glossary']->display['default']->display_options['arguments']['title']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['arguments']['title']['glossary'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['arguments']['title']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['glossary']->display['attachment']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['access']['perm']);
    unset($data['glossary']->display['default']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['fields']['name']['link_to_user']);
    unset($data['glossary']->display['default']->display_options['fields']['title']['link_to_node']);
    unset($data['glossary']->display['default']->display_options['style_options']['override']);
    unset($data['glossary']->display['default']->display_options['style_options']['sticky']);
  }
  if (isset($data['location_directory'])) {
    $data['location_directory']->display['default']->display_options['arguments']['city']['default_action'] = 'summary'; /* WAS: 'summary asc' */
    $data['location_directory']->display['default']->display_options['arguments']['city']['exception'] = array(
      'title_enable' => TRUE,
    ); /* WAS: '' */
    $data['location_directory']->display['default']->display_options['arguments']['city']['glossary'] = TRUE; /* WAS: 1 */
    $data['location_directory']->display['default']->display_options['arguments']['city']['specify_validation'] = TRUE; /* WAS: '' */
    $data['location_directory']->display['default']->display_options['arguments']['city']['summary'] = array(
      'format' => 'default_summary',
    ); /* WAS: '' */
    $data['location_directory']->display['default']->display_options['arguments']['city']['title_enable'] = TRUE; /* WAS: '' */
    $data['location_directory']->display['default']->display_options['arguments']['country']['default_action'] = 'summary'; /* WAS: 'summary asc' */
    $data['location_directory']->display['default']->display_options['arguments']['country']['exception'] = array(
      'title_enable' => TRUE,
    ); /* WAS: '' */
    $data['location_directory']->display['default']->display_options['arguments']['country']['specify_validation'] = TRUE; /* WAS: '' */
    $data['location_directory']->display['default']->display_options['arguments']['country']['summary'] = array(
      'format' => 'default_summary',
    ); /* WAS: '' */
    $data['location_directory']->display['default']->display_options['arguments']['country']['title_enable'] = TRUE; /* WAS: '' */
    $data['location_directory']->display['default']->display_options['arguments']['province']['default_action'] = 'summary'; /* WAS: 'summary asc' */
    $data['location_directory']->display['default']->display_options['arguments']['province']['exception'] = array(
      'title_enable' => TRUE,
    ); /* WAS: '' */
    $data['location_directory']->display['default']->display_options['arguments']['province']['specify_validation'] = TRUE; /* WAS: '' */
    $data['location_directory']->display['default']->display_options['arguments']['province']['summary'] = array(
      'format' => 'default_summary',
    ); /* WAS: '' */
    $data['location_directory']->display['default']->display_options['arguments']['province']['title_enable'] = TRUE; /* WAS: '' */
    $data['location_directory']->display['default']->display_options['cache'] = array(
      'type' => 'none',
    ); /* WAS: '' */
    $data['location_directory']->display['default']->display_options['exposed_form'] = array(
      'type' => 'basic',
    ); /* WAS: '' */
    $data['location_directory']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['location_directory']->changed);
    unset($data['location_directory']->display['default']->display_options['access_options']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['case']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['default_argument']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['default_argument_fixed']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['default_argument_php']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['default_options_div_prefix']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['path_case']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['relationship']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['style_options']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['style_plugin']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['transform_dash']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['validate_argument_nid_type']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['validate_argument_node_access']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['validate_argument_node_type']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['validate_argument_php']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['validate_fail']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['validate_type']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['wildcard']);
    unset($data['location_directory']->display['default']->display_options['arguments']['city']['wildcard_substitution']);
    unset($data['location_directory']->display['default']->display_options['arguments']['country']['default_argument']);
    unset($data['location_directory']->display['default']->display_options['arguments']['country']['default_argument_fixed']);
    unset($data['location_directory']->display['default']->display_options['arguments']['country']['default_argument_php']);
    unset($data['location_directory']->display['default']->display_options['arguments']['country']['default_options_div_prefix']);
    unset($data['location_directory']->display['default']->display_options['arguments']['country']['relationship']);
    unset($data['location_directory']->display['default']->display_options['arguments']['country']['style_options']);
    unset($data['location_directory']->display['default']->display_options['arguments']['country']['style_plugin']);
    unset($data['location_directory']->display['default']->display_options['arguments']['country']['validate_argument_nid_type']);
    unset($data['location_directory']->display['default']->display_options['arguments']['country']['validate_argument_node_access']);
    unset($data['location_directory']->display['default']->display_options['arguments']['country']['validate_argument_node_type']);
    unset($data['location_directory']->display['default']->display_options['arguments']['country']['validate_argument_php']);
    unset($data['location_directory']->display['default']->display_options['arguments']['country']['validate_fail']);
    unset($data['location_directory']->display['default']->display_options['arguments']['country']['validate_type']);
    unset($data['location_directory']->display['default']->display_options['arguments']['country']['wildcard']);
    unset($data['location_directory']->display['default']->display_options['arguments']['country']['wildcard_substitution']);
    unset($data['location_directory']->display['default']->display_options['arguments']['province']['default_argument']);
    unset($data['location_directory']->display['default']->display_options['arguments']['province']['default_argument_fixed']);
    unset($data['location_directory']->display['default']->display_options['arguments']['province']['default_argument_php']);
    unset($data['location_directory']->display['default']->display_options['arguments']['province']['default_options_div_prefix']);
    unset($data['location_directory']->display['default']->display_options['arguments']['province']['relationship']);
    unset($data['location_directory']->display['default']->display_options['arguments']['province']['style_options']);
    unset($data['location_directory']->display['default']->display_options['arguments']['province']['style_plugin']);
    unset($data['location_directory']->display['default']->display_options['arguments']['province']['validate_argument_nid_type']);
    unset($data['location_directory']->display['default']->display_options['arguments']['province']['validate_argument_node_access']);
    unset($data['location_directory']->display['default']->display_options['arguments']['province']['validate_argument_node_type']);
    unset($data['location_directory']->display['default']->display_options['arguments']['province']['validate_argument_php']);
    unset($data['location_directory']->display['default']->display_options['arguments']['province']['validate_fail']);
    unset($data['location_directory']->display['default']->display_options['arguments']['province']['validate_type']);
    unset($data['location_directory']->display['default']->display_options['arguments']['province']['wildcard']);
    unset($data['location_directory']->display['default']->display_options['arguments']['province']['wildcard_substitution']);
    unset($data['location_directory']->display['default']->display_options['defaults']);
    unset($data['location_directory']->display['default']->display_options['fields']['city']['exclude']);
    unset($data['location_directory']->display['default']->display_options['fields']['city']['label']);
    unset($data['location_directory']->display['default']->display_options['fields']['city']['relationship']);
    unset($data['location_directory']->display['default']->display_options['fields']['country']['exclude']);
    unset($data['location_directory']->display['default']->display_options['fields']['country']['label']);
    unset($data['location_directory']->display['default']->display_options['fields']['country']['relationship']);
    unset($data['location_directory']->display['default']->display_options['fields']['country']['style']);
    unset($data['location_directory']->display['default']->display_options['fields']['postal_code']['exclude']);
    unset($data['location_directory']->display['default']->display_options['fields']['postal_code']['label']);
    unset($data['location_directory']->display['default']->display_options['fields']['postal_code']['relationship']);
    unset($data['location_directory']->display['default']->display_options['fields']['province']['exclude']);
    unset($data['location_directory']->display['default']->display_options['fields']['province']['label']);
    unset($data['location_directory']->display['default']->display_options['fields']['province']['relationship']);
    unset($data['location_directory']->display['default']->display_options['fields']['province']['style']);
    unset($data['location_directory']->display['default']->display_options['fields']['street']['exclude']);
    unset($data['location_directory']->display['default']->display_options['fields']['street']['label']);
    unset($data['location_directory']->display['default']->display_options['fields']['street']['relationship']);
    unset($data['location_directory']->display['default']->display_options['fields']['street']['style']);
    unset($data['location_directory']->display['default']->display_options['fields']['title']['exclude']);
    unset($data['location_directory']->display['default']->display_options['fields']['title']['label']);
    unset($data['location_directory']->display['default']->display_options['fields']['title']['link_to_node']);
    unset($data['location_directory']->display['default']->display_options['fields']['title']['relationship']);
    unset($data['location_directory']->display['default']->display_options['filter_groups']);
    unset($data['location_directory']->display['default']->display_options['filters']['lid']['exposed']);
    unset($data['location_directory']->display['default']->display_options['filters']['lid']['expose']['label']);
    unset($data['location_directory']->display['default']->display_options['filters']['lid']['relationship']);
    unset($data['location_directory']->display['default']->display_options['filters']['lid']['value']);
    unset($data['location_directory']->display['default']->display_options['filters']['status_extra']['exposed']);
    unset($data['location_directory']->display['default']->display_options['filters']['status_extra']['expose']['label']);
    unset($data['location_directory']->display['default']->display_options['filters']['status_extra']['operator']);
    unset($data['location_directory']->display['default']->display_options['filters']['status_extra']['relationship']);
    unset($data['location_directory']->display['default']->display_options['filters']['status_extra']['value']);
    unset($data['location_directory']->display['default']->display_options['items_per_page']);
    unset($data['location_directory']->display['default']->display_options['offset']);
    unset($data['location_directory']->display['default']->display_options['pager']['options']);
    unset($data['location_directory']->display['default']->display_options['row_options']);
    unset($data['location_directory']->display['default']->display_options['row_plugin']);
    unset($data['location_directory']->display['default']->display_options['style_options']['order']);
    unset($data['location_directory']->display['default']->display_options['style_options']['override']);
    unset($data['location_directory']->display['default']->display_options['style_options']['sticky']);
    unset($data['location_directory']->display['default']->display_options['use_pager']);
    unset($data['location_directory']->display['page_1']->display_options['items_per_page']);
    unset($data['location_directory']->display['page_1']->display_options['offset']);
    unset($data['location_directory']->display['page_1']->display_options['pager']);
    unset($data['location_directory']->display['page_1']->display_options['tab_options']);
    unset($data['location_directory']->display['page_1']->display_options['use_pager']);
    unset($data['location_directory']->is_cacheable);
    unset($data['location_directory']->view_php);
  }
  if (isset($data['location_table'])) {
    $data['location_table']->display['default']->display_options['cache'] = array(
      'type' => 'none',
    ); /* WAS: '' */
    $data['location_table']->display['default']->display_options['exposed_form'] = array(
      'type' => 'basic',
    ); /* WAS: '' */
    $data['location_table']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['location_table']->changed);
    unset($data['location_table']->display['default']->display_options['access_options']);
    unset($data['location_table']->display['default']->display_options['defaults']);
    unset($data['location_table']->display['default']->display_options['fields']['city']['exclude']);
    unset($data['location_table']->display['default']->display_options['fields']['city']['label']);
    unset($data['location_table']->display['default']->display_options['fields']['city']['override']);
    unset($data['location_table']->display['default']->display_options['fields']['city']['relationship']);
    unset($data['location_table']->display['default']->display_options['fields']['country']['exclude']);
    unset($data['location_table']->display['default']->display_options['fields']['country']['label']);
    unset($data['location_table']->display['default']->display_options['fields']['country']['relationship']);
    unset($data['location_table']->display['default']->display_options['fields']['country']['style']);
    unset($data['location_table']->display['default']->display_options['fields']['postal_code']['exclude']);
    unset($data['location_table']->display['default']->display_options['fields']['postal_code']['label']);
    unset($data['location_table']->display['default']->display_options['fields']['postal_code']['override']);
    unset($data['location_table']->display['default']->display_options['fields']['postal_code']['relationship']);
    unset($data['location_table']->display['default']->display_options['fields']['province']['exclude']);
    unset($data['location_table']->display['default']->display_options['fields']['province']['label']);
    unset($data['location_table']->display['default']->display_options['fields']['province']['relationship']);
    unset($data['location_table']->display['default']->display_options['fields']['province']['style']);
    unset($data['location_table']->display['default']->display_options['fields']['street']['exclude']);
    unset($data['location_table']->display['default']->display_options['fields']['street']['label']);
    unset($data['location_table']->display['default']->display_options['fields']['street']['override']);
    unset($data['location_table']->display['default']->display_options['fields']['street']['relationship']);
    unset($data['location_table']->display['default']->display_options['fields']['street']['style']);
    unset($data['location_table']->display['default']->display_options['fields']['title']['exclude']);
    unset($data['location_table']->display['default']->display_options['fields']['title']['label']);
    unset($data['location_table']->display['default']->display_options['fields']['title']['link_to_node']);
    unset($data['location_table']->display['default']->display_options['fields']['title']['override']);
    unset($data['location_table']->display['default']->display_options['fields']['title']['relationship']);
    unset($data['location_table']->display['default']->display_options['filter_groups']);
    unset($data['location_table']->display['default']->display_options['filters']['lid']['exposed']);
    unset($data['location_table']->display['default']->display_options['filters']['lid']['expose']['label']);
    unset($data['location_table']->display['default']->display_options['filters']['lid']['relationship']);
    unset($data['location_table']->display['default']->display_options['filters']['lid']['value']);
    unset($data['location_table']->display['default']->display_options['filters']['status_extra']['exposed']);
    unset($data['location_table']->display['default']->display_options['filters']['status_extra']['expose']['label']);
    unset($data['location_table']->display['default']->display_options['filters']['status_extra']['operator']);
    unset($data['location_table']->display['default']->display_options['filters']['status_extra']['override']);
    unset($data['location_table']->display['default']->display_options['filters']['status_extra']['relationship']);
    unset($data['location_table']->display['default']->display_options['filters']['status_extra']['value']);
    unset($data['location_table']->display['default']->display_options['items_per_page']);
    unset($data['location_table']->display['default']->display_options['offset']);
    unset($data['location_table']->display['default']->display_options['pager']['options']);
    unset($data['location_table']->display['default']->display_options['row_options']);
    unset($data['location_table']->display['default']->display_options['row_plugin']);
    unset($data['location_table']->display['default']->display_options['style_options']['order']);
    unset($data['location_table']->display['default']->display_options['style_options']['override']);
    unset($data['location_table']->display['default']->display_options['style_options']['sticky']);
    unset($data['location_table']->display['default']->display_options['use_pager']);
    unset($data['location_table']->display['page_1']->display_options['items_per_page']);
    unset($data['location_table']->display['page_1']->display_options['offset']);
    unset($data['location_table']->display['page_1']->display_options['pager']);
    unset($data['location_table']->display['page_1']->display_options['tab_options']);
    unset($data['location_table']->display['page_1']->display_options['use_pager']);
    unset($data['location_table']->is_cacheable);
    unset($data['location_table']->view_php);
  }
  if (isset($data['media_default'])) {
    unset($data['media_default']->display['default']->display_options['exposed_form']['options']);
    unset($data['media_default']->display['default']->display_options['fields']['filename']['link_to_file']);
  }
  if (isset($data['panopoly_database_search'])) {
    $data['panopoly_database_search']->display['default']->display_options['fields']['body']['settings']['trim_length'] = 300; /* WAS: 600 */
    $data['panopoly_database_search']->display['default']->display_options['fields']['field_featured_image']['delta_first_last'] = TRUE; /* WAS: '' */
    $data['panopoly_database_search']->display['default']->display_options['fields']['field_featured_image']['delta_limit'] = 10; /* WAS: '' */
    $data['panopoly_database_search']->display['search_database_results']->display_options['allow']['use_pager'] = 'use_pager'; /* WAS: 0 */
    unset($data['panopoly_database_search']->display['default']->display_options['fields']['body']['alter']);
    unset($data['panopoly_database_search']->display['default']->display_options['fields']['title']['element_type']);
  }
  if (isset($data['taxonomy_term'])) {
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['taxonomy_term']->display['default']->display_options['access']['perm']);
  }
  if (isset($data['user_location_table'])) {
    $data['user_location_table']->display['default']->display_options['cache'] = array(
      'type' => 'none',
    ); /* WAS: '' */
    $data['user_location_table']->display['default']->display_options['exposed_form'] = array(
      'type' => 'basic',
    ); /* WAS: '' */
    $data['user_location_table']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['user_location_table']->changed);
    unset($data['user_location_table']->display['default']->display_options['access_options']);
    unset($data['user_location_table']->display['default']->display_options['defaults']);
    unset($data['user_location_table']->display['default']->display_options['fields']['city']['exclude']);
    unset($data['user_location_table']->display['default']->display_options['fields']['city']['label']);
    unset($data['user_location_table']->display['default']->display_options['fields']['city']['override']);
    unset($data['user_location_table']->display['default']->display_options['fields']['city']['relationship']);
    unset($data['user_location_table']->display['default']->display_options['fields']['country']['exclude']);
    unset($data['user_location_table']->display['default']->display_options['fields']['country']['label']);
    unset($data['user_location_table']->display['default']->display_options['fields']['country']['override']);
    unset($data['user_location_table']->display['default']->display_options['fields']['country']['relationship']);
    unset($data['user_location_table']->display['default']->display_options['fields']['country']['style']);
    unset($data['user_location_table']->display['default']->display_options['fields']['name']['exclude']);
    unset($data['user_location_table']->display['default']->display_options['fields']['name']['label']);
    unset($data['user_location_table']->display['default']->display_options['fields']['name']['link_to_user']);
    unset($data['user_location_table']->display['default']->display_options['fields']['name']['override']);
    unset($data['user_location_table']->display['default']->display_options['fields']['name']['relationship']);
    unset($data['user_location_table']->display['default']->display_options['fields']['postal_code']['exclude']);
    unset($data['user_location_table']->display['default']->display_options['fields']['postal_code']['label']);
    unset($data['user_location_table']->display['default']->display_options['fields']['postal_code']['override']);
    unset($data['user_location_table']->display['default']->display_options['fields']['postal_code']['relationship']);
    unset($data['user_location_table']->display['default']->display_options['fields']['province']['exclude']);
    unset($data['user_location_table']->display['default']->display_options['fields']['province']['label']);
    unset($data['user_location_table']->display['default']->display_options['fields']['province']['override']);
    unset($data['user_location_table']->display['default']->display_options['fields']['province']['relationship']);
    unset($data['user_location_table']->display['default']->display_options['fields']['province']['style']);
    unset($data['user_location_table']->display['default']->display_options['fields']['street']['exclude']);
    unset($data['user_location_table']->display['default']->display_options['fields']['street']['label']);
    unset($data['user_location_table']->display['default']->display_options['fields']['street']['override']);
    unset($data['user_location_table']->display['default']->display_options['fields']['street']['relationship']);
    unset($data['user_location_table']->display['default']->display_options['fields']['street']['style']);
    unset($data['user_location_table']->display['default']->display_options['filter_groups']);
    unset($data['user_location_table']->display['default']->display_options['filters']['lid']['exposed']);
    unset($data['user_location_table']->display['default']->display_options['filters']['lid']['expose']['label']);
    unset($data['user_location_table']->display['default']->display_options['filters']['lid']['relationship']);
    unset($data['user_location_table']->display['default']->display_options['filters']['lid']['value']);
    unset($data['user_location_table']->display['default']->display_options['filters']['status']['exposed']);
    unset($data['user_location_table']->display['default']->display_options['filters']['status']['expose']['label']);
    unset($data['user_location_table']->display['default']->display_options['filters']['status']['operator']);
    unset($data['user_location_table']->display['default']->display_options['filters']['status']['relationship']);
    unset($data['user_location_table']->display['default']->display_options['items_per_page']);
    unset($data['user_location_table']->display['default']->display_options['offset']);
    unset($data['user_location_table']->display['default']->display_options['pager']['options']);
    unset($data['user_location_table']->display['default']->display_options['row_options']);
    unset($data['user_location_table']->display['default']->display_options['row_plugin']);
    unset($data['user_location_table']->display['default']->display_options['style_options']['order']);
    unset($data['user_location_table']->display['default']->display_options['style_options']['override']);
    unset($data['user_location_table']->display['default']->display_options['style_options']['sticky']);
    unset($data['user_location_table']->display['default']->display_options['use_pager']);
    unset($data['user_location_table']->display['page_1']->display_options['items_per_page']);
    unset($data['user_location_table']->display['page_1']->display_options['offset']);
    unset($data['user_location_table']->display['page_1']->display_options['pager']);
    unset($data['user_location_table']->display['page_1']->display_options['tab_options']);
    unset($data['user_location_table']->display['page_1']->display_options['use_pager']);
    unset($data['user_location_table']->is_cacheable);
    unset($data['user_location_table']->view_php);
  }
  if (isset($data['webform_submissions'])) {
    unset($data['webform_submissions']->display['default']->display_options['fields']['delete_submission']['label']);
    unset($data['webform_submissions']->display['default']->display_options['fields']['edit_submission']['label']);
  }
}

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function csc_panopoly_feature_overrides_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['panopoly_html_text'])) {
    $data['panopoly_html_text']['preferences']['add_to_summaries'] = FALSE; /* WAS: 0 */
    $data['panopoly_html_text']['settings']['apply_source_formatting'] = 0; /* WAS: '' */
    $data['panopoly_html_text']['settings']['css_classes'] = ''; /* WAS: '' */
    $data['panopoly_html_text']['settings']['preformatted'] = 0; /* WAS: '' */
    unset($data['panopoly_html_text']['settings']['theme']);
  }
  if (isset($data['panopoly_wysiwyg_text'])) {
    $data['panopoly_wysiwyg_text']['editor'] = 'ckeditor'; /* WAS: 'tinymce' */
    $data['panopoly_wysiwyg_text']['preferences']['show_toggle'] = 1; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['preferences']['version'] = '3.6.3.7474'; /* WAS: '3.5.11' */
    $data['panopoly_wysiwyg_text']['settings']['block_formats'] = 'p,address,pre,h2,h3,h4,h5,h6,div'; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Anchor'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['BGColor'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Blockquote'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Bold'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['BulletedList'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Font'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['FontSize'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['HorizontalRule'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Image'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Indent'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Italic'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['JustifyBlock'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['JustifyCenter'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['JustifyLeft'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['JustifyRight'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Link'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['NumberedList'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Outdent'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['PasteFromWord'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['RemoveFormat'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Source'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['SpecialChar'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Strike'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Styles'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Subscript'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Superscript'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Table'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['TextColor'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Underline'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Unlink'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['css_theme'] = 'csc'; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['default_toolbar_grouping'] = 0; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['forcePasteAsPlainText'] = 0; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['pasteFromWordNumberedHeadingToList'] = 0; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['pasteFromWordPromptCleanup'] = 0; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['pasteFromWordRemoveFontStyles'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['pasteFromWordRemoveStyles'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['resize_enabled'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['simple_source_formatting'] = 0; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['stylesSet'] = ''; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['toolbarLocation'] = 'top'; /* WAS: '' */
    unset($data['panopoly_wysiwyg_text']['settings']['apply_source_formatting']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['captionfilter']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['blockquote']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['bold']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['bullist']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['charmap']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['forecolor']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['formatselect']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['indent']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['italic']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['justifycenter']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['justifyfull']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['justifyleft']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['justifyright']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['numlist']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['outdent']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['redo']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['removeformat']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['strikethrough']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['underline']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['undo']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['unlink']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['drupal']['break']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['fullscreen']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['linkit']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['paste']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['pdw']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['spellchecker']);
    unset($data['panopoly_wysiwyg_text']['settings']['convert_fonts_to_spans']);
    unset($data['panopoly_wysiwyg_text']['settings']['paste_auto_cleanup_on_paste']);
    unset($data['panopoly_wysiwyg_text']['settings']['preformatted']);
    unset($data['panopoly_wysiwyg_text']['settings']['remove_linebreaks']);
    unset($data['panopoly_wysiwyg_text']['settings']['theme_advanced_blockformats']);
    unset($data['panopoly_wysiwyg_text']['settings']['theme_advanced_resizing']);
    unset($data['panopoly_wysiwyg_text']['settings']['theme_advanced_statusbar_location']);
    unset($data['panopoly_wysiwyg_text']['settings']['theme_advanced_styles']);
    unset($data['panopoly_wysiwyg_text']['settings']['theme_advanced_toolbar_align']);
    unset($data['panopoly_wysiwyg_text']['settings']['theme_advanced_toolbar_location']);
    unset($data['panopoly_wysiwyg_text']['settings']['verify_html']);
  }
}
