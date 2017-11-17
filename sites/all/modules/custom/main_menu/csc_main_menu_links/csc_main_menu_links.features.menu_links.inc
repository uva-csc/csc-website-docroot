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

  // Exported menu link: main-menu_advisory-board:node/312.
  $menu_links['main-menu_advisory-board:node/312'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/312',
    'router_path' => 'node/%',
    'link_title' => 'Advisory Board',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_advisory-board:node/312',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_people:<front>',
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
  // Exported menu link: main-menu_collections:node/681.
  $menu_links['main-menu_collections:node/681'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/681',
    'router_path' => 'node/%',
    'link_title' => 'Collections',
    'options' => array(
      'identifier' => 'main-menu_collections:node/681',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_resources:<front>',
  );
  // Exported menu link: main-menu_community:node/675.
  $menu_links['main-menu_community:node/675'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/675',
    'router_path' => 'node/%',
    'link_title' => 'Community',
    'options' => array(
      'identifier' => 'main-menu_community:node/675',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
    'parent_identifier' => 'main-menu_programs:<front>',
  );
  // Exported menu link: main-menu_contemplative-council:node/215.
  $menu_links['main-menu_contemplative-council:node/215'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/215',
    'router_path' => 'node/%',
    'link_title' => 'Contemplative Council',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_contemplative-council:node/215',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_people:<front>',
  );
  // Exported menu link: main-menu_culture--wisdom:node/25.
  $menu_links['main-menu_culture--wisdom:node/25'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Culture & Wisdom',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_culture--wisdom:node/25',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_mission:node/3',
  );
  // Exported menu link: main-menu_design--place:node/20.
  $menu_links['main-menu_design--place:node/20'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Design & Place',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_design--place:node/20',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_mission:node/3',
  );
  // Exported menu link: main-menu_drop-in-classes:node/673.
  $menu_links['main-menu_drop-in-classes:node/673'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/673',
    'router_path' => 'node/%',
    'link_title' => 'Drop-In Classes',
    'options' => array(
      'identifier' => 'main-menu_drop-in-classes:node/673',
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
  // Exported menu link: main-menu_education--learning:node/21.
  $menu_links['main-menu_education--learning:node/21'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'Education & Learning',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_education--learning:node/21',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_mission:node/3',
  );
  // Exported menu link: main-menu_engagement--projects:list/engagement.
  $menu_links['main-menu_engagement--projects:list/engagement'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'list/engagement',
    'router_path' => 'list/%',
    'link_title' => 'Engagement  Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_engagement--projects:list/engagement',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:<front>',
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
  // Exported menu link: main-menu_executive-circle:node/312.
  $menu_links['main-menu_executive-circle:node/312'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/312',
    'router_path' => 'node/%',
    'link_title' => 'Executive Circle',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_executive-circle:node/312',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_people:<front>',
  );
  // Exported menu link: main-menu_external-partners:node/686.
  $menu_links['main-menu_external-partners:node/686'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/686',
    'router_path' => 'node/%',
    'link_title' => 'External Partners',
    'options' => array(
      'identifier' => 'main-menu_external-partners:node/686',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_people:<front>',
  );
  // Exported menu link: main-menu_faculty:node/677.
  $menu_links['main-menu_faculty:node/677'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/677',
    'router_path' => 'node/%',
    'link_title' => 'Faculty',
    'options' => array(
      'identifier' => 'main-menu_faculty:node/677',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'main-menu_programs:<front>',
  );
  // Exported menu link: main-menu_health--well-being:node/22.
  $menu_links['main-menu_health--well-being:node/22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Health & Well-Being',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_health--well-being:node/22',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_mission:node/3',
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
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Exported menu link: main-menu_learning-projects:list/learning.
  $menu_links['main-menu_learning-projects:list/learning'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'list/learning',
    'router_path' => 'list/%',
    'link_title' => 'Learning Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_learning-projects:list/learning',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:<front>',
  );
  // Exported menu link: main-menu_mission-statement:node/264.
  $menu_links['main-menu_mission-statement:node/264'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/264',
    'router_path' => 'node/%',
    'link_title' => 'Mission Statement',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_mission-statement:node/264',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_mission:node/3',
  );
  // Exported menu link: main-menu_mission:node/3.
  $menu_links['main-menu_mission:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Mission',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_mission:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
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
  // Exported menu link: main-menu_people:<front>.
  $menu_links['main-menu_people:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_people:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_professions--performance:node/26.
  $menu_links['main-menu_professions--performance:node/26'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'Professions & Performance',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_professions--performance:node/26',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_mission:node/3',
  );
  // Exported menu link: main-menu_programs:<front>.
  $menu_links['main-menu_programs:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Programs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_programs:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_projects:<front>.
  $menu_links['main-menu_projects:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_projects:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_research-projects:list/research.
  $menu_links['main-menu_research-projects:list/research'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'list/research',
    'router_path' => 'list/%',
    'link_title' => 'Research Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_research-projects:list/research',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:<front>',
  );
  // Exported menu link: main-menu_resources:<front>.
  $menu_links['main-menu_resources:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_resources:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
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
  // Exported menu link: main-menu_staff:node/674.
  $menu_links['main-menu_staff:node/674'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/674',
    'router_path' => 'node/%',
    'link_title' => 'Staff',
    'options' => array(
      'identifier' => 'main-menu_staff:node/674',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
    'parent_identifier' => 'main-menu_programs:<front>',
  );
  // Exported menu link: main-menu_students:node/676.
  $menu_links['main-menu_students:node/676'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/676',
    'router_path' => 'node/%',
    'link_title' => 'Students',
    'options' => array(
      'identifier' => 'main-menu_students:node/676',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_identifier' => 'main-menu_programs:<front>',
  );
  // Exported menu link: main-menu_team:node/412.
  $menu_links['main-menu_team:node/412'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/412',
    'router_path' => 'node/%',
    'link_title' => 'Team',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_team:node/412',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_people:<front>',
  );
  // Exported menu link: main-menu_uva-affiliates:node/683.
  $menu_links['main-menu_uva-affiliates:node/683'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/683',
    'router_path' => 'node/%',
    'link_title' => 'UVa Affiliates',
    'options' => array(
      'identifier' => 'main-menu_uva-affiliates:node/683',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_people:<front>',
  );
  // Exported menu link: main-menu_uva-courses:node/672.
  $menu_links['main-menu_uva-courses:node/672'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/672',
    'router_path' => 'node/%',
    'link_title' => 'UVa Courses',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_uva-courses:node/672',
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
  // Exported menu link: main-menu_workshops:node/671.
  $menu_links['main-menu_workshops:node/671'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/671',
    'router_path' => 'node/%',
    'link_title' => 'Workshops',
    'options' => array(
      'identifier' => 'main-menu_workshops:node/671',
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
  t('Advisory Board');
  t('Classes');
  t('Collections');
  t('Community');
  t('Contemplative Council');
  t('Culture & Wisdom');
  t('Design & Place');
  t('Drop-In Classes');
  t('Education & Learning');
  t('Engagement  Projects');
  t('Events');
  t('Events and News');
  t('Executive Circle');
  t('External Partners');
  t('Faculty');
  t('Health & Well-Being');
  t('Initiatives');
  t('Learning Projects');
  t('Mission');
  t('Mission Statement');
  t('News');
  t('Past Events');
  t('People');
  t('Professions & Performance');
  t('Programs');
  t('Projects');
  t('Research Projects');
  t('Resources');
  t('Retreats');
  t('Staff');
  t('Students');
  t('Team');
  t('UVa Affiliates');
  t('UVa Courses');
  t('Workshops');

  return $menu_links;
}
