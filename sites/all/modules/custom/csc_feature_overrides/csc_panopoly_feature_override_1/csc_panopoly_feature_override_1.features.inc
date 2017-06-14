<?php
/**
 * @file
 * csc_panopoly_feature_override_1.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function csc_panopoly_feature_override_1_field_default_fields_alter(&$data) {
  if (isset($data['node-panopoly_page-body'])) {
    $data['node-panopoly_page-body']['field_instance']['widget']['weight'] = 5; /* WAS: 4 */
  }
  if (isset($data['node-panopoly_page-field_featured_categories'])) {
    $data['node-panopoly_page-field_featured_categories']['field_instance']['widget']['weight'] = 3; /* WAS: 2 */
  }
  if (isset($data['node-panopoly_page-field_featured_image'])) {
    $data['node-panopoly_page-field_featured_image']['field_config']['cardinality'] = 10; /* WAS: 1 */
    $data['node-panopoly_page-field_featured_image']['field_instance']['description'] = 'At least 720x390 (ratio of width to height: 1.846 to 1)'; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['field_instance']['settings']['image_field_caption'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['field_instance']['settings']['min_resolution'] = '720x390'; /* WAS: '300x200' */
    $data['node-panopoly_page-field_featured_image']['field_instance']['widget']['module'] = 'media'; /* WAS: 'image' */
    $data['node-panopoly_page-field_featured_image']['field_instance']['widget']['settings']['allowed_schemes'] = array(
      'private' => 'private',
      'public' => 'public',
      'vimeo' => 0,
      'youtube' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['field_instance']['widget']['settings']['allowed_types'] = array(
      'audio' => 0,
      'document' => 0,
      'image' => 'image',
      'video' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['field_instance']['widget']['settings']['browser_plugins'] = array(
      'media_default--media_browser_1' => 0,
      'media_default--media_browser_my_files' => 0,
      'media_internet' => 0,
      'upload' => 0,
      'youtube' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['field_instance']['widget']['type'] = 'media_generic'; /* WAS: 'image_image' */
    $data['node-panopoly_page-field_featured_image']['field_instance']['widget']['weight'] = 2; /* WAS: 1 */
    unset($data['node-panopoly_page-field_featured_image']['field_instance']['widget']['settings']['preview_image_style']);
  }
  if (isset($data['node-panopoly_page-field_featured_status'])) {
    $data['node-panopoly_page-field_featured_status']['field_instance']['widget']['weight'] = 4; /* WAS: 3 */
  }
  if (isset($data['taxonomy_term-panopoly_categories-field_featured_image'])) {
    $data['taxonomy_term-panopoly_categories-field_featured_image']['field_config']['cardinality'] = 10; /* WAS: 1 */
    $data['taxonomy_term-panopoly_categories-field_featured_image']['field_instance']['settings']['image_field_caption'] = 0; /* WAS: '' */
    $data['taxonomy_term-panopoly_categories-field_featured_image']['field_instance']['widget']['settings']['imce_filefield_on'] = 0; /* WAS: '' */
  }
  if (isset($data['user-user-field_user_picture'])) {
    $data['user-user-field_user_picture']['field_instance']['settings']['image_field_caption'] = 0; /* WAS: '' */
    $data['user-user-field_user_picture']['field_instance']['widget']['settings']['imce_filefield_on'] = 0; /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function csc_panopoly_feature_override_1_field_default_field_bases_alter(&$data) {
  if (isset($data['field_basic_file_file'])) {
    unset($data['field_basic_file_file']['foreign keys']);
  }
  if (isset($data['field_basic_file_text'])) {
    unset($data['field_basic_file_text']['foreign keys']);
  }
  if (isset($data['field_basic_image_caption'])) {
    unset($data['field_basic_image_caption']['foreign keys']);
  }
  if (isset($data['field_basic_image_image'])) {
    unset($data['field_basic_image_image']['foreign keys']);
  }
  if (isset($data['field_basic_spotlight_items'])) {
    unset($data['field_basic_spotlight_items']['foreign keys']);
  }
  if (isset($data['field_basic_table_table'])) {
    unset($data['field_basic_table_table']['foreign keys']);
  }
  if (isset($data['field_basic_text_text'])) {
    unset($data['field_basic_text_text']['foreign keys']);
  }
  if (isset($data['field_map_address'])) {
    unset($data['field_map_address']['foreign keys']);
  }
  if (isset($data['field_map_information'])) {
    unset($data['field_map_information']['foreign keys']);
  }
  if (isset($data['field_quick_links_links'])) {
    $data['field_quick_links_links']['cardinality'] = 5; /* WAS: -1 */
    unset($data['field_quick_links_links']['foreign keys']);
  }
  if (isset($data['field_video_file'])) {
    unset($data['field_video_file']['foreign keys']);
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function csc_panopoly_feature_override_1_field_default_field_instances_alter(&$data) {
  if (isset($data['fieldable_panels_pane-basic_file-field_basic_file_file'])) {
    $data['fieldable_panels_pane-basic_file-field_basic_file_file']['widget']['settings']['imce_filefield_on'] = 0; /* WAS: '' */
  }
  if (isset($data['fieldable_panels_pane-image-field_basic_image_image'])) {
    $data['fieldable_panels_pane-image-field_basic_image_image']['settings']['image_field_caption'] = 0; /* WAS: '' */
    $data['fieldable_panels_pane-image-field_basic_image_image']['widget']['settings']['imce_filefield_on'] = 0; /* WAS: '' */
  }
}

/**
 * Implements hook_file_default_displays_alter().
 */
function csc_panopoly_feature_override_1_file_default_displays_alter(&$data) {
  if (isset($data['video__default__media_vimeo_image'])) {
    $data['video__default__media_vimeo_image']->settings['image_style'] = 'panopoly_image_video'; /* WAS: 'large' */
    $data['video__default__media_vimeo_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__default__media_vimeo_video'])) {
    $data['video__default__media_vimeo_video']->settings['protocol'] = '//'; /* WAS: '' */
    $data['video__default__media_vimeo_video']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__default__media_youtube_image'])) {
    $data['video__default__media_youtube_image']->settings['image_style'] = 'panopoly_image_video'; /* WAS: 'large' */
    $data['video__default__media_youtube_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__default__media_youtube_video'])) {
    $data['video__default__media_youtube_video']->settings['modestbranding'] = 1; /* WAS: '' */
    $data['video__default__media_youtube_video']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__media_large__media_vimeo_image'])) {
    $data['video__media_large__media_vimeo_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__media_large__media_vimeo_video'])) {
    $data['video__media_large__media_vimeo_video']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__media_large__media_youtube_image'])) {
    $data['video__media_large__media_youtube_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__media_large__media_youtube_video'])) {
    $data['video__media_large__media_youtube_video']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__media_original__media_vimeo_image'])) {
    $data['video__media_original__media_vimeo_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__media_original__media_vimeo_video'])) {
    $data['video__media_original__media_vimeo_video']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__media_original__media_youtube_image'])) {
    $data['video__media_original__media_youtube_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__media_original__media_youtube_video'])) {
    $data['video__media_original__media_youtube_video']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__media_preview__media_vimeo_image'])) {
    $data['video__media_preview__media_vimeo_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__media_preview__media_youtube_image'])) {
    $data['video__media_preview__media_youtube_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__preview__media_vimeo_image'])) {
    $data['video__preview__media_vimeo_image']->settings['image_style'] = 'panopoly_image_thumbnail'; /* WAS: 'square_thumbnail' */
    $data['video__preview__media_vimeo_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__preview__media_youtube_image'])) {
    $data['video__preview__media_youtube_image']->settings['image_style'] = 'panopoly_image_thumbnail'; /* WAS: 'square_thumbnail' */
    $data['video__preview__media_youtube_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__teaser__media_vimeo_image'])) {
    $data['video__teaser__media_vimeo_image']->settings['image_style'] = 'panopoly_image_video'; /* WAS: 'large' */
    $data['video__teaser__media_vimeo_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__teaser__media_vimeo_video'])) {
    $data['video__teaser__media_vimeo_video']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__teaser__media_youtube_image'])) {
    $data['video__teaser__media_youtube_image']->settings['image_style'] = 'panopoly_image_video'; /* WAS: 'large' */
    $data['video__teaser__media_youtube_image']->status = TRUE; /* WAS: 1 */
  }
  if (isset($data['video__teaser__media_youtube_video'])) {
    $data['video__teaser__media_youtube_video']->status = TRUE; /* WAS: 1 */
  }
}

