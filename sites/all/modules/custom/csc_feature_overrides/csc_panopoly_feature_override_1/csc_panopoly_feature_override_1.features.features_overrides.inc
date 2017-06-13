<?php
/**
 * @file
 * csc_panopoly_feature_override_1.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function csc_panopoly_feature_override_1_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.node-panopoly_page-body.field_instance|widget|weight"] = 5;
  $overrides["field.node-panopoly_page-field_featured_categories.field_instance|widget|weight"] = 3;
  $overrides["field.node-panopoly_page-field_featured_image.field_config|cardinality"] = 10;
  $overrides["field.node-panopoly_page-field_featured_image.field_instance|description"] = 'At least 720x390 (ratio of width to height: 1.846 to 1)';
  $overrides["field.node-panopoly_page-field_featured_image.field_instance|settings|image_field_caption"] = 0;
  $overrides["field.node-panopoly_page-field_featured_image.field_instance|settings|min_resolution"] = '720x390';
  $overrides["field.node-panopoly_page-field_featured_image.field_instance|widget|module"] = 'media';
  $overrides["field.node-panopoly_page-field_featured_image.field_instance|widget|settings|allowed_schemes"] = array(
    'private' => 'private',
    'public' => 'public',
    'vimeo' => 0,
    'youtube' => 0,
  );
  $overrides["field.node-panopoly_page-field_featured_image.field_instance|widget|settings|allowed_types"] = array(
    'audio' => 0,
    'document' => 0,
    'image' => 'image',
    'video' => 0,
  );
  $overrides["field.node-panopoly_page-field_featured_image.field_instance|widget|settings|browser_plugins"] = array(
    'media_default--media_browser_1' => 0,
    'media_default--media_browser_my_files' => 0,
    'media_internet' => 0,
    'upload' => 0,
    'youtube' => 0,
  );
  $overrides["field.node-panopoly_page-field_featured_image.field_instance|widget|settings|preview_image_style"]["DELETED"] = TRUE;
  $overrides["field.node-panopoly_page-field_featured_image.field_instance|widget|type"] = 'media_generic';
  $overrides["field.node-panopoly_page-field_featured_image.field_instance|widget|weight"] = 2;
  $overrides["field.node-panopoly_page-field_featured_status.field_instance|widget|weight"] = 4;
  $overrides["field.taxonomy_term-panopoly_categories-field_featured_image.field_config|cardinality"] = 10;
  $overrides["field.taxonomy_term-panopoly_categories-field_featured_image.field_instance|settings|image_field_caption"] = 0;
  $overrides["field.taxonomy_term-panopoly_categories-field_featured_image.field_instance|widget|settings|imce_filefield_on"] = 0;
  $overrides["field.user-user-field_user_picture.field_instance|settings|image_field_caption"] = 0;
  $overrides["field.user-user-field_user_picture.field_instance|widget|settings|imce_filefield_on"] = 0;

  // Exported overrides for: field_base
  $overrides["field_base.field_basic_file_file.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.field_basic_file_text.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.field_basic_image_caption.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.field_basic_image_image.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.field_basic_spotlight_items.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.field_basic_table_table.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.field_basic_text_text.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.field_map_address.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.field_map_information.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.field_quick_links_links.cardinality"] = 5;
  $overrides["field_base.field_quick_links_links.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.field_video_file.foreign keys"]["DELETED"] = TRUE;

  // Exported overrides for: field_instance
  $overrides["field_instance.fieldable_panels_pane-basic_file-field_basic_file_file.widget|settings|imce_filefield_on"] = 0;
  $overrides["field_instance.fieldable_panels_pane-image-field_basic_image_image.settings|image_field_caption"] = 0;
  $overrides["field_instance.fieldable_panels_pane-image-field_basic_image_image.widget|settings|imce_filefield_on"] = 0;

  // Exported overrides for: file_display
  $overrides["file_display.video__default__media_vimeo_image.settings|image_style"] = 'panopoly_image_video';
  $overrides["file_display.video__default__media_vimeo_image.status"] = TRUE;
  $overrides["file_display.video__default__media_vimeo_video.settings|protocol"] = '//';
  $overrides["file_display.video__default__media_vimeo_video.status"] = TRUE;
  $overrides["file_display.video__default__media_youtube_image.settings|image_style"] = 'panopoly_image_video';
  $overrides["file_display.video__default__media_youtube_image.status"] = TRUE;
  $overrides["file_display.video__default__media_youtube_video.settings|modestbranding"] = 1;
  $overrides["file_display.video__default__media_youtube_video.status"] = TRUE;
  $overrides["file_display.video__media_large__media_vimeo_image.status"] = TRUE;
  $overrides["file_display.video__media_large__media_vimeo_video.status"] = TRUE;
  $overrides["file_display.video__media_large__media_youtube_image.status"] = TRUE;
  $overrides["file_display.video__media_large__media_youtube_video.status"] = TRUE;
  $overrides["file_display.video__media_original__media_vimeo_image.status"] = TRUE;
  $overrides["file_display.video__media_original__media_vimeo_video.status"] = TRUE;
  $overrides["file_display.video__media_original__media_youtube_image.status"] = TRUE;
  $overrides["file_display.video__media_original__media_youtube_video.status"] = TRUE;
  $overrides["file_display.video__media_preview__media_vimeo_image.status"] = TRUE;
  $overrides["file_display.video__media_preview__media_youtube_image.status"] = TRUE;
  $overrides["file_display.video__preview__media_vimeo_image.settings|image_style"] = 'panopoly_image_thumbnail';
  $overrides["file_display.video__preview__media_vimeo_image.status"] = TRUE;
  $overrides["file_display.video__preview__media_youtube_image.settings|image_style"] = 'panopoly_image_thumbnail';
  $overrides["file_display.video__preview__media_youtube_image.status"] = TRUE;
  $overrides["file_display.video__teaser__media_vimeo_image.settings|image_style"] = 'panopoly_image_video';
  $overrides["file_display.video__teaser__media_vimeo_image.status"] = TRUE;
  $overrides["file_display.video__teaser__media_vimeo_video.status"] = TRUE;
  $overrides["file_display.video__teaser__media_youtube_image.settings|image_style"] = 'panopoly_image_video';
  $overrides["file_display.video__teaser__media_youtube_image.status"] = TRUE;
  $overrides["file_display.video__teaser__media_youtube_video.status"] = TRUE;

  // Exported overrides for: file_type
  $overrides["file_type.audio.disabled"] = FALSE;
  $overrides["file_type.audio.mimetypes"]["DELETED"] = TRUE;
  $overrides["file_type.audio.streams"]["DELETED"] = TRUE;
  $overrides["file_type.document.disabled"] = FALSE;
  $overrides["file_type.document.mimetypes"]["DELETED"] = TRUE;
  $overrides["file_type.document.streams"]["DELETED"] = TRUE;
  $overrides["file_type.image.disabled"] = FALSE;
  $overrides["file_type.image.mimetypes"]["DELETED"] = TRUE;
  $overrides["file_type.image.streams"]["DELETED"] = TRUE;
  $overrides["file_type.video.disabled"] = FALSE;
  $overrides["file_type.video.mimetypes"]["DELETED"] = TRUE;
  $overrides["file_type.video.streams"]["DELETED"] = TRUE;

  // Exported overrides for: filter
  $overrides["filter.panopoly_html_text.filters|wysiwyg|settings|valid_elements"] = 'a[!href|target<_blank|title|style],
  div[style|class|align<center?justify?left?right],
  br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
  span[style],p[style|class],
  h1,h2,h3,h4,h5,h6,
  img[!src|title|alt|style|width|height|class|hspace|vspace],
  @[style]';
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|settings|valid_elements"] = 'a[!href|target<_blank|title|style],
  div[style|class|align<center?justify?left?right],
  br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
  span[style],p[style|class],
  h1,h2,h3,h4,h5,h6,
  img[!src|title|alt|style|width|height|class|hspace|vspace],
  @[style]';

  // Exported overrides for: image
  $overrides["image.apps_featured_screenshot.label"] = 'apps_featured_screenshot';
  $overrides["image.apps_logo.label"] = 'apps_logo';
  $overrides["image.apps_logo_small.label"] = 'apps_logo_small';
  $overrides["image.apps_screenshot.label"] = 'apps_screenshot';
  $overrides["image.linkit_thumb.label"] = 'linkit_thumb';
  $overrides["image.media_thumbnail.label"] = 'media_thumbnail';
  $overrides["image.panopoly_image_featured.effects|0|data|width"] = 720;
  $overrides["image.panopoly_image_featured.effects|1|data|height"] = 390;
  $overrides["image.panopoly_image_featured.effects|1|data|width"] = 720;
  $overrides["image.panopoly_image_featured.label"] = 'panopoly_image_featured';
  $overrides["image.panopoly_image_full.effects|0"]["DELETED"] = TRUE;
  $overrides["image.panopoly_image_full.label"] = 'panopoly_image_full';
  $overrides["image.panopoly_image_half.label"] = 'panopoly_image_half';
  $overrides["image.panopoly_image_quarter.label"] = 'panopoly_image_quarter';
  $overrides["image.panopoly_image_spotlight.label"] = 'panopoly_image_spotlight';
  $overrides["image.panopoly_image_square.label"] = 'panopoly_image_square';
  $overrides["image.panopoly_image_thumbnail.label"] = 'panopoly_image_thumbnail';
  $overrides["image.panopoly_image_video.label"] = 'panopoly_image_video';

  // Exported overrides for: linkit_profiles
  $overrides["linkit_profiles.content_editors.data|entity:file|bundles|document"] = 'document';
  $overrides["linkit_profiles.content_editors.data|entity:file|reverse_menu_trail"] = 0;
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
  $overrides["linkit_profiles.content_editors.data|entity:node|reverse_menu_trail"] = 0;
  $overrides["linkit_profiles.content_editors.data|entity:taxonomy_term|bundles"] = array(
    'panopoly_categories' => 0,
    'tags' => 0,
    'newsletter' => 0,
  );
  $overrides["linkit_profiles.content_editors.data|entity:taxonomy_term|group_by_bundle"] = 0;
  $overrides["linkit_profiles.content_editors.data|entity:taxonomy_term|reverse_menu_trail"] = 0;
  $overrides["linkit_profiles.content_editors.data|entity:user|reverse_menu_trail"] = 0;

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-10|configuration|context"] = 'argument_node_edit_1';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-10|configuration|override_title"] = 0;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-10|subtype"] = 'node_form_publishing';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-10|type"] = 'node_form_publishing';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-11"] = (object) array(
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
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-12"] = (object) array(
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
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-5|configuration|override_title"] = 0;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-5|configuration|override_title_text"] = '';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-5|subtype"] = 'node:field_thumbnail';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-6|configuration|context"] = 'argument_node_edit_1';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-6|configuration|formatter"] = '';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-6|configuration|label"] = '';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-6|configuration|override_title"] = 0;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-6|configuration|override_title_text"] = '';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-6|subtype"] = 'node:field_vertical';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-6|type"] = 'entity_form_field';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-7|configuration|formatter"] = '';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-7|configuration|label"] = '';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-7|configuration|override_title"] = 1;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-7|configuration|override_title_text"] = 'Content category';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-7|subtype"] = 'node:field_featured_categories';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-7|type"] = 'entity_form_field';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-8|configuration|context"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-8|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-8|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-8|subtype"] = 'panelizer_form_default';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-8|type"] = 'panelizer_form_default';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-9|configuration|context"] = 'argument_node_edit_1';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-9|subtype"] = 'node_form_menu';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-9|type"] = 'node_form_menu';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|7"] = 'new-11';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|8"] = 'new-12';

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-10"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-11"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-5|configuration|form"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-5|configuration|override_prompt"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-5|configuration|path"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-5|configuration|path_type"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-5|configuration|prompt"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-5|configuration|type"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-5|panel"] = 'fixed';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-5|subtype"] = 'main_menu';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-5|type"] = 'main_menu';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-6|configuration|context"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-6|configuration|form"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-6|configuration|override_prompt"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-6|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-6|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-6|configuration|path"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-6|configuration|path_type"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-6|configuration|prompt"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-6|configuration|type"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-6|panel"] = 'fixed';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-6|subtype"] = 'csc_latest_news';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-6|type"] = 'csc_latest_news';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|context"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|exposed"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|fields_override"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|items_per_page"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|pager_id"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|use_pager"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|view_mode"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|view_settings"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|configuration|widget_title"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|panel"] = 'fixed';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|subtype"] = 'csc_newsletter';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-7|type"] = 'csc_newsletter';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-8|configuration|context"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-8|configuration|delta"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-8|configuration|form"] = 'advanced';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-8|configuration|override_prompt"] = FALSE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-8|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-8|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-8|configuration|path"] = '';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-8|configuration|path_type"] = 'default';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-8|configuration|prompt"] = '';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-8|configuration|type"] = 'node';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-8|panel"] = 'fluid1';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-8|subtype"] = 'search_current';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-8|type"] = 'search_current';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|content|new-9"] = (object) array(
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
    );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|layout"] = 'csc_3col';
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panel_settings|style_settings|fixed"] = NULL;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panel_settings|style_settings|fluid1"] = NULL;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panel_settings|style_settings|fluid2"] = NULL;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panels|contentmain"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panels|fixed"] = array(
    0 => 'new-5',
    1 => 'new-6',
    2 => 'new-7',
  );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panels|fluid1"] = array(
    0 => 'new-8',
    1 => 'new-9',
    2 => 'new-10',
  );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panels|fluid2"] = array(
    0 => 'new-11',
  );
  $overrides["page_manager_pages.panopoly_search.default_handlers|page_panopoly_search_panel_context_3|conf|display|panels|sidebar"]["DELETED"] = TRUE;

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-10"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-1|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-1|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-1|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-1|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-1|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-1|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-1|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-1|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-1|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-1|panel"] = 'fixed';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-1|subtype"] = 'main_menu';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-1|type"] = 'main_menu';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-2|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-2|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-2|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-2|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-2|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-2|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-2|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-2|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-2|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-2|panel"] = 'fixed';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-2|subtype"] = 'csc_latest_news';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-2|type"] = 'csc_latest_news';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-3|configuration|build_mode"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-3|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-3|configuration|identifier"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-3|configuration|link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-3|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-3|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-3|configuration|tweets_to_show"] = 5;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-3|configuration|username"] = 'wiifm';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-3|css|css_class"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-3|panel"] = 'fixed';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-3|subtype"] = 'csc_newsletter';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-3|type"] = 'csc_newsletter';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|class"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|id"] = '';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|link"] = 0;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|configuration|markup"] = 'none';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|panel"] = 'fluid1';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|position"] = 0;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|subtype"] = 'node_title';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-4|type"] = 'node_title';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5|configuration|admin_title"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5|configuration|depth"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5|configuration|expanded"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5|configuration|follow"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5|configuration|level"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5|configuration|menu_name"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5|configuration|parent_mlid"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5|configuration|sort"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5|configuration|title_link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5|panel"] = 'fluid1';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5|position"] = 1;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5|subtype"] = 'csc_teaser';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-5|type"] = 'csc_teaser';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-6"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-7"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-8"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|content|new-9"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|layout"] = 'csc_3col';
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panel_settings|style_settings|fixed"] = NULL;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panel_settings|style_settings|fluid1"] = NULL;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panel_settings|style_settings|fluid2"] = NULL;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|contentmain"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|fixed"] = array(
    0 => 'new-1',
    1 => 'new-2',
    2 => 'new-3',
  );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|fluid1"] = array(
    0 => 'new-4',
    1 => 'new-5',
    2 => 'new-6',
  );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|fluid2"] = array(
    0 => 'new-7',
    1 => 'new-8',
    2 => 'new-9',
    3 => 'new-10',
  );
  $overrides["panelizer_defaults.node:panopoly_page:default.display|panels|sidebar"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default.display|title_pane"] = 0;
  $overrides["panelizer_defaults.node:panopoly_page:default.pipeline"] = 'standard';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-11"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-12"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-13"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-14"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-6"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-7"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-8"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-9"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain|0"] = 'new-11';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain|1"] = 'new-12';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain|2"] = 'new-13';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain|3"] = 'new-14';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-10"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-11"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-12"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-13"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-15"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-16"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-17"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|content|new-18"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|panels|contentmain|0"] = 'new-15';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|panels|contentmain|1"] = 'new-16';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|panels|contentmain|2"] = 'new-17';
  $overrides["panelizer_defaults.node:panopoly_page:default:featured.display|panels|contentmain|3"] = 'new-18';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-14"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-15"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-16"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-19"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-20"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|content|new-21"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|panels|contentmain|0"] = 'new-19';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|panels|contentmain|1"] = 'new-20';
  $overrides["panelizer_defaults.node:panopoly_page:default:teaser.display|panels|contentmain|2"] = 'new-21';
  $overrides["panelizer_defaults.user:user:default.pipeline"] = 'standard';

  // Exported overrides for: variable
  $overrides["variable.additional_settings__active_tab_panopoly_page.value"] = 'edit-workflow';
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|extra_fields|form|path|weight"] = 1;
  $overrides["variable.node_options_panopoly_page.value|2"] = 'revision';
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|search_result"] = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );

  // Exported overrides for: views_view
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|exception|title_enable"] = TRUE;
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|specify_validation"] = TRUE;
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|exception|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|specify_validation"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.backlinks.display|block|display_options|arguments|nid|specify_validation"] = TRUE;
  $overrides["views_view.backlinks.display|block|display_options|arguments|nid|title_enable"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|arguments|nid|specify_validation"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|arguments|nid|title_enable"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|empty|text|empty"]["DELETED"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.frontpage.display|default|display_options|row_options"]["DELETED"] = TRUE;
  $overrides["views_view.frontpage.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|exception|title_enable"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|glossary"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|specify_validation"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|summary_options|inline"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|transform_dash"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|inherit_arguments"] = FALSE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|exception|title_enable"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|glossary"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|specify_validation"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|transform_dash"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|fields|name|link_to_user"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|style_options|override"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|style_options|sticky"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.media_default.display|default|display_options|fields|filename|link_to_file"]["DELETED"] = TRUE;
  $overrides["views_view.panopoly_database_search.display|default|display_options|fields|field_featured_image|delta_first_last"] = TRUE;
  $overrides["views_view.panopoly_database_search.display|default|display_options|fields|field_featured_image|delta_offset"] = 0;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth_modifier|exception|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth_modifier|specify_validation"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|break_phrase"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|exception|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|specify_validation"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|use_more_always"] = FALSE;

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.panopoly_wysiwyg_text.editor"] = 'ckeditor';
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|apply_source_formatting"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|block_formats"] = 'p,address,pre,h2,h3,h4,h5,h6,div';
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|captionfilter"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|BidiLtr"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|BidiRtl"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Blockquote"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Bold"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|BulletedList"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Copy"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Cut"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Font"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|FontSize"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|HorizontalRule"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Indent"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Italic"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|JustifyBlock"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|JustifyCenter"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|JustifyLeft"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|JustifyRight"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Link"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Maximize"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|NumberedList"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Outdent"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|PasteFromWord"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Redo"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Source"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|SpecialChar"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Strike"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Styles"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Subscript"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Superscript"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Table"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Underline"] = 1;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|default|Undo"] = 1;
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
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|paste"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|pdw"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|buttons|spellchecker"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|paste_auto_cleanup_on_paste"] = 0;
  $overrides["wysiwyg.panopoly_wysiwyg_text.settings|show_toggle"] = 1;

 return $overrides;
}
