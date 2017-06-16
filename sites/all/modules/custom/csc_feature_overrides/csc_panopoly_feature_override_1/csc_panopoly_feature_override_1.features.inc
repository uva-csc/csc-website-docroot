<?php
/**
 * @file
 * csc_panopoly_feature_override_1.features.inc
 */

/**
 * Implements hook_field_default_field_bases_alter().
 */
function csc_panopoly_feature_override_1_field_default_field_bases_alter(&$data) {
  if (isset($data['field_quick_links_links'])) {
    $data['field_quick_links_links']['cardinality'] = 5; /* WAS: -1 */
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
  if (isset($data['video__default__media_vimeo_video'])) {
    $data['video__default__media_vimeo_video']->settings['protocol'] = '//'; /* WAS: 'https://' */
    $data['video__default__media_vimeo_video']->settings['protocol_specify'] = FALSE; /* WAS: 0 */
  }
  if (isset($data['video__default__media_youtube_video'])) {
    $data['video__default__media_youtube_video']->settings['modestbranding'] = 1; /* WAS: 0 */
  }
  if (isset($data['video__preview__media_vimeo_image'])) {
    $data['video__preview__media_vimeo_image']->settings['image_style'] = 'panopoly_image_thumbnail'; /* WAS: 'media_thumbnail' */
  }
  if (isset($data['video__preview__media_youtube_image'])) {
    $data['video__preview__media_youtube_image']->settings['image_style'] = 'panopoly_image_thumbnail'; /* WAS: 'media_thumbnail' */
  }
}

/**
 * Implements hook_file_default_types_alter().
 */
function csc_panopoly_feature_override_1_file_default_types_alter(&$data) {
  if (isset($data['audio'])) {
    $data['audio']->disabled = FALSE; /* WAS: '' */
    $data['audio']->mimetypes = ''; /* WAS: array(
      0 => 'audio\/*',
    ) */
  }
  if (isset($data['document'])) {
    $data['document']->disabled = FALSE; /* WAS: '' */
    $data['document']->mimetypes = ''; /* WAS: array(
      0 => 'text/plain',
      1 => 'application/msword',
      2 => 'application/vnd.ms-excel',
      3 => 'application/pdf',
      4 => 'application/vnd.ms-powerpoint',
      5 => 'application/vnd.oasis.opendocument.text',
      6 => 'application/vnd.oasis.opendocument.spreadsheet',
      7 => 'application/vnd.oasis.opendocument.presentation',
      8 => 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet',
      9 => 'application/vnd.openxmlformats-officedocument.presentationml.presentation',
      10 => 'application/vnd.openxmlformats-officedocument.wordprocessingml.document',
    ) */
  }
  if (isset($data['image'])) {
    $data['image']->disabled = FALSE; /* WAS: '' */
    $data['image']->mimetypes = ''; /* WAS: array(
      0 => 'image\/*',
    ) */
  }
  if (isset($data['video'])) {
    $data['video']->disabled = FALSE; /* WAS: '' */
    $data['video']->mimetypes = ''; /* WAS: array(
      0 => 'video\/*',
    ) */
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
        @[style]'; /* WAS: 'a[!href|target<_blank|title|style|class],
    div[style|class|align<center?justify?left?right],
    br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
    span[style],p[style|class],
    h1[style|class],h2[style|class],h3[style|class],h4[style|class],h5[style|class],h6[style|class],
    img[!src|title|alt|style|width|height|class|hspace|vspace],
    @[style|class|role|tabindex|aria-activedescendant|aria-atomic|aria-autocomplete|aria-busy|aria-checked|aria-controls|aria-describedby|aria-disabled|aria-dropeffect|aria-expanded|aria-flowto|aria-grabbed|aria-haspopup|aria-hidden|aria-invalid|aria-label|aria-labelledby|aria-level|aria-live|aria-multiline|aria-multiselectable|aria-owns|aria-posinset|aria-pressed|aria-readonly|aria-relevant|aria-required|aria-selected|aria-setsize|aria-sort|aria-valuemax|aria-valuemin|aria-valuenow|aria-valuetext]' */
  }
  if (isset($data['panopoly_wysiwyg_text'])) {
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['valid_elements'] = 'a[!href|target<_blank|title|style],
        div[style|class|align<center?justify?left?right],
        br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
        span[style],p[style|class],
        h1,h2,h3,h4,h5,h6,
        img[!src|title|alt|style|width|height|class|hspace|vspace],
        @[style]'; /* WAS: '@[style|class],
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
function csc_panopoly_feature_override_1_default_page_manager_handlers_alter(&$data) {
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
          'position' => 4,
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
          'position' => 3,
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
    $data['node_edit_panel_context']->conf['display']->panels['sidebar'][3] = 'new-c457a13f-1434-40ea-b081-46264ac49bc4'; /* WAS: 'new-e38ab3a3-24d0-4ac2-900e-4ddb0248be0c' */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar'][4] = 'new-96febc9f-78f6-4052-b0d7-5f079124b924'; /* WAS: 'new-9176b962-e64f-44a6-8ebe-e03ebf0f6c3d' */
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
function csc_panopoly_feature_override_1_default_page_manager_pages_alter(&$data) {
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
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->layout = 'csc_3col'; /* WAS: 'radix_burr_flipped' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panel_settings['style_settings']['fixed'] = NULL; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panel_settings['style_settings']['fluid1'] = NULL; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panel_settings['style_settings']['fluid2'] = NULL; /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panels['fixed'] = array(
      0 => 'new-78b2ab61-7841-4c9e-b063-3ed0e19f9528',
      1 => 'new-9708aa7d-5cb0-4a6f-9580-c6400ef66e63',
      2 => 'new-0c89e409-2d28-4af8-ac83-c25b4875c518',
    ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panels['fluid1'] = array(
      0 => 'new-3e13a5f8-cf24-4d72-adb1-9fc1cc2e5cbd',
      1 => 'new-f4183e6c-42a9-4eee-b148-14c9559a3523',
      2 => 'new-cbef272f-253a-4c15-9d8b-7e907a6618aa',
    ); /* WAS: '' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context_3']->conf['display']->panels['fluid2'] = array(
      0 => 'new-70a065f1-4c36-4835-9354-644ecee826f9',
    ); /* WAS: '' */
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
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->panels['contentmain'][0] = 'new-89d7b6f1-fb52-4b6e-a446-732a2b0e4d16'; /* WAS: 'new-15f4a1d6-8bf1-43cd-8ef3-a8b484aabe79' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->panels['contentmain'][1] = 'new-2da563e5-9dda-43e3-a6db-364c4536091e'; /* WAS: 'new-9315ef28-12fb-4ed8-a491-1c628e698406' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->panels['contentmain'][2] = 'new-a2f7b2c1-be52-4ef1-81f8-cb414bd52f0e'; /* WAS: 'new-25ec26bf-8e25-4163-bf5c-406fed80259d' */
    $data['panopoly_search']->default_handlers['page_panopoly_search_panel_context']->conf['display']->panels['sidebar'][0] = 'new-0b8b4180-9210-4ae7-b9e3-0233bbdf0c40'; /* WAS: 'new-3d1478d7-0f89-424e-824f-82483bc89651' */
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
function csc_panopoly_feature_override_1_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:panopoly_page:default'])) {
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
          'position' => 3,
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
          'uuid' => '70bae994-6dcf-4034-9825-181f454cc884',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-835b50a6-bbd7-4971-81c0-9a7d76abae4c'] = (object) array(
          'pid' => 'new-835b50a6-bbd7-4971-81c0-9a7d76abae4c',
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
          'uuid' => '835b50a6-bbd7-4971-81c0-9a7d76abae4c',
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
          'position' => 2,
          'locks' => array(),
          'uuid' => 'b570b4d9-b1f8-4ab2-a536-4a739809af00',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-d79f2d84-4cc9-4eb7-8b14-69fdde8e8509'] = (object) array(
          'pid' => 'new-d79f2d84-4cc9-4eb7-8b14-69fdde8e8509',
          'panel' => 'fluid1',
          'type' => 'csc_teaser',
          'subtype' => 'csc_teaser',
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
          'uuid' => 'd79f2d84-4cc9-4eb7-8b14-69fdde8e8509',
        ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-f00439f4-eb70-4eaf-9284-7957047bc727'] = (object) array(
          'pid' => 'new-f00439f4-eb70-4eaf-9284-7957047bc727',
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
          'uuid' => 'f00439f4-eb70-4eaf-9284-7957047bc727',
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
          'position' => 2,
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
      2 => 'new-f89132a4-56c1-436e-82ae-77eccf45b18c',
    ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->panels['fluid1'] = array(
      0 => 'new-5a7d057c-bc5b-4e5a-9ebe-29b215bbf6da',
      1 => 'new-d79f2d84-4cc9-4eb7-8b14-69fdde8e8509',
      2 => 'new-70bae994-6dcf-4034-9825-181f454cc884',
    ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->panels['fluid2'] = array(
      0 => 'new-a8ea8e1c-4cc2-4172-a62a-6e1ea5d5f3d6',
      1 => 'new-f00439f4-eb70-4eaf-9284-7957047bc727',
      2 => 'new-b570b4d9-b1f8-4ab2-a536-4a739809af00',
      3 => 'new-2bc509db-cdf6-44ba-a300-59da4e59cf67',
    ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->title_pane = 0; /* WAS: 'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1' */
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
  if (isset($data['node:panopoly_page:default:default'])) {
    $data['node:panopoly_page:default:default']->display->panels['contentmain'][4] = 'new-5f7a2651-df00-4c93-bd7e-75a7dbf8a88c'; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain'][5] = 'new-79030492-e9e6-456d-9295-49c1cc07f914'; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain'][6] = 'new-ab33d987-31f1-4647-b226-f0296183582c'; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain'][7] = 'new-012876bf-5816-4050-90c7-4a9d0aef7880'; /* WAS: '' */
  }
  if (isset($data['node:panopoly_page:default:featured'])) {
    $data['node:panopoly_page:default:featured']->display->panels['contentmain'][4] = 'new-4b1104cb-221d-433e-a0f9-c6d18920f8d8'; /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain'][5] = 'new-d32854f5-20f5-47fa-96de-fb5e14a064cd'; /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain'][6] = 'new-cf41d211-6db7-4ea3-8940-e50394b99486'; /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain'][7] = 'new-546da463-bd01-49dd-b6ac-02cc028373f7'; /* WAS: '' */
  }
  if (isset($data['node:panopoly_page:default:teaser'])) {
    $data['node:panopoly_page:default:teaser']->display->panels['contentmain'][3] = 'new-e6bbd3ff-4dea-43fd-9b02-e5755cad18c4'; /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->panels['contentmain'][4] = 'new-81f5e941-bbb3-48d9-9aae-1abc85d5cb4f'; /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->panels['contentmain'][5] = 'new-55a4d46c-f2f5-4fc1-8258-6619014e54ee'; /* WAS: '' */
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
 * Implements hook_strongarm_alter().
 */
function csc_panopoly_feature_override_1_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__panopoly_page'])) {
    $data['field_bundle_settings_node__panopoly_page']->value['extra_fields']['form']['path']['weight'] = 1; /* WAS: 5 */
    $data['field_bundle_settings_node__panopoly_page']->value['extra_fields']['form']['redirect'] = array(
      'weight' => 30,
    ); /* WAS: '' */
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
    $data['node_options_panopoly_page']->value[2] = 'revision'; /* WAS: '' */
  }
  if (isset($data['panelizer_defaults_node_panopoly_page'])) {
    unset($data['panelizer_defaults_node_panopoly_page']->value['help']);
    unset($data['panelizer_defaults_node_panopoly_page']->value['view modes']['default']['substitute']);
    unset($data['panelizer_defaults_node_panopoly_page']->value['view modes']['featured']['substitute']);
    unset($data['panelizer_defaults_node_panopoly_page']->value['view modes']['page_manager']['substitute']);
    unset($data['panelizer_defaults_node_panopoly_page']->value['view modes']['search_result']['substitute']);
    unset($data['panelizer_defaults_node_panopoly_page']->value['view modes']['teaser']['substitute']);
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
  if (isset($data['media_default'])) {
    unset($data['media_default']->display['default']->display_options['exposed_form']['options']);
    unset($data['media_default']->display['default']->display_options['fields']['filename']['link_to_file']);
  }
  if (isset($data['panopoly_database_search'])) {
    $data['panopoly_database_search']->display['default']->display_options['fields']['body']['settings']['trim_length'] = 300; /* WAS: 600 */
    $data['panopoly_database_search']->display['default']->display_options['fields']['field_featured_image']['delta_first_last'] = TRUE; /* WAS: '' */
    $data['panopoly_database_search']->display['default']->display_options['fields']['field_featured_image']['delta_limit'] = 10; /* WAS: '' */
    $data['panopoly_database_search']->display['default']->display_options['fields']['field_featured_image']['delta_offset'] = 0; /* WAS: '' */
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