/**
 * Implements hook_file_default_types_alter().
 */
function csc_panopoly_feature_override_1_file_default_types_alter(&$data) {
  if (isset($data['audio'])) {
    $data['audio']->disabled = FALSE; /* WAS: '' */
    unset($data['audio']->mimetypes);
    unset($data['audio']->streams);
  }
  if (isset($data['document'])) {
    $data['document']->disabled = FALSE; /* WAS: '' */
    unset($data['document']->mimetypes);
    unset($data['document']->streams);
  }
  if (isset($data['image'])) {
    $data['image']->disabled = FALSE; /* WAS: '' */
    unset($data['image']->mimetypes);
    unset($data['image']->streams);
  }
  if (isset($data['video'])) {
    $data['video']->disabled = FALSE; /* WAS: '' */
    unset($data['video']->mimetypes);
    unset($data['video']->streams);
  }
}

/**
 * Implements hook_filter_default_formats_alter().
 */
function csc_panopoly_feature_override_1_filter_default_formats_alter(&$data) {
  if (isset($data['panopoly_html_text'])) {
    $data['panopoly_html_text']['filters']['wysiwyg']['settings']['valid_elements'] = 'a[!href|target<_blank|title|style],
    div[style|class|align<center?justify?left?right],
    br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
    span[style],p[style|class],
    h1,h2,h3,h4,h5,h6,
    img[!src|title|alt|style|width|height|class|hspace|vspace],
    @[style]'; /* WAS: 'a[!href|target<_blank|title|style],
    div[style|class|align<center?justify?left?right],
    br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
    span[style],p[style|class],
    h1,h2,h3,h4,h5,h6,
    img[!src|title|alt|style|width|height|class|hspace|vspace],
    @[style]' */
  }
  if (isset($data['panopoly_wysiwyg_text'])) {
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['valid_elements'] = 'a[!href|target<_blank|title|style],
    div[style|class|align<center?justify?left?right],
    br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
    span[style],p[style|class],
    h1,h2,h3,h4,h5,h6,
    img[!src|title|alt|style|width|height|class|hspace|vspace],
    @[style]'; /* WAS: 'a[!href|target<_blank|title|style],
    div[style|class|align<center?justify?left?right],
    br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
    span[style],p[style|class],
    h1,h2,h3,h4,h5,h6,
    img[!src|title|alt|style|width|height|class|hspace|vspace],
    @[style]' */
  }
}

