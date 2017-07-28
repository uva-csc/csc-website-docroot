<?php
/**
 * @file
 * csc_main_menu_links.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function csc_main_menu_links_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_activities:http://no.link.
  $menu_links['main-menu_activities:http://no.link'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://no.link',
    'router_path' => '',
    'link_title' => 'Activities',
    'options' => array(
      'attributes' => array(
        'title' => 'What we do',
      ),
      'identifier' => 'main-menu_activities:http://no.link',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_classes:<front>.
  $menu_links['main-menu_classes:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Classes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_classes:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_community:node/15.
  $menu_links['main-menu_community:node/15'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(
        'title' => 'People & Organizations',
      ),
      'identifier' => 'main-menu_community:node/15',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contexts:node/3.
  $menu_links['main-menu_contexts:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Contexts',
    'options' => array(
      'attributes' => array(
        'title' => 'Where it\'s done',
      ),
      'identifier' => 'main-menu_contexts:node/3',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_drop-in-classes:node/654.
  $menu_links['main-menu_drop-in-classes:node/654'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/654',
    'router_path' => 'node/%',
    'link_title' => 'Drop-In Classes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_drop-in-classes:node/654',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_classes:<front>',
  );
  // Exported menu link: main-menu_events-and-news:<front>.
  $menu_links['main-menu_events-and-news:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Events and News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_events-and-news:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_events:events/all/future.
  $menu_links['main-menu_events:events/all/future'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events/all/future',
    'router_path' => 'events/%',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_events:events/all/future',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_events-and-news:<front>',
  );
  // Exported menu link: main-menu_initiatives:http://no.link.
  $menu_links['main-menu_initiatives:http://no.link'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://no.link',
    'router_path' => '',
    'link_title' => 'Initiatives',
    'options' => array(
      'attributes' => array(
        'title' => 'Larger frameworks',
      ),
      'identifier' => 'main-menu_initiatives:http://no.link',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_news:node/647.
  $menu_links['main-menu_news:node/647'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/647',
    'router_path' => 'node/%',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_news:node/647',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_events-and-news:<front>',
  );
  // Exported menu link: main-menu_opportunities:node/24.
  $menu_links['main-menu_opportunities:node/24'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Opportunities',
    'options' => array(
      'attributes' => array(
        'title' => 'Get involved',
      ),
      'identifier' => 'main-menu_opportunities:node/24',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_past-events:events/all/past.
  $menu_links['main-menu_past-events:events/all/past'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events/all/past',
    'router_path' => 'events/%',
    'link_title' => 'Past Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_past-events:events/all/past',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_events-and-news:<front>',
  );
  // Exported menu link: main-menu_retreats:list/class/retreats.
  $menu_links['main-menu_retreats:list/class/retreats'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'list/class/retreats',
    'router_path' => 'list/%',
    'link_title' => 'Retreats',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_retreats:list/class/retreats',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_classes:<front>',
  );
  // Exported menu link: main-menu_uva-courses:node/652.
  $menu_links['main-menu_uva-courses:node/652'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/652',
    'router_path' => 'node/%',
    'link_title' => 'UVa Courses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_uva-courses:node/652',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_classes:<front>',
  );
  // Exported menu link: main-menu_workshops:node/653.
  $menu_links['main-menu_workshops:node/653'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/653',
    'router_path' => 'node/%',
    'link_title' => 'Workshops',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_workshops:node/653',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_classes:<front>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Activities');
  t('Classes');
  t('Community');
  t('Contexts');
  t('Drop-In Classes');
  t('Events');
  t('Events and News');
  t('Initiatives');
  t('News');
  t('Opportunities');
  t('Past Events');
  t('Retreats');
  t('UVa Courses');
  t('Workshops');

  return $menu_links;
}
