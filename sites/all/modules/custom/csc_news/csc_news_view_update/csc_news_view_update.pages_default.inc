<?php
/**
 * @file
 * csc_news_view_update.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function csc_news_view_update_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_all_page';
  $page->task = 'page';
  $page->admin_title = 'News All Page';
  $page->admin_description = '';
  $page->path = 'news/all';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_all_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'news_all_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'csc_3col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'fixed' => NULL,
      'fluid1' => NULL,
      'fluid2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '78b14753-63c7-4c83-a7ec-bcb079108178';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_news_all_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bceabf47-571b-4281-a817-ad928fb973c5';
  $pane->panel = 'fixed';
  $pane->type = 'main_menu';
  $pane->subtype = 'main_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bceabf47-571b-4281-a817-ad928fb973c5';
  $display->content['new-bceabf47-571b-4281-a817-ad928fb973c5'] = $pane;
  $display->panels['fixed'][0] = 'new-bceabf47-571b-4281-a817-ad928fb973c5';
  $pane = new stdClass();
  $pane->pid = 'new-03858bfc-9d03-4aa9-af34-86e45cae4f3c';
  $pane->panel = 'fluid1';
  $pane->type = 'views_panes';
  $pane->subtype = 'news-new_list_all';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'table',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '03858bfc-9d03-4aa9-af34-86e45cae4f3c';
  $display->content['new-03858bfc-9d03-4aa9-af34-86e45cae4f3c'] = $pane;
  $display->panels['fluid1'][0] = 'new-03858bfc-9d03-4aa9-af34-86e45cae4f3c';
  $pane = new stdClass();
  $pane->pid = 'new-71356547-218b-4da9-8760-d3630b19fa95';
  $pane->panel = 'fluid2';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'vuuid:2b769142-d4e0-4fb0-a194-9764c16a42ac';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '71356547-218b-4da9-8760-d3630b19fa95';
  $display->content['new-71356547-218b-4da9-8760-d3630b19fa95'] = $pane;
  $display->panels['fluid2'][0] = 'new-71356547-218b-4da9-8760-d3630b19fa95';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bceabf47-571b-4281-a817-ad928fb973c5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_all_page'] = $page;

  return $pages;

}