/**
 * Implements hook_image_styles_alter().
 */
function csc_panopoly_feature_override_1_image_styles_alter(&$data) {
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
  if (isset($data['media_thumbnail'])) {

  if (!isset($data['media_thumbnail']['storage']) || $data['media_thumbnail']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['media_thumbnail']['effects'] = array_values($data['media_thumbnail']['effects']);
    $data['media_thumbnail']['label'] = 'media_thumbnail';
  }
  }
  if (isset($data['panopoly_image_featured'])) {

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
    $data['panopoly_image_featured']['label'] = 'panopoly_image_featured';
  }
  }
  if (isset($data['panopoly_image_full'])) {

  if (!isset($data['panopoly_image_full']['storage']) || $data['panopoly_image_full']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['panopoly_image_full']['effects'] = array_values($data['panopoly_image_full']['effects']);
    $data['panopoly_image_full']['label'] = 'panopoly_image_full';
  }

  if (!isset($data['panopoly_image_full']['storage']) || $data['panopoly_image_full']['storage'] == IMAGE_STORAGE_DEFAULT) {
    unset($data['panopoly_image_full']['effects'][0]);
  }
  }
  if (isset($data['panopoly_image_half'])) {

  if (!isset($data['panopoly_image_half']['storage']) || $data['panopoly_image_half']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['panopoly_image_half']['effects'] = array_values($data['panopoly_image_half']['effects']);
    $data['panopoly_image_half']['label'] = 'panopoly_image_half';
  }
  }
  if (isset($data['panopoly_image_quarter'])) {

  if (!isset($data['panopoly_image_quarter']['storage']) || $data['panopoly_image_quarter']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['panopoly_image_quarter']['effects'] = array_values($data['panopoly_image_quarter']['effects']);
    $data['panopoly_image_quarter']['label'] = 'panopoly_image_quarter';
  }
  }
  if (isset($data['panopoly_image_spotlight'])) {

  if (!isset($data['panopoly_image_spotlight']['storage']) || $data['panopoly_image_spotlight']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['panopoly_image_spotlight']['effects'] = array_values($data['panopoly_image_spotlight']['effects']);
    $data['panopoly_image_spotlight']['label'] = 'panopoly_image_spotlight';
  }
  }
  if (isset($data['panopoly_image_square'])) {

  if (!isset($data['panopoly_image_square']['storage']) || $data['panopoly_image_square']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['panopoly_image_square']['effects'] = array_values($data['panopoly_image_square']['effects']);
    $data['panopoly_image_square']['label'] = 'panopoly_image_square';
  }
  }
  if (isset($data['panopoly_image_thumbnail'])) {

  if (!isset($data['panopoly_image_thumbnail']['storage']) || $data['panopoly_image_thumbnail']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['panopoly_image_thumbnail']['effects'] = array_values($data['panopoly_image_thumbnail']['effects']);
    $data['panopoly_image_thumbnail']['label'] = 'panopoly_image_thumbnail';
  }
  }
  if (isset($data['panopoly_image_video'])) {

  if (!isset($data['panopoly_image_video']['storage']) || $data['panopoly_image_video']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['panopoly_image_video']['effects'] = array_values($data['panopoly_image_video']['effects']);
    $data['panopoly_image_video']['label'] = 'panopoly_image_video';
  }
  }
}

/**
 * Implements hook_default_linkit_profiles_alter().
 */
