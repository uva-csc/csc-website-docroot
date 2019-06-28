<?php

/**
 * @file
 * csc_panopoly_feature_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function csc_panopoly_feature_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_group
  $overrides["field_group.group_user_profile|user|user|form.data|format_settings|instance_settings|classes"] = ' group-user-profile field-group-fieldset';

  // Exported overrides for: field_instance
  $overrides["field_instance.fieldable_panels_pane-basic_file-field_basic_file_file.widget|settings|imce_filefield_on"] = 0;
  $overrides["field_instance.fieldable_panels_pane-image-field_basic_image_image.settings|image_field_caption"] = array(
    'enabled' => 0,
  );
  $overrides["field_instance.fieldable_panels_pane-image-field_basic_image_image.settings|image_field_caption_wrapper"] = array(
    'image_field_caption_default' => array(
      'format' => 'plain_text',
      'value' => '',
    ),
  );
  $overrides["field_instance.fieldable_panels_pane-map-field_map_address.display|default|settings|apikey"] = '';
  $overrides["field_instance.node-panopoly_page-field_featured_image.settings|image_field_caption"] = array(
    'enabled' => 0,
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.settings|image_field_caption_wrapper"] = array(
    'image_field_caption_default' => array(
      'format' => 'plain_text',
      'value' => '',
    ),
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|module"] = 'media';
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|allowed_schemes"] = array(
    'public' => 'public',
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|allowed_types"] = array(
    'image' => 'image',
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|browser_plugins"] = array();
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|imce_filefield_on"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|type"] = 'media_generic';
  $overrides["field_instance.taxonomy_term-panopoly_categories-field_featured_image.settings|image_field_caption"] = array(
    'enabled' => 0,
  );
  $overrides["field_instance.taxonomy_term-panopoly_categories-field_featured_image.settings|image_field_caption_wrapper"] = array(
    'image_field_caption_default' => array(
      'format' => 'plain_text',
      'value' => '',
    ),
  );
  $overrides["field_instance.taxonomy_term-panopoly_categories-field_featured_image.widget|settings|imce_filefield_on"] = 0;
  $overrides["field_instance.user-user-field_user_picture.settings|image_field_caption"] = array(
    'enabled' => 0,
  );
  $overrides["field_instance.user-user-field_user_picture.settings|image_field_caption_wrapper"] = array(
    'image_field_caption_default' => array(
      'format' => 'plain_text',
      'value' => '',
    ),
  );
  $overrides["field_instance.user-user-field_user_picture.widget|settings|imce_filefield_on"] = 0;

  // Exported overrides for: file_display
  $overrides["file_display.image__default__file_field_file_default.status"] = FALSE;
  $overrides["file_display.image__default__file_field_image.settings|image_link"] = 'file';
  $overrides["file_display.image__default__file_field_image.settings|image_style"] = 'panopoly_image_original';
  $overrides["file_display.image__preview__file_field_file_default.status"] = FALSE;
  $overrides["file_display.image__preview__file_field_image.settings|image_style"] = 'panopoly_image_thumbnail';
  $overrides["file_display.image__preview__file_field_media_large_icon.status"] = FALSE;
  $overrides["file_display.image__teaser__file_field_file_default.status"] = FALSE;
  $overrides["file_display.image__teaser__file_field_image.settings|image_style"] = 'panopoly_image_quarter';
  $overrides["file_display.video__default__media_vimeo_video.settings|protocol_specify"] = FALSE;
  $overrides["file_display.video__default__media_youtube_video.settings|modestbranding"] = 1;
  $overrides["file_display.video__default__media_youtube_video.settings|rel"] = 1;
  $overrides["file_display.video__preview__file_field_file_default.status"] = FALSE;
  $overrides["file_display.video__preview__media_vimeo_image.settings|image_style"] = 'panopoly_image_thumbnail';
  $overrides["file_display.video__preview__media_youtube_image.settings|image_style"] = 'panopoly_image_thumbnail';
  $overrides["file_display.video__teaser__media_youtube_video.settings|rel"] = 1;

  // Exported overrides for: file_type
  $overrides["file_type.audio.disabled"] = FALSE;
  $overrides["file_type.document.disabled"] = FALSE;
  $overrides["file_type.image.disabled"] = FALSE;
  $overrides["file_type.video.disabled"] = FALSE;

  // Exported overrides for: filter
  $overrides["filter.panopoly_html_text.filters|wysiwyg|settings|rule_bypass_style_urls"] = 0;
  $overrides["filter.panopoly_html_text.filters|wysiwyg|settings|rule_bypass_valid_classes"] = 0;
  $overrides["filter.panopoly_html_text.filters|wysiwyg|settings|rule_bypass_valid_ids"] = 0;
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|rule_bypass_style_urls"] = 0;
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|rule_bypass_valid_classes"] = 0;
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|rule_bypass_valid_ids"] = 0;
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_border-1|border"] = 'border';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_border-2|border-radius"] = 0;
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_box|margin"] = 'margin';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_box|margin-bottom"] = 'margin-bottom';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_box|margin-left"] = 'margin-left';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_box|margin-right"] = 'margin-right';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_box|margin-top"] = 'margin-top';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_box|padding"] = 'padding';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_box|padding-bottom"] = 'padding-bottom';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_box|padding-top"] = 'padding-top';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_color|background-color"] = 'background-color';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_layout|clear"] = 'clear';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_layout|display"] = 'display';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_layout|position"] = 'position';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_layout|visibility"] = 'visibility';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_list|list-style"] = 'list-style';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_list|list-style-type"] = 'list-style-type';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_positioning|bottom"] = 'bottom';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_positioning|left"] = 'left';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_positioning|overflow"] = 'overflow';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_positioning|right"] = 'right';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_positioning|top"] = 'top';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_positioning|vertical-align"] = 'vertical-align';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_positioning|z-index"] = 'z-index';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_table|border-collapse"] = 'border-collapse';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_table|border-spacing"] = 'border-spacing';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_table|caption-side"] = 'caption-side';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_table|empty-cells"] = 'empty-cells';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_table|table-layout"] = 'table-layout';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|style_user|cursor"] = 'cursor';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|valid_elements"] = '@[style|class],
  a[href|name|target<_blank|title],
  div[align<center?justify?left?right],
  br,em,i,u,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,hr,
  span,p,
  h1,h2,h3,h4,h5,h6,
  img[!src|title|alt|width|height|hspace|vspace],
  table,tr,th,td';

  // Exported overrides for: image
  $overrides["image.apps_featured_screenshot.label"] = 'apps_featured_screenshot';
  $overrides["image.apps_logo.label"] = 'apps_logo';
  $overrides["image.apps_logo_small.label"] = 'apps_logo_small';
  $overrides["image.apps_screenshot.label"] = 'apps_screenshot';
  $overrides["image.linkit_thumb.label"] = 'linkit_thumb';
  $overrides["image.panopoly_image_featured.effects|0|data|upscale"] = 1;
  $overrides["image.panopoly_image_featured.effects|0|data|width"] = 720;
  $overrides["image.panopoly_image_featured.effects|1|data|height"] = 390;
  $overrides["image.panopoly_image_featured.effects|1|data|width"] = 720;
  $overrides["image.panopoly_image_featured.effects|1|weight"] = 2;
  $overrides["image.panopoly_image_featured.effects|2"]["DELETED"] = TRUE;
  $overrides["image.panopoly_image_full.effects|0"]["DELETED"] = TRUE;
  $overrides["image.panopoly_image_full.effects|1"]["DELETED"] = TRUE;

  // Exported overrides for: linkit_profiles
  $overrides["linkit_profiles.content_editors.data|attribute_plugins|class|enabled"] = 0;
  $overrides["linkit_profiles.content_editors.data|attributes"] = array(
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
  );
  $overrides["linkit_profiles.content_editors.data|entity:file|url_type"] = 'entity';
  $overrides["linkit_profiles.content_editors.data|entity:node|bundles"] = array(
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
  );
  $overrides["linkit_profiles.content_editors.data|entity:node|group_by_bundle"] = 0;
  $overrides["linkit_profiles.content_editors.data|entity:search_api_index"]["DELETED"] = TRUE;
  $overrides["linkit_profiles.content_editors.data|entity:search_api_server"]["DELETED"] = TRUE;
  $overrides["linkit_profiles.content_editors.data|entity:taxonomy_term|bundles"] = array(
    'panopoly_categories' => 0,
    'tags' => 0,
    'newsletter' => 0,
  );
  $overrides["linkit_profiles.content_editors.data|entity:taxonomy_term|group_by_bundle"] = 0;
  $overrides["linkit_profiles.content_editors.data|insert_plugin|plugin"] = 'raw_url';
  $overrides["linkit_profiles.content_editors.data|insert_plugin|url_method"] = 1;
  $overrides["linkit_profiles.content_editors.data|search_plugins|entity:search_api_index"]["DELETED"] = TRUE;
  $overrides["linkit_profiles.content_editors.data|search_plugins|entity:search_api_server"]["DELETED"] = TRUE;
  $overrides["linkit_profiles.content_editors.data|text_formats"]["DELETED"] = TRUE;
  $overrides["linkit_profiles.content_editors.profile_type"] = 2;

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-0581ce01-43a7-4745-b1fb-b10754d71419"] = (object) array(
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
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-1557fa3f-0820-4917-b5a3-2e94dab584d3"] = (object) array(
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
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-17fa67de-e033-46f2-bdd8-a138e91da0e4"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-1f8f9b3f-280d-41c0-ace8-d9d7a65b05cb"] = (object) array(
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
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-27461e33-2142-496b-bdef-3b4f4f37f390"] = (object) array(
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
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-373bd769-1e08-4ec5-85b6-0a1d2fc759fd"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-51126c95-cf51-4ad6-a27a-11e4260d8023"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-646a54da-4dce-4c04-a911-3d4cbbbe8b9c"] = (object) array(
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
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-6b9f3387-e850-4081-ad22-70e8e0fcb583"] = (object) array(
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
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-6e4a98d8-3738-41b9-8c33-4b4c905c6834"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-73569090-5f67-47b1-b6a5-634bc8104c2b"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-850eeb5b-d2f5-4e30-8cde-170ddff1467a"] = (object) array(
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
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-9176b962-e64f-44a6-8ebe-e03ebf0f6c3d"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-96febc9f-78f6-4052-b0d7-5f079124b924"] = (object) array(
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
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-99f6c0bd-36fd-411b-9833-c0be0fab7548"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-a33ad46b-8f12-4020-bb22-95d5055c6097"] = (object) array(
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
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-bf0d67ac-6135-482f-af87-4ffb78f4fcb7"] = (object) array(
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
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-c0926cca-059c-4bb1-bccd-2838ec7a93f2"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-c457a13f-1434-40ea-b081-46264ac49bc4"] = (object) array(
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
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-e38ab3a3-24d0-4ac2-900e-4ddb0248be0c"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-edd5febf-95e6-4554-a486-4481da969e37"] = (object) array(
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
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-fb4920fb-24fa-425e-b6fc-958b5ccd2d52"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|contentmain|0"] = 'new-a33ad46b-8f12-4020-bb22-95d5055c6097';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|contentmain|1"] = 'new-646a54da-4dce-4c04-a911-3d4cbbbe8b9c';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|contentmain|2"] = 'new-850eeb5b-d2f5-4e30-8cde-170ddff1467a';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|0"] = 'new-6b9f3387-e850-4081-ad22-70e8e0fcb583';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|1"] = 'new-bf0d67ac-6135-482f-af87-4ffb78f4fcb7';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|2"] = 'new-1557fa3f-0820-4917-b5a3-2e94dab584d3';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|3"] = 'new-96febc9f-78f6-4052-b0d7-5f079124b924';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|4"] = 'new-c457a13f-1434-40ea-b081-46264ac49bc4';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|5"] = 'new-1f8f9b3f-280d-41c0-ace8-d9d7a65b05cb';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|6"] = 'new-edd5febf-95e6-4554-a486-4481da969e37';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|7"] = 'new-27461e33-2142-496b-bdef-3b4f4f37f390';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|8"] = 'new-0581ce01-43a7-4745-b1fb-b10754d71419';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|title_pane"] = 'new-850eeb5b-d2f5-4e30-8cde-170ddff1467a';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|uuid"] = '2f3914a5-73cc-4a8c-81b7-4b7400fba22a';

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-0c89e409-2d28-4af8-ac83-c25b4875c518"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-2693d0e2-3b32-4ca3-87b6-fa2ccec54399"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-3e13a5f8-cf24-4d72-adb1-9fc1cc2e5cbd"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-44eb1f21-6415-4344-ae5a-45172ed2cb8c"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-6e68b43e-ac55-4417-9705-64e3c639c681"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-70a065f1-4c36-4835-9354-644ecee826f9"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-78b2ab61-7841-4c9e-b063-3ed0e19f9528"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-9708aa7d-5cb0-4a6f-9580-c6400ef66e63"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-cbef272f-253a-4c15-9d8b-7e907a6618aa"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-dbac3f16-6f98-43f5-a2b3-bb1b0dc363d9"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-f4183e6c-42a9-4eee-b148-14c9559a3523"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|hide_title"] = 0;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|layout"] = 'csc_3col';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panel_settings|style_settings|fixed"] = NULL;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panel_settings|style_settings|fluid1"] = NULL;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panel_settings|style_settings|fluid2"] = NULL;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panels|contentmain"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panels|fixed"] = array(
    0 => 'new-0c89e409-2d28-4af8-ac83-c25b4875c518',
    1 => 'new-78b2ab61-7841-4c9e-b063-3ed0e19f9528',
    2 => 'new-9708aa7d-5cb0-4a6f-9580-c6400ef66e63',
  );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panels|fluid1"] = array(
    0 => 'new-3e13a5f8-cf24-4d72-adb1-9fc1cc2e5cbd',
    1 => 'new-cbef272f-253a-4c15-9d8b-7e907a6618aa',
    2 => 'new-f4183e6c-42a9-4eee-b148-14c9559a3523',
  );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panels|fluid2"] = array(
    0 => 'new-70a065f1-4c36-4835-9354-644ecee826f9',
  );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panels|sidebar"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|title_pane"] = 'new-f4183e6c-42a9-4eee-b148-14c9559a3523';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|uuid"] = '8b2bd2f9-1e2b-475a-8d6d-078396b6c17b';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context|conf|display|content|new-0b8b4180-9210-4ae7-b9e3-0233bbdf0c40"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context|conf|display|content|new-15f4a1d6-8bf1-43cd-8ef3-a8b484aabe79"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context|conf|display|content|new-25ec26bf-8e25-4163-bf5c-406fed80259d"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context|conf|display|content|new-2da563e5-9dda-43e3-a6db-364c4536091e"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context|conf|display|content|new-3d1478d7-0f89-424e-824f-82483bc89651"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context|conf|display|content|new-89d7b6f1-fb52-4b6e-a446-732a2b0e4d16"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context|conf|display|content|new-9315ef28-12fb-4ed8-a491-1c628e698406"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context|conf|display|content|new-a2f7b2c1-be52-4ef1-81f8-cb414bd52f0e"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context|conf|display|hide_title"] = 0;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context|conf|display|panels|contentmain|0"] = 'new-2da563e5-9dda-43e3-a6db-364c4536091e';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context|conf|display|panels|contentmain|1"] = 'new-89d7b6f1-fb52-4b6e-a446-732a2b0e4d16';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context|conf|display|panels|contentmain|2"] = 'new-a2f7b2c1-be52-4ef1-81f8-cb414bd52f0e';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context|conf|display|panels|sidebar|0"] = 'new-0b8b4180-9210-4ae7-b9e3-0233bbdf0c40';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context|conf|display|title_pane"] = 'new-a2f7b2c1-be52-4ef1-81f8-cb414bd52f0e';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context|conf|display|uuid"] = 'b00a586b-3993-43f8-a5b5-90afa896347b';

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-1e4a2e89-fc55-406c-bf48-e97e5baccf00"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-2bc509db-cdf6-44ba-a300-59da4e59cf67"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4e2e56d2-e059-4650-a12d-ba50e9868401"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5a7d057c-bc5b-4e5a-9ebe-29b215bbf6da"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-70bae994-6dcf-4034-9825-181f454cc884"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-835b50a6-bbd7-4971-81c0-9a7d76abae4c"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-9b436078-d0da-44a0-86f3-023fd3848add"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-a8ea8e1c-4cc2-4172-a62a-6e1ea5d5f3d6"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-b0a0704e-69fd-49b0-bd95-29f938214359"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-b570b4d9-b1f8-4ab2-a536-4a739809af00"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-d79f2d84-4cc9-4eb7-8b14-69fdde8e8509"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-e2df6280-bb65-4a65-bbde-9127e87852bc"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-ed4d2a85-1473-401f-a4e0-e0d94c2ca699"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-f3bf9c22-9b22-41d2-a57e-110951093871"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-f89132a4-56c1-436e-82ae-77eccf45b18c"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|layout"] = 'csc_3col';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panel_settings|style_settings|fixed"] = NULL;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panel_settings|style_settings|fluid1"] = NULL;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panel_settings|style_settings|fluid2"] = NULL;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|contentmain"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|fixed"] = array(
    0 => 'new-4e2e56d2-e059-4650-a12d-ba50e9868401',
    1 => 'new-835b50a6-bbd7-4971-81c0-9a7d76abae4c',
    2 => 'new-ed4d2a85-1473-401f-a4e0-e0d94c2ca699',
    3 => 'new-f89132a4-56c1-436e-82ae-77eccf45b18c',
  );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|fluid1"] = array(
    0 => 'new-5a7d057c-bc5b-4e5a-9ebe-29b215bbf6da',
    1 => 'new-70bae994-6dcf-4034-9825-181f454cc884',
    2 => 'new-d79f2d84-4cc9-4eb7-8b14-69fdde8e8509',
    3 => 'new-e2df6280-bb65-4a65-bbde-9127e87852bc',
  );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|fluid2"] = array(
    0 => 'new-a8ea8e1c-4cc2-4172-a62a-6e1ea5d5f3d6',
    1 => 'new-2bc509db-cdf6-44ba-a300-59da4e59cf67',
    2 => 'new-b0a0704e-69fd-49b0-bd95-29f938214359',
    3 => 'new-9b436078-d0da-44a0-86f3-023fd3848add',
    4 => 'new-1e4a2e89-fc55-406c-bf48-e97e5baccf00',
    5 => 'new-b570b4d9-b1f8-4ab2-a536-4a739809af00',
  );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|sidebar"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|title_pane"] = 'new-f89132a4-56c1-436e-82ae-77eccf45b18c';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|uuid"] = 'e4c588ce-e8eb-43ff-aae6-9f58c56cd20e';
  $overrides["panelizer_defaults.node:panopoly_page:default.pipeline"] = 'standard';
  $overrides["panelizer_defaults.user:user:default.display|content|new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-34b9aa04-6a1b-4636-a5ac-17f88991aae6"] = (object) array(
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
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-d76e85cd-4625-4a52-a17b-e5c65e1a0247"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-f7cfaed1-924a-4b68-9ede-c907b81a5a60"] = (object) array(
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
    );
  $overrides["panelizer_defaults.user:user:default.display|panels|column1|0"] = 'new-34b9aa04-6a1b-4636-a5ac-17f88991aae6';
  $overrides["panelizer_defaults.user:user:default.display|panels|column2|0"] = 'new-f7cfaed1-924a-4b68-9ede-c907b81a5a60';
  $overrides["panelizer_defaults.user:user:default.display|uuid"] = '98ac168f-c536-4838-a97e-a3000b1b6886';
  $overrides["panelizer_defaults.user:user:default.pipeline"] = 'standard';

  // Exported overrides for: search_api_server
  $overrides["search_api_server.database_server.options|partial_matches"]["DELETED"] = TRUE;

  // Exported overrides for: variable
  $overrides["variable.date_popup_authored_enabled_panopoly_landing_page.value"] = 1;
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|extra_fields|form|path|weight"] = 1;
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|view_modes|email_html"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|view_modes|email_plain"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|view_modes|email_textalt"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.node_options_panopoly_page.value|1"] = 'revision';
  $overrides["variable.node_preview_panopoly_landing_page.value"] = 1;
  $overrides["variable.node_submitted_panopoly_landing_page.value"] = 1;
  $overrides["variable.panelizer_defaults_node_panopoly_landing_page.value|status"] = 0;
  $overrides["variable.panelizer_defaults_node_panopoly_landing_page.value|view modes|default"]["DELETED"] = TRUE;
  $overrides["variable.panelizer_defaults_node_panopoly_landing_page.value|view modes|featured"]["DELETED"] = TRUE;
  $overrides["variable.panelizer_defaults_node_panopoly_landing_page.value|view modes|page_manager"]["DELETED"] = TRUE;
  $overrides["variable.panelizer_defaults_node_panopoly_landing_page.value|view modes|teaser"]["DELETED"] = TRUE;

  // Exported overrides for: views_view
  $overrides["views_view.admin_views_file.display|default|display_options|fields|views_bulk_operations|table"] = 'views_entity_file';
  $overrides["views_view.admin_views_file.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::panelizer_set_status_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_file.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_send_email_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_file.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_argument_selector_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_file.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_script_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|promote"] = array(
    'id' => 'promote',
    'table' => 'node',
    'field' => 'promote',
    'label' => 'Front page',
    'element_label_colon' => FALSE,
    'not' => 0,
  );
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|table"] = 'views_entity_node';
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_assign_owner_action|skip_confirmation"] = 0;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_export_json_action"] = array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  );
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_export_serialize_action"] = array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  );
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_export_xml_action"] = array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  );
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_make_sticky_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_make_unsticky_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_promote_action|skip_confirmation"] = 0;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_publish_action|skip_confirmation"] = 0;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_save_action|label"] = 'Save Nodes';
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_save_action|override_label"] = 1;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_save_action|selected"] = 1;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_unpromote_action|skip_confirmation"] = 0;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_unpublish_action|skip_confirmation"] = 0;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_unpublish_by_keyword_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::pathauto_node_update_action"] = array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 1,
    'label' => 'Update Alias',
  );
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_goto_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_message_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_send_email_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_argument_selector_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_modify_action|skip_confirmation"] = 0;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_script_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_settings|row_clickable"] = 1;
  $overrides["views_view.admin_views_node.display|default|display_options|filters|promote"] = array(
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
  );
  $overrides["views_view.admin_views_node.display|default|display_options|filters|status|group"] = 1;
  $overrides["views_view.admin_views_node.display|default|display_options|filters|title|group"] = 1;
  $overrides["views_view.admin_views_node.display|default|display_options|filters|type|group"] = 1;
  $overrides["views_view.admin_views_node.display|default|display_options|filters|uid|group"] = 1;
  $overrides["views_view.admin_views_node.display|default|display_options|filters|vid|group"] = 1;
  $overrides["views_view.admin_views_node.display|default|display_options|header"] = array(
    'result' => array(
      'id' => 'result',
      'table' => 'views',
      'field' => 'result',
    ),
  );
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|table"] = 'views_entity_user';
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_block_ip_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_goto_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_message_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::user_block_user_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_argument_selector_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_delete_item"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_script_action"]["DELETED"] = TRUE;
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|exception|title_enable"] = TRUE;
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|specify_validation"] = TRUE;
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|access|perm"]["DELETED"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|exception|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|specify_validation"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.backlinks.display|block|display_options|arguments|nid|specify_validation"] = TRUE;
  $overrides["views_view.backlinks.display|block|display_options|arguments|nid|title_enable"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|access|perm"]["DELETED"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|arguments|nid|specify_validation"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|arguments|nid|title_enable"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|empty|text|empty"]["DELETED"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.events.display|default|display_options|empty|area|content"] = '<?php
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
      <p>There are currently no events schedule. Usually, this means we are between semesters. Stay tuned! More events to be planned soon.</p>
      ';
  $overrides["views_view.frontpage.display|default|display_options|access|perm"]["DELETED"] = TRUE;
  $overrides["views_view.frontpage.display|default|display_options|row_options"]["DELETED"] = TRUE;
  $overrides["views_view.frontpage.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|exception|title_enable"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|glossary"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|specify_validation"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|summary_options|inline"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|transform_dash"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|inherit_arguments"] = FALSE;
  $overrides["views_view.glossary.display|default|display_options|access|perm"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|exception|title_enable"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|glossary"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|specify_validation"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|transform_dash"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|fields|name|link_to_user"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|style_options|override"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|style_options|sticky"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.location_directory.changed"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|access_options"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|case"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|default_action"] = 'summary';
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|default_argument"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|default_argument_fixed"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|default_argument_php"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|default_options_div_prefix"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|exception"] = array(
    'title_enable' => TRUE,
  );
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|glossary"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|path_case"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|specify_validation"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|style_options"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|style_plugin"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|summary"] = array(
    'format' => 'default_summary',
  );
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|title_enable"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|transform_dash"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|validate_argument_nid_type"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|validate_argument_node_access"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|validate_argument_node_type"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|validate_argument_php"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|validate_fail"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|validate_type"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|wildcard"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|city|wildcard_substitution"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|default_action"] = 'summary';
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|default_argument"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|default_argument_fixed"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|default_argument_php"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|default_options_div_prefix"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|exception"] = array(
    'title_enable' => TRUE,
  );
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|specify_validation"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|style_options"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|style_plugin"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|summary"] = array(
    'format' => 'default_summary',
  );
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|title_enable"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|validate_argument_nid_type"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|validate_argument_node_access"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|validate_argument_node_type"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|validate_argument_php"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|validate_fail"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|validate_type"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|wildcard"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|country|wildcard_substitution"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|default_action"] = 'summary';
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|default_argument"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|default_argument_fixed"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|default_argument_php"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|default_options_div_prefix"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|exception"] = array(
    'title_enable' => TRUE,
  );
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|specify_validation"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|style_options"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|style_plugin"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|summary"] = array(
    'format' => 'default_summary',
  );
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|title_enable"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|validate_argument_nid_type"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|validate_argument_node_access"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|validate_argument_node_type"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|validate_argument_php"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|validate_fail"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|validate_type"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|wildcard"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|arguments|province|wildcard_substitution"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|cache"] = array(
    'type' => 'none',
  );
  $overrides["views_view.location_directory.display|default|display_options|defaults"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|exposed_form"] = array(
    'type' => 'basic',
  );
  $overrides["views_view.location_directory.display|default|display_options|fields|city|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|city|label"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|city|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|country|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|country|label"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|country|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|country|style"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|postal_code|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|postal_code|label"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|postal_code|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|province|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|province|label"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|province|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|province|style"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|street|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|street|label"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|street|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|street|style"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|title|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|title|label"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|fields|title|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|filter_groups"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|filters|lid|exposed"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|filters|lid|expose|label"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|filters|lid|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|filters|lid|value"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|filters|status_extra|exposed"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|filters|status_extra|expose|label"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|filters|status_extra|operator"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|filters|status_extra|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|filters|status_extra|value"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|items_per_page"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|offset"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|pager|options"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|row_options"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|row_plugin"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|style_options|order"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|style_options|override"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|style_options|sticky"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.location_directory.display|default|display_options|use_pager"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|page_1|display_options|items_per_page"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|page_1|display_options|offset"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|page_1|display_options|pager"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|page_1|display_options|tab_options"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.display|page_1|display_options|use_pager"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.is_cacheable"]["DELETED"] = TRUE;
  $overrides["views_view.location_directory.view_php"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.changed"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|access_options"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|cache"] = array(
    'type' => 'none',
  );
  $overrides["views_view.location_table.display|default|display_options|defaults"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|exposed_form"] = array(
    'type' => 'basic',
  );
  $overrides["views_view.location_table.display|default|display_options|fields|city|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|city|label"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|city|override"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|city|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|country|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|country|label"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|country|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|country|style"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|postal_code|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|postal_code|label"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|postal_code|override"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|postal_code|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|province|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|province|label"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|province|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|province|style"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|street|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|street|label"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|street|override"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|street|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|street|style"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|title|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|title|label"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|title|override"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|fields|title|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|filter_groups"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|filters|lid|exposed"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|filters|lid|expose|label"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|filters|lid|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|filters|lid|value"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|filters|status_extra|exposed"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|filters|status_extra|expose|label"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|filters|status_extra|operator"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|filters|status_extra|override"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|filters|status_extra|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|filters|status_extra|value"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|items_per_page"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|offset"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|pager|options"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|row_options"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|row_plugin"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|style_options|order"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|style_options|override"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|style_options|sticky"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.location_table.display|default|display_options|use_pager"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|page_1|display_options|items_per_page"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|page_1|display_options|offset"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|page_1|display_options|pager"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|page_1|display_options|tab_options"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.display|page_1|display_options|use_pager"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.is_cacheable"]["DELETED"] = TRUE;
  $overrides["views_view.location_table.view_php"]["DELETED"] = TRUE;
  $overrides["views_view.media_default.display|default|display_options|exposed_form|options"]["DELETED"] = TRUE;
  $overrides["views_view.media_default.display|default|display_options|fields|filename|link_to_file"]["DELETED"] = TRUE;
  $overrides["views_view.panopoly_database_search.display|default|display_options|fields|body|alter"]["DELETED"] = TRUE;
  $overrides["views_view.panopoly_database_search.display|default|display_options|fields|body|settings|trim_length"] = 300;
  $overrides["views_view.panopoly_database_search.display|default|display_options|fields|field_featured_image|delta_first_last"] = TRUE;
  $overrides["views_view.panopoly_database_search.display|default|display_options|fields|field_featured_image|delta_limit"] = 10;
  $overrides["views_view.panopoly_database_search.display|default|display_options|fields|title|element_type"]["DELETED"] = TRUE;
  $overrides["views_view.panopoly_database_search.display|search_database_results|display_options|allow|use_pager"] = 'use_pager';
  $overrides["views_view.taxonomy_term.display|default|display_options|access|perm"]["DELETED"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth_modifier|exception|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth_modifier|specify_validation"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|break_phrase"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|exception|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|specify_validation"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.user_location_table.changed"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|access_options"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|cache"] = array(
    'type' => 'none',
  );
  $overrides["views_view.user_location_table.display|default|display_options|defaults"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|exposed_form"] = array(
    'type' => 'basic',
  );
  $overrides["views_view.user_location_table.display|default|display_options|fields|city|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|city|label"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|city|override"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|city|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|country|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|country|label"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|country|override"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|country|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|country|style"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|name|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|name|label"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|name|link_to_user"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|name|override"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|name|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|postal_code|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|postal_code|label"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|postal_code|override"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|postal_code|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|province|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|province|label"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|province|override"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|province|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|province|style"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|street|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|street|label"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|street|override"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|street|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|fields|street|style"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|filter_groups"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|filters|lid|exposed"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|filters|lid|expose|label"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|filters|lid|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|filters|lid|value"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|filters|status|exposed"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|filters|status|expose|label"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|filters|status|operator"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|filters|status|relationship"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|items_per_page"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|offset"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|pager|options"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|row_options"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|row_plugin"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|style_options|order"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|style_options|override"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|style_options|sticky"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.user_location_table.display|default|display_options|use_pager"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|page_1|display_options|items_per_page"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|page_1|display_options|offset"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|page_1|display_options|pager"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|page_1|display_options|tab_options"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.display|page_1|display_options|use_pager"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.is_cacheable"]["DELETED"] = TRUE;
  $overrides["views_view.user_location_table.view_php"]["DELETED"] = TRUE;
  $overrides["views_view.webform_submissions.display|default|display_options|fields|delete_submission|label"]["DELETED"] = TRUE;
  $overrides["views_view.webform_submissions.display|default|display_options|fields|edit_submission|label"]["DELETED"] = TRUE;

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.panopoly_html_text.preferences|add_to_summaries"] = FALSE;
  $overrides["wysiwyg.panopoly_html_text.settings|apply_source_formatting"] = 0;
  $overrides["wysiwyg.panopoly_html_text.settings|css_classes"] = '';
  $overrides["wysiwyg.panopoly_html_text.settings|preformatted"] = 0;
  $overrides["wysiwyg.panopoly_html_text.settings|theme"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.editor"] = 'ckeditor';
  $overrides["wysiwyg.panopoly_wysiwyg_text.preferences|add_to_summaries"] = 0;
  $overrides["wysiwyg.panopoly_wysiwyg_text.preferences|show_toggle"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.preferences|version"] = '3.6.3.7474';
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|apply_source_formatting"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|block_formats"] = 'p,address,pre,h2,h3,h4,h5,h6,div';
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|captionfilter"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Anchor"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|BGColor"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Blockquote"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Bold"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|BulletedList"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Font"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|FontSize"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|HorizontalRule"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Image"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Indent"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Italic"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|JustifyBlock"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|JustifyCenter"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|JustifyLeft"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|JustifyRight"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Link"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|NumberedList"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Outdent"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|PasteFromWord"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|RemoveFormat"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Source"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|SpecialChar"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Strike"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Styles"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Subscript"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Superscript"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Table"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|TextColor"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Underline"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Unlink"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|blockquote"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|bold"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|bullist"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|charmap"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|forecolor"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|formatselect"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|indent"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|italic"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|justifycenter"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|justifyfull"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|justifyleft"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|justifyright"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|numlist"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|outdent"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|redo"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|removeformat"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|strikethrough"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|underline"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|undo"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|unlink"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|drupal|break"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|fullscreen"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|linkit"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|paste"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|pdw"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|spellchecker"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|convert_fonts_to_spans"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|css_theme"] = 'csc';
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|default_toolbar_grouping"] = 0;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|forcePasteAsPlainText"] = 0;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|pasteFromWordNumberedHeadingToList"] = 0;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|pasteFromWordPromptCleanup"] = 0;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|pasteFromWordRemoveFontStyles"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|pasteFromWordRemoveStyles"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|paste_auto_cleanup_on_paste"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|preformatted"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|remove_linebreaks"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|resize_enabled"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|simple_source_formatting"] = 0;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|stylesSet"] = '';
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|theme_advanced_blockformats"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|theme_advanced_resizing"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|theme_advanced_statusbar_location"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|theme_advanced_styles"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|theme_advanced_toolbar_align"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|theme_advanced_toolbar_location"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|toolbarLocation"] = 'top';
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|verify_html"]["DELETED"] = TRUE;

 return $overrides;
}