function csc_panopoly_feature_override_1_default_linkit_profiles_alter(&$data) {
  if (isset($data['content_editors'])) {
    $data['content_editors']->data['entity:file']['bundles']['document'] = 'document'; /* WAS: 0 */
    $data['content_editors']->data['entity:file']['reverse_menu_trail'] = 0; /* WAS: '' */
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
    $data['content_editors']->data['entity:node']['reverse_menu_trail'] = 0; /* WAS: '' */
    $data['content_editors']->data['entity:taxonomy_term']['bundles'] = array(
      'panopoly_categories' => 0,
      'tags' => 0,
      'newsletter' => 0,
    ); /* WAS: '' */
    $data['content_editors']->data['entity:taxonomy_term']['group_by_bundle'] = 0; /* WAS: '' */
    $data['content_editors']->data['entity:taxonomy_term']['reverse_menu_trail'] = 0; /* WAS: '' */
    $data['content_editors']->data['entity:user']['reverse_menu_trail'] = 0; /* WAS: '' */
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function csc_panopoly_feature_override_1_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_edit_panel_context'])) {
    $data['node_edit_panel_context']->conf['display']->content['new-10']->configuration['context'] = 'argument_node_edit_1'; /* WAS: array() */
    $data['node_edit_panel_context']->conf['display']->content['new-10']->configuration['override_title'] = 0; /* WAS: 1 */
    $data['node_edit_panel_context']->conf['display']->content['new-10']->subtype = 'node_form_publishing'; /* WAS: 'node_form_buttons' */
    $data['node_edit_panel_context']->conf['display']->content['new-10']->type = 'node_form_publishing'; /* WAS: 'node_form_buttons' */
    $data['node_edit_panel_context']->conf['display']->content['new-11'] = (object) array(
          'pid' => 'new-11',
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
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-12'] = (object) array(
          'pid' => 'new-12',
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
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-5']->configuration['override_title'] = 0; /* WAS: 1 */
    $data['node_edit_panel_context']->conf['display']->content['new-5']->configuration['override_title_text'] = ''; /* WAS: 'Content category' */
    $data['node_edit_panel_context']->conf['display']->content['new-5']->subtype = 'node:field_thumbnail'; /* WAS: 'node:field_featured_categories' */
    $data['node_edit_panel_context']->conf['display']->content['new-6']->configuration['context'] = 'argument_node_edit_1'; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-6']->configuration['formatter'] = ''; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-6']->configuration['label'] = ''; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-6']->configuration['override_title'] = 0; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-6']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-6']->subtype = 'node:field_vertical'; /* WAS: 'panelizer_form_default' */
    $data['node_edit_panel_context']->conf['display']->content['new-6']->type = 'entity_form_field'; /* WAS: 'panelizer_form_default' */
    $data['node_edit_panel_context']->conf['display']->content['new-7']->configuration['formatter'] = ''; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-7']->configuration['label'] = ''; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-7']->configuration['override_title'] = 1; /* WAS: 0 */
    $data['node_edit_panel_context']->conf['display']->content['new-7']->configuration['override_title_text'] = 'Content category'; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-7']->subtype = 'node:field_featured_categories'; /* WAS: 'node_form_menu' */
    $data['node_edit_panel_context']->conf['display']->content['new-7']->type = 'entity_form_field'; /* WAS: 'node_form_menu' */
    $data['node_edit_panel_context']->conf['display']->content['new-8']->subtype = 'panelizer_form_default'; /* WAS: 'node_form_publishing' */
    $data['node_edit_panel_context']->conf['display']->content['new-8']->type = 'panelizer_form_default'; /* WAS: 'node_form_publishing' */
    $data['node_edit_panel_context']->conf['display']->content['new-9']->configuration['context'] = 'argument_node_edit_1'; /* WAS: array() */
    $data['node_edit_panel_context']->conf['display']->content['new-9']->subtype = 'node_form_menu'; /* WAS: 'node_form_author' */
    $data['node_edit_panel_context']->conf['display']->content['new-9']->type = 'node_form_menu'; /* WAS: 'node_form_author' */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar'][7] = 'new-11'; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar'][8] = 'new-12'; /* WAS: '' */
    unset($data['node_edit_panel_context']->conf['display']->content['new-8']->configuration['context']);
    unset($data['node_edit_panel_context']->conf['display']->content['new-8']->configuration['override_title']);
    unset($data['node_edit_panel_context']->conf['display']->content['new-8']->configuration['override_title_text']);
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function csc_panopoly_feature_override_1_default_page_manager_pages_alter(&$data) {
  if (isset($data['panopoly_search'])) {
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-10'] = (object) array(
          'pid' => 'new-10',
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
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-11'] = (object) array(
          'pid' => 'new-11',
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
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-5']->panel = 'fixed'; /* WAS: 'contentmain' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-5']->subtype = 'main_menu'; /* WAS: 'search_current' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-5']->type = 'main_menu'; /* WAS: 'search_current' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-6']->panel = 'fixed'; /* WAS: 'contentmain' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-6']->subtype = 'csc_latest_news'; /* WAS: 'search_box' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-6']->type = 'csc_latest_news'; /* WAS: 'search_box' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->panel = 'fixed'; /* WAS: 'contentmain' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->subtype = 'csc_newsletter'; /* WAS: 'panopoly_database_search-search_database_results' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->type = 'csc_newsletter'; /* WAS: 'views_panes' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-8']->configuration['form'] = 'advanced'; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-8']->configuration['override_prompt'] = FALSE; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-8']->configuration['path'] = ''; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-8']->configuration['path_type'] = 'default'; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-8']->configuration['prompt'] = ''; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-8']->configuration['type'] = 'node'; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-8']->panel = 'fluid1'; /* WAS: 'sidebar' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-8']->subtype = 'search_current'; /* WAS: 'facet' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-8']->type = 'search_current'; /* WAS: 'facet' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-9'] = (object) array(
          'pid' => 'new-9',
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
        ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->layout = 'csc_3col'; /* WAS: 'burr_flipped' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panel_settings['style_settings']['fixed'] = NULL; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panel_settings['style_settings']['fluid1'] = NULL; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panel_settings['style_settings']['fluid2'] = NULL; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panels['fixed'] = array(
      0 => 'new-5',
      1 => 'new-6',
      2 => 'new-7',
    ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panels['fluid1'] = array(
      0 => 'new-8',
      1 => 'new-9',
      2 => 'new-10',
    ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panels['fluid2'] = array(
      0 => 'new-11',
    ); /* WAS: '' */
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-5']->configuration['form']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-5']->configuration['override_prompt']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-5']->configuration['path']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-5']->configuration['path_type']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-5']->configuration['prompt']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-5']->configuration['type']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-6']->configuration['context']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-6']->configuration['form']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-6']->configuration['override_prompt']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-6']->configuration['override_title']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-6']->configuration['override_title_text']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-6']->configuration['path']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-6']->configuration['path_type']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-6']->configuration['prompt']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-6']->configuration['type']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['context']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['exposed']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['fields_override']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['items_per_page']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['override_title']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['override_title_text']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['pager_id']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['use_pager']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['view_mode']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['view_settings']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-7']->configuration['widget_title']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-8']->configuration['context']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-8']->configuration['delta']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-8']->configuration['override_title']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->content['new-8']->configuration['override_title_text']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panels['contentmain']);
    unset($data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panels['sidebar']);
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function csc_panopoly_feature_override_1_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:panopoly_page:default'])) {
    $data['node:panopoly_page:default']->display->content['new-10'] = (object) array(
          'pid' => 'new-10',
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
          'position' => 3,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-1']->panel = 'fixed'; /* WAS: 'contentmain' */
    $data['node:panopoly_page:default']->display->content['new-1']->subtype = 'main_menu'; /* WAS: 'node:field_featured_image' */
    $data['node:panopoly_page:default']->display->content['new-1']->type = 'main_menu'; /* WAS: 'entity_field' */
    $data['node:panopoly_page:default']->display->content['new-2']->panel = 'fixed'; /* WAS: 'contentmain' */
    $data['node:panopoly_page:default']->display->content['new-2']->subtype = 'csc_latest_news'; /* WAS: 'node:body' */
    $data['node:panopoly_page:default']->display->content['new-2']->type = 'csc_latest_news'; /* WAS: 'entity_field' */
    $data['node:panopoly_page:default']->display->content['new-3']->configuration['tweets_to_show'] = 5; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-3']->configuration['username'] = 'wiifm'; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-3']->panel = 'fixed'; /* WAS: 'contentmain' */
    $data['node:panopoly_page:default']->display->content['new-3']->subtype = 'csc_newsletter'; /* WAS: 'node_links' */
    $data['node:panopoly_page:default']->display->content['new-3']->type = 'csc_newsletter'; /* WAS: 'node_links' */
    $data['node:panopoly_page:default']->display->content['new-4']->configuration['class'] = ''; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-4']->configuration['id'] = ''; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-4']->configuration['link'] = 0; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-4']->configuration['markup'] = 'none'; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-4']->panel = 'fluid1'; /* WAS: 'contentmain' */
    $data['node:panopoly_page:default']->display->content['new-4']->position = 0; /* WAS: 3 */
    $data['node:panopoly_page:default']->display->content['new-4']->subtype = 'node_title'; /* WAS: 'node:field_featured_categories' */
    $data['node:panopoly_page:default']->display->content['new-4']->type = 'node_title'; /* WAS: 'entity_field' */
    $data['node:panopoly_page:default']->display->content['new-5']->panel = 'fluid1'; /* WAS: 'sidebar' */
    $data['node:panopoly_page:default']->display->content['new-5']->position = 1; /* WAS: 0 */
    $data['node:panopoly_page:default']->display->content['new-5']->subtype = 'csc_teaser'; /* WAS: 'main-menu' */
    $data['node:panopoly_page:default']->display->content['new-5']->type = 'csc_teaser'; /* WAS: 'menu_tree' */
    $data['node:panopoly_page:default']->display->content['new-6'] = (object) array(
          'pid' => 'new-6',
          'panel' => 'fluid1',
          'type' => 'csc_related_research',
          'subtype' => 'csc_related_research',
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
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-7'] = (object) array(
          'pid' => 'new-7',
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
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-8'] = (object) array(
          'pid' => 'new-8',
          'panel' => 'fluid2',
          'type' => 'entity_field',
          'subtype' => 'node:field_audio_files',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'title',
            'formatter' => 'jplayer_player',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'autoplay' => 0,
              'solution' => 'html, flash',
              'preload' => 'metadata',
              'volume' => 80,
              'muted' => 0,
              'repeat' => 'none',
              'backgroundColor' => '000000',
              'mode' => 'playlist',
            ),
            'context' => array(),
            'override_title' => 0,
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
          'position' => 1,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-9'] = (object) array(
          'pid' => 'new-9',
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
          'position' => 2,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->layout = 'csc_3col'; /* WAS: 'bryant' */
    $data['node:panopoly_page:default']->display->panel_settings['style_settings']['fixed'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default']->display->panel_settings['style_settings']['fluid1'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default']->display->panel_settings['style_settings']['fluid2'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default']->display->panels['fixed'] = array(
      0 => 'new-1',
      1 => 'new-2',
      2 => 'new-3',
    ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->panels['fluid1'] = array(
      0 => 'new-4',
      1 => 'new-5',
      2 => 'new-6',
    ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->panels['fluid2'] = array(
      0 => 'new-7',
      1 => 'new-8',
      2 => 'new-9',
      3 => 'new-10',
    ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->title_pane = 0; /* WAS: 'new-1' */
    $data['node:panopoly_page:default']->pipeline = 'standard'; /* WAS: 'ipe' */
    unset($data['node:panopoly_page:default']->display->content['new-1']->configuration['context']);
    unset($data['node:panopoly_page:default']->display->content['new-1']->configuration['delta_limit']);
    unset($data['node:panopoly_page:default']->display->content['new-1']->configuration['delta_offset']);
    unset($data['node:panopoly_page:default']->display->content['new-1']->configuration['delta_reversed']);
    unset($data['node:panopoly_page:default']->display->content['new-1']->configuration['formatter']);
    unset($data['node:panopoly_page:default']->display->content['new-1']->configuration['formatter_settings']);
    unset($data['node:panopoly_page:default']->display->content['new-1']->configuration['label']);
    unset($data['node:panopoly_page:default']->display->content['new-1']->configuration['override_title']);
    unset($data['node:panopoly_page:default']->display->content['new-1']->configuration['override_title_text']);
    unset($data['node:panopoly_page:default']->display->content['new-2']->configuration['context']);
    unset($data['node:panopoly_page:default']->display->content['new-2']->configuration['delta_limit']);
    unset($data['node:panopoly_page:default']->display->content['new-2']->configuration['delta_offset']);
    unset($data['node:panopoly_page:default']->display->content['new-2']->configuration['delta_reversed']);
    unset($data['node:panopoly_page:default']->display->content['new-2']->configuration['formatter']);
    unset($data['node:panopoly_page:default']->display->content['new-2']->configuration['formatter_settings']);
    unset($data['node:panopoly_page:default']->display->content['new-2']->configuration['label']);
    unset($data['node:panopoly_page:default']->display->content['new-2']->configuration['override_title']);
    unset($data['node:panopoly_page:default']->display->content['new-2']->configuration['override_title_text']);
    unset($data['node:panopoly_page:default']->display->content['new-3']->configuration['build_mode']);
    unset($data['node:panopoly_page:default']->display->content['new-3']->configuration['context']);
    unset($data['node:panopoly_page:default']->display->content['new-3']->configuration['identifier']);
    unset($data['node:panopoly_page:default']->display->content['new-3']->configuration['link']);
    unset($data['node:panopoly_page:default']->display->content['new-3']->configuration['override_title']);
    unset($data['node:panopoly_page:default']->display->content['new-3']->configuration['override_title_text']);
    unset($data['node:panopoly_page:default']->display->content['new-3']->css['css_class']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['delta_limit']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['delta_offset']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['delta_reversed']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['formatter']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['formatter_settings']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['label']);
    unset($data['node:panopoly_page:default']->display->content['new-5']->configuration['admin_title']);
    unset($data['node:panopoly_page:default']->display->content['new-5']->configuration['depth']);
    unset($data['node:panopoly_page:default']->display->content['new-5']->configuration['expanded']);
    unset($data['node:panopoly_page:default']->display->content['new-5']->configuration['follow']);
    unset($data['node:panopoly_page:default']->display->content['new-5']->configuration['level']);
    unset($data['node:panopoly_page:default']->display->content['new-5']->configuration['menu_name']);
    unset($data['node:panopoly_page:default']->display->content['new-5']->configuration['override_title']);
    unset($data['node:panopoly_page:default']->display->content['new-5']->configuration['override_title_text']);
    unset($data['node:panopoly_page:default']->display->content['new-5']->configuration['parent_mlid']);
    unset($data['node:panopoly_page:default']->display->content['new-5']->configuration['sort']);
    unset($data['node:panopoly_page:default']->display->content['new-5']->configuration['title_link']);
    unset($data['node:panopoly_page:default']->display->panels['contentmain']);
    unset($data['node:panopoly_page:default']->display->panels['sidebar']);
  }
  if (isset($data['node:panopoly_page:default:default'])) {
    $data['node:panopoly_page:default:default']->display->content['new-11'] = (object) array(
          'pid' => 'new-11',
          'panel' => 'contentmain',
          'type' => 'entity_field',
          'subtype' => 'node:field_featured_image',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'hidden',
            'formatter' => 'image',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'image_style' => 'panopoly_image_half',
              'image_link' => '',
            ),
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
        ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-12'] = (object) array(
          'pid' => 'new-12',
          'panel' => 'contentmain',
          'type' => 'entity_field',
          'subtype' => 'node:body',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'hidden',
            'formatter' => 'text_default',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(),
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
          'position' => 1,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-13'] = (object) array(
          'pid' => 'new-13',
          'panel' => 'contentmain',
          'type' => 'node_links',
          'subtype' => 'node_links',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => FALSE,
            'override_title_text' => '',
            'build_mode' => 'default',
            'identifier' => '',
            'link' => TRUE,
            'context' => 'panelizer',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_class' => 'link-wrapper',
          ),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-14'] = (object) array(
          'pid' => 'new-14',
          'panel' => 'contentmain',
          'type' => 'entity_field',
          'subtype' => 'node:field_featured_categories',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'inline',
            'formatter' => 'taxonomy_term_reference_link',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(),
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
          'position' => 3,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain'][0] = 'new-11'; /* WAS: 'new-6' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain'][1] = 'new-12'; /* WAS: 'new-7' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain'][2] = 'new-13'; /* WAS: 'new-8' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain'][3] = 'new-14'; /* WAS: 'new-9' */
    unset($data['node:panopoly_page:default:default']->display->content['new-6']);
    unset($data['node:panopoly_page:default:default']->display->content['new-7']);
    unset($data['node:panopoly_page:default:default']->display->content['new-8']);
    unset($data['node:panopoly_page:default:default']->display->content['new-9']);
  }
  if (isset($data['node:panopoly_page:default:featured'])) {
    $data['node:panopoly_page:default:featured']->display->content['new-15'] = (object) array(
          'pid' => 'new-15',
          'panel' => 'contentmain',
          'type' => 'entity_field',
          'subtype' => 'node:field_featured_image',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'hidden',
            'formatter' => 'image',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'image_link' => 'content',
              'image_style' => 'panopoly_image_half',
            ),
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
        ); /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->content['new-16'] = (object) array(
          'pid' => 'new-16',
          'panel' => 'contentmain',
          'type' => 'node_title',
          'subtype' => 'node_title',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'link' => 1,
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
          'position' => 1,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->content['new-17'] = (object) array(
          'pid' => 'new-17',
          'panel' => 'contentmain',
          'type' => 'entity_field',
          'subtype' => 'node:body',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'hidden',
            'formatter' => 'text_summary_or_trimmed',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'trim_length' => 250,
            ),
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
          'position' => 2,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->content['new-18'] = (object) array(
          'pid' => 'new-18',
          'panel' => 'contentmain',
          'type' => 'node_links',
          'subtype' => 'node_links',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => FALSE,
            'override_title_text' => '',
            'build_mode' => 'featured',
            'identifier' => '',
            'link' => TRUE,
            'context' => 'panelizer',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_class' => 'link-wrapper',
          ),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain'][0] = 'new-15'; /* WAS: 'new-10' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain'][1] = 'new-16'; /* WAS: 'new-11' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain'][2] = 'new-17'; /* WAS: 'new-12' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain'][3] = 'new-18'; /* WAS: 'new-13' */
    unset($data['node:panopoly_page:default:featured']->display->content['new-10']);
    unset($data['node:panopoly_page:default:featured']->display->content['new-11']);
    unset($data['node:panopoly_page:default:featured']->display->content['new-12']);
    unset($data['node:panopoly_page:default:featured']->display->content['new-13']);
  }
  if (isset($data['node:panopoly_page:default:teaser'])) {
    $data['node:panopoly_page:default:teaser']->display->content['new-19'] = (object) array(
          'pid' => 'new-19',
          'panel' => 'contentmain',
          'type' => 'entity_field',
          'subtype' => 'node:field_featured_image',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'hidden',
            'formatter' => 'image',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'image_link' => 'content',
              'image_style' => 'panopoly_image_quarter',
            ),
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
        ); /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-20'] = (object) array(
          'pid' => 'new-20',
          'panel' => 'contentmain',
          'type' => 'entity_field',
          'subtype' => 'node:body',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'hidden',
            'formatter' => 'text_summary_or_trimmed',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'trim_length' => 600,
            ),
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
          'position' => 1,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-21'] = (object) array(
          'pid' => 'new-21',
          'panel' => 'contentmain',
          'type' => 'node_links',
          'subtype' => 'node_links',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => FALSE,
            'override_title_text' => '',
            'build_mode' => 'teaser',
            'identifier' => '',
            'link' => TRUE,
            'context' => 'panelizer',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_class' => 'link-wrapper',
          ),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->panels['contentmain'][0] = 'new-19'; /* WAS: 'new-14' */
    $data['node:panopoly_page:default:teaser']->display->panels['contentmain'][1] = 'new-20'; /* WAS: 'new-15' */
    $data['node:panopoly_page:default:teaser']->display->panels['contentmain'][2] = 'new-21'; /* WAS: 'new-16' */
    unset($data['node:panopoly_page:default:teaser']->display->content['new-14']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-15']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-16']);
  }
  if (isset($data['user:user:default'])) {
    $data['user:user:default']->pipeline = 'standard'; /* WAS: 'ipe' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function csc_panopoly_feature_override_1_strongarm_alter(&$data) {
  if (isset($data['additional_settings__active_tab_panopoly_page'])) {
    $data['additional_settings__active_tab_panopoly_page']->value = 'edit-workflow'; /* WAS: 'edit-submission' */
  }
  if (isset($data['field_bundle_settings_node__panopoly_page'])) {
    $data['field_bundle_settings_node__panopoly_page']->value['extra_fields']['form']['path']['weight'] = 1; /* WAS: 5 */
  }
  if (isset($data['node_options_panopoly_page'])) {
    $data['node_options_panopoly_page']->value[2] = 'revision'; /* WAS: '' */
  }
  if (isset($data['panelizer_defaults_node_panopoly_page'])) {
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['search_result'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function csc_panopoly_feature_override_1_views_default_views_alter(&$data) {
  if (isset($data['archive'])) {
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
  }
  if (isset($data['backlinks'])) {
    $data['backlinks']->display['block']->display_options['arguments']['nid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['block']->display_options['arguments']['nid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['arguments']['nid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['arguments']['nid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['backlinks']->display['default']->display_options['empty']['text']['empty']);
    unset($data['backlinks']->display['default']->display_options['fields']['title']['link_to_node']);
  }
  if (isset($data['frontpage'])) {
    $data['frontpage']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
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
    unset($data['glossary']->display['default']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['fields']['name']['link_to_user']);
    unset($data['glossary']->display['default']->display_options['fields']['title']['link_to_node']);
    unset($data['glossary']->display['default']->display_options['style_options']['override']);
    unset($data['glossary']->display['default']->display_options['style_options']['sticky']);
  }
  if (isset($data['media_default'])) {
    unset($data['media_default']->display['default']->display_options['fields']['filename']['link_to_file']);
  }
  if (isset($data['panopoly_database_search'])) {
    $data['panopoly_database_search']->display['default']->display_options['fields']['field_featured_image']['delta_first_last'] = TRUE; /* WAS: '' */
    $data['panopoly_database_search']->display['default']->display_options['fields']['field_featured_image']['delta_offset'] = 0; /* WAS: '' */
  }
  if (isset($data['taxonomy_term'])) {
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function csc_panopoly_feature_override_1_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['panopoly_wysiwyg_text'])) {
    $data['panopoly_wysiwyg_text']['editor'] = 'ckeditor'; /* WAS: 'tinymce' */
    $data['panopoly_wysiwyg_text']['settings']['apply_source_formatting'] = 1; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['settings']['block_formats'] = 'p,address,pre,h2,h3,h4,h5,h6,div'; /* WAS: 'h1,h2,h3,h4,h5,h6' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['BidiLtr'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['BidiRtl'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Blockquote'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Bold'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['BulletedList'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Copy'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Cut'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Font'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['FontSize'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['HorizontalRule'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Indent'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Italic'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['JustifyBlock'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['JustifyCenter'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['JustifyLeft'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['JustifyRight'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Link'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Maximize'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['NumberedList'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Outdent'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['PasteFromWord'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Redo'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Source'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['SpecialChar'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Strike'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Styles'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Subscript'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Superscript'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Table'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Underline'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Undo'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['Unlink'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['paste_auto_cleanup_on_paste'] = 0; /* WAS: 1 */
    $data['panopoly_wysiwyg_text']['settings']['show_toggle'] = 1; /* WAS: 0 */
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
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['paste']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['pdw']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['spellchecker']);
  }
}
