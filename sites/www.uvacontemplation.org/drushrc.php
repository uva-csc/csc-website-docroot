<?php 


$options['db_type'] = 'mysql';
$options['db_host'] = 'drupal.shanti.virginia.edu';
$options['db_port'] = '3306';
$options['db_passwd'] = 'MgyTGxWWYn';
$options['db_name'] = 'uvacontemplati_0';
$options['db_user'] = 'uvacontemplati_0';
$options['packages'] = array (
  'platforms' => 
  array (
    'drupal' => 
    array (
      'short_name' => 'drupal',
      'version' => '7.38',
      'description' => 'This platform is running Drupal 7.38',
    ),
  ),
  'profiles' => 
  array (
    'panopoly' => 
    array (
      'name' => 'panopoly',
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/panopoly.profile',
      'project' => 'panopoly',
      'info' => 
      array (
        'name' => 'Panopoly',
        'distribution_name' => 'Panopoly',
        'description' => 'A magical framework for building Drupal products based on the Panels module',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'menu',
          1 => 'image',
          2 => 'list',
          3 => 'number',
          4 => 'options',
          5 => 'path',
          6 => 'taxonomy',
          7 => 'search',
          8 => 'shortcut',
          9 => 'field',
          10 => 'field_ui',
          11 => 'file',
          12 => 'dblog',
          13 => 'update',
          14 => 'panopoly_core',
          15 => 'panopoly_images',
          16 => 'panopoly_theme',
          17 => 'panopoly_magic',
          18 => 'panopoly_widgets',
          19 => 'panopoly_admin',
          20 => 'panopoly_users',
          21 => 'panopoly_pages',
          22 => 'panopoly_search',
          23 => 'panopoly_wysiwyg',
          24 => 'navbar',
          25 => 'backports',
          26 => 'simplified_menu_admin',
          27 => 'save_draft',
          28 => 'module_filter',
          29 => 'date_popup_authored',
          30 => 'devel',
          31 => 'uuid',
        ),
        'version' => '7.x-1.0-rc4',
        'project' => 'panopoly',
        'datestamp' => '1366645521',
        'php' => '5.2.4',
        'languages' => 
        array (
          0 => 'en',
        ),
      ),
      'version' => '7.x-1.0-rc4',
      'status' => 1,
    ),
  ),
  'modules' => 
  array (
    'aaa_update_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/update/tests/aaa_update_test.module',
      'name' => 'aaa_update_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AAA Update test',
        'description' => 'Support module for update module testing.',
        'package' => 'Testing',
        'core' => '7.x',
        'hidden' => true,
        'version' => '7.38',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'actions_loop_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/actions_loop_test.module',
      'name' => 'actions_loop_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Actions loop test',
        'description' => 'Support module for action loop testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'actions_permissions' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/views_bulk_operations/actions_permissions.module',
      'name' => 'actions_permissions',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Actions permissions (VBO)',
        'description' => 'Provides permission-based access control for actions. Used by Views Bulk Operations.',
        'package' => 'Administration',
        'core' => '7.x',
        'version' => '7.x-3.1',
        'project' => 'views_bulk_operations',
        'datestamp' => '1354500015',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'views_bulk_operations',
      'version' => '7.x-3.1',
    ),
    'admin' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/admin/admin.module',
      'name' => 'admin',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '1',
      'info' => 
      array (
        'name' => 'Admin',
        'description' => 'UI helpers for Drupal admins and managers.',
        'package' => 'Administration',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'admin.admin.inc',
          1 => 'admin.install',
          2 => 'admin.module',
          3 => 'includes/admin.devel.inc',
          4 => 'includes/admin.theme.inc',
          5 => 'theme/admin-panes.tpl.php',
          6 => 'theme/admin-toolbar.tpl.php',
          7 => 'theme/theme.inc',
        ),
        'version' => '7.x-2.0-beta3',
        'project' => 'admin',
        'datestamp' => '1292541646',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'admin',
      'version' => '7.x-2.0-beta3',
    ),
    'admin_devel' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/admin_menu/admin_devel/admin_devel.module',
      'name' => 'admin_devel',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Administration Development tools',
        'description' => 'Administration and debugging functionality for developers and site builders.',
        'package' => 'Administration',
        'core' => '7.x',
        'scripts' => 
        array (
          0 => 'admin_devel.js',
        ),
        'version' => '7.x-3.0-rc4',
        'project' => 'admin_menu',
        'datestamp' => '1359651687',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'admin_menu',
      'version' => '7.x-3.0-rc4',
    ),
    'admin_menu' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/admin_menu/admin_menu.module',
      'name' => 'admin_menu',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7304',
      'weight' => '100',
      'info' => 
      array (
        'name' => 'Administration menu',
        'description' => 'Provides a dropdown menu to most administrative tasks and other common destinations (to users with the proper permissions).',
        'package' => 'Administration',
        'core' => '7.x',
        'configure' => 'admin/config/administration/admin_menu',
        'dependencies' => 
        array (
          0 => 'system (>7.10)',
        ),
        'files' => 
        array (
          0 => 'tests/admin_menu.test',
        ),
        'version' => '7.x-3.0-rc4',
        'project' => 'admin_menu',
        'datestamp' => '1359651687',
        'php' => '5.2.4',
      ),
      'project' => 'admin_menu',
      'version' => '7.x-3.0-rc4',
    ),
    'admin_menu_toolbar' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/admin_menu/admin_menu_toolbar/admin_menu_toolbar.module',
      'name' => 'admin_menu_toolbar',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '6300',
      'weight' => '101',
      'info' => 
      array (
        'name' => 'Administration menu Toolbar style',
        'description' => 'A better Toolbar.',
        'package' => 'Administration',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'admin_menu',
        ),
        'version' => '7.x-3.0-rc4',
        'project' => 'admin_menu',
        'datestamp' => '1359651687',
        'php' => '5.2.4',
      ),
      'project' => 'admin_menu',
      'version' => '7.x-3.0-rc4',
    ),
    'admin_views' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/admin_views/admin_views.module',
      'name' => 'admin_views',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '12',
      'info' => 
      array (
        'name' => 'Administration views',
        'description' => 'Replaces all system object management pages in Drupal core with real views.',
        'package' => 'Administration',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'views',
          1 => 'views_bulk_operations',
        ),
        'files' => 
        array (
          0 => 'plugins/views_plugin_display_system.inc',
          1 => 'plugins/views_plugin_access_menu.inc',
          2 => 'tests/admin_views.test',
        ),
        'version' => '7.x-1.1',
        'project' => 'admin_views',
        'datestamp' => '1355764856',
        'php' => '5.2.4',
      ),
      'project' => 'admin_views',
      'version' => '7.x-1.1',
    ),
    'admin_views_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/admin_views/tests/admin_views_test/admin_views_test.module',
      'name' => 'admin_views_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Administration views test',
        'description' => 'Administration views test module',
        'core' => '7.x',
        'package' => 'administration',
        'hidden' => true,
        'version' => '7.x-1.1',
        'project' => 'admin_views',
        'datestamp' => '1355764856',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'admin_views',
      'version' => '7.x-1.1',
    ),
    'advanced_help' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/advanced_help/advanced_help.module',
      'name' => 'advanced_help',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Advanced help',
        'description' => 'Allow advanced help and documentation.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'advanced_help.module',
          1 => 'advanced_help.install',
        ),
        'version' => '7.x-1.0',
        'project' => 'advanced_help',
        'datestamp' => '1321022730',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'advanced_help',
      'version' => '7.x-1.0',
    ),
    'aggregator' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/aggregator/aggregator.module',
      'name' => 'aggregator',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Aggregator',
        'description' => 'Aggregates syndicated content (RSS, RDF, and Atom feeds).',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'aggregator.test',
        ),
        'configure' => 'admin/config/services/aggregator/settings',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'aggregator.css',
          ),
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'aggregator_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/aggregator/tests/aggregator_test.module',
      'name' => 'aggregator_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Aggregator module tests',
        'description' => 'Support module for aggregator related testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'ajax_forms_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/ajax_forms_test.module',
      'name' => 'ajax_forms_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AJAX form test mock module',
        'description' => 'Test for AJAX form calls.',
        'core' => '7.x',
        'package' => 'Testing',
        'version' => '7.38',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'ajax_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/ajax_test.module',
      'name' => 'ajax_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AJAX Test',
        'description' => 'Support module for AJAX framework tests.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'apps' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/apps/apps.module',
      'name' => 'apps',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Apps',
        'description' => 'Provides Interface for Install Apps from A drupal app server',
        'package' => 'Distribution Management',
        'version' => '7.x-1.0-beta7',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'update',
        ),
        'files' => 
        array (
          0 => 'apps.module',
          1 => 'apps.updater.inc',
          2 => 'apps.installer.inc',
          3 => 'apps.test',
        ),
        'project' => 'apps',
        'datestamp' => '1345171003',
        'php' => '5.2.4',
      ),
      'project' => 'apps',
      'version' => '7.x-1.0-beta7',
    ),
    'auto_related' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/auto_related/auto_related.module',
      'name' => 'auto_related',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Auto related nodes',
        'description' => 'Make related nodes works boht ways',
        'dependencies' => 
        array (
          0 => 'entityreference',
        ),
        'version' => '7.x-1.0',
        'core' => '7.x',
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'backports' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/backports/backports.module',
      'name' => 'backports',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Backports',
        'description' => 'UI and other backports from Drupal 8.',
        'core' => '7.x',
        'version' => '7.x-1.0-alpha1',
        'project' => 'backports',
        'datestamp' => '1315886201',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'backports',
      'version' => '7.x-1.0-alpha1',
    ),
    'batch_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/batch_test.module',
      'name' => 'batch_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Batch API test',
        'description' => 'Support module for Batch API tests.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'bbb_update_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/update/tests/bbb_update_test.module',
      'name' => 'bbb_update_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'BBB Update test',
        'description' => 'Support module for update module testing.',
        'package' => 'Testing',
        'core' => '7.x',
        'hidden' => true,
        'version' => '7.38',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'block' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/block/block.module',
      'name' => 'block',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7009',
      'weight' => '-5',
      'info' => 
      array (
        'name' => 'Block',
        'description' => 'Controls the visual building blocks a page is constructed with. Blocks are boxes of content rendered into an area, or region, of a web page.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'block.test',
        ),
        'configure' => 'admin/structure/block',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'block_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/block/tests/block_test.module',
      'name' => 'block_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Block test',
        'description' => 'Provides test blocks.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'blog' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/blog/blog.module',
      'name' => 'blog',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Blog',
        'description' => 'Enables multi-user blogs.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'blog.test',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'book' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/book/book.module',
      'name' => 'book',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Book',
        'description' => 'Allows users to create and organize related content in an outline.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'book.test',
        ),
        'configure' => 'admin/content/book/settings',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'book.css',
          ),
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'bottom_links' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/bottom_links/bottom_links.module',
      'name' => 'bottom_links',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Bottom Links',
        'description' => 'Links to show at bottom of page',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'bulk_export' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/ctools/bulk_export/bulk_export.module',
      'name' => 'bulk_export',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Bulk Export',
        'description' => 'Performs bulk exporting of data objects known about by Chaos tools.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'package' => 'Chaos tool suite',
        'version' => '7.x-1.3',
        'project' => 'ctools',
        'datestamp' => '1365013512',
        'php' => '5.2.4',
      ),
      'project' => 'ctools',
      'version' => '7.x-1.3',
    ),
    'calendar' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/calendar/calendar.module',
      'name' => 'calendar',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Calendar',
        'description' => 'Views plugin to display views containing dates as Calendars.',
        'dependencies' => 
        array (
          0 => 'views',
          1 => 'date_api',
          2 => 'date_views',
        ),
        'package' => 'Date/Time',
        'core' => '7.x',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'css/calendar_multiday.css',
          ),
        ),
        'files' => 
        array (
          0 => 'calendar.install',
          1 => 'calendar.module',
          2 => 'includes/calendar.views.inc',
          3 => 'includes/calendar_plugin_style.inc',
          4 => 'includes/calendar_plugin_row.inc',
          5 => 'includes/calendar.views_template.inc',
          6 => 'theme/theme.inc',
          7 => 'theme/calendar-style.tpl.php',
        ),
        'version' => '7.x-3.4',
        'project' => 'calendar',
        'datestamp' => '1337429753',
        'php' => '5.2.4',
      ),
      'project' => 'calendar',
      'version' => '7.x-3.4',
    ),
    'caption_filter' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/caption_filter/caption_filter.module',
      'name' => 'caption_filter',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7100',
      'weight' => '20',
      'info' => 
      array (
        'name' => 'Caption Filter',
        'description' => 'Filter to parse [caption] tags and allow image alignment.',
        'core' => '7.x',
        'package' => 'Input filters',
        'version' => '7.x-1.2',
        'project' => 'caption_filter',
        'datestamp' => '1321824637',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'caption_filter',
      'version' => '7.x-1.2',
    ),
    'ccc_update_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/update/tests/ccc_update_test.module',
      'name' => 'ccc_update_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CCC Update test',
        'description' => 'Support module for update module testing.',
        'package' => 'Testing',
        'core' => '7.x',
        'hidden' => true,
        'version' => '7.38',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'color' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/color/color.module',
      'name' => 'color',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Color',
        'description' => 'Allows administrators to change the color scheme of compatible themes.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'color.test',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'comment' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/comment/comment.module',
      'name' => 'comment',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Comment',
        'description' => 'Allows users to comment on and discuss published content.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'text',
        ),
        'files' => 
        array (
          0 => 'comment.module',
          1 => 'comment.test',
        ),
        'configure' => 'admin/content/comment',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'comment.css',
          ),
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'common_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/common_test.module',
      'name' => 'common_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Common Test',
        'description' => 'Support module for Common tests.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'common_test.css',
          ),
          'print' => 
          array (
            0 => 'common_test.print.css',
          ),
        ),
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'common_test_cron_helper' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/common_test_cron_helper.module',
      'name' => 'common_test_cron_helper',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Common Test Cron Helper',
        'description' => 'Helper module for CronRunTestCase::testCronExceptions().',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'contact' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/contact/contact.module',
      'name' => 'contact',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Contact',
        'description' => 'Enables the use of both personal and site-wide contact forms.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'contact.test',
        ),
        'configure' => 'admin/structure/contact',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'content_list' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/content_list/content_list.module',
      'name' => 'content_list',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Content List',
        'description' => 'Custom module to list site content',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => NULL,
    ),
    'contextual' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/contextual/contextual.module',
      'name' => 'contextual',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Contextual links',
        'description' => 'Provides contextual links to perform actions related to elements on a page.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'contextual.test',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'cron_queue_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/system/tests/cron_queue_test.module',
      'name' => 'cron_queue_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Cron Queue test',
        'description' => 'Support module for the cron queue runner.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'csc_calendar' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_calendar/csc_calendar.module',
      'name' => 'csc_calendar',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Calendar',
        'description' => 'Show calendar of Events and Instructions',
        'package' => 'CSC',
        'dependencies' => 
        array (
          0 => 'block',
        ),
        'version' => '7.x-1.0',
        'core' => '7.x',
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_class_date' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_class_date/csc_class_date.module',
      'name' => 'csc_class_date',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Class Date',
        'description' => 'Date panel for classes',
        'package' => 'CSC',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_column' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_column/csc_column.module',
      'name' => 'csc_column',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Right column',
        'description' => 'Right column to show dynamic content',
        'package' => 'CSC',
        'dependencies' => 
        array (
          0 => 'block',
        ),
        'version' => '7.x-1.0',
        'core' => '7.x',
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_ctype' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_ctype/csc_ctype.module',
      'name' => 'csc_ctype',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Node Content Type',
        'description' => 'Show node\'s content type',
        'package' => 'CSC',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_event_date' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_event_date/csc_event_date.module',
      'name' => 'csc_event_date',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Event Date',
        'description' => 'Date panel for events to hide time if TBA field is clicked on node',
        'package' => 'CSC',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_event_map' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_event_map/csc_event_map.module',
      'name' => 'csc_event_map',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Event Map',
        'description' => 'Shows Event Map',
        'package' => 'CSC',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_first_image' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_first_image/csc_first_image.module',
      'name' => 'csc_first_image',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Frist Image',
        'description' => 'Returns first image available from a View node list',
        'package' => 'CSC',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_general' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_general/csc_general.module',
      'name' => 'csc_general',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '101',
      'info' => 
      array (
        'name' => 'CSC General Functions',
        'description' => 'General and common functions for CSC website',
        'package' => 'CSC',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_grants_buttons' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod',
      'name' => 'csc_grants_buttons',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'dependencies' => 
        array (
        ),
        'description' => '',
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => NULL,
    ),
    'csc_important_dates' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod',
      'name' => 'csc_important_dates',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'dependencies' => 
        array (
        ),
        'description' => '',
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => NULL,
    ),
    'csc_isotope' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_isotope/csc_isotope.module',
      'name' => 'csc_isotope',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Isotope',
        'description' => 'Latest Features and News using Isotope',
        'package' => 'CSC',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_latest_news' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_latest_news/csc_latest_news.module',
      'name' => 'csc_latest_news',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Latest News',
        'description' => 'Shows latest news on widget',
        'package' => 'CSC',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_lists' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_lists/csc_lists.module',
      'name' => 'csc_lists',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Lists Views',
        'description' => 'Custom display for several lists',
        'package' => 'CSC',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'scripts' => 
        array (
          0 => 'js/csc-lists.js',
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_newsletter' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_newsletter/csc_newsletter.module',
      'name' => 'csc_newsletter',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Newsletter',
        'description' => 'Provides a widget for newsletter subscription',
        'package' => 'CSC',
        'dependencies' => 
        array (
          0 => 'block',
          1 => 'simplenews',
        ),
        'version' => '7.x-1.0',
        'core' => '7.x',
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_news_title' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_news_title/csc_news_title.module',
      'name' => 'csc_news_title',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC News Title',
        'description' => 'Show Author\'s name for News of type blog',
        'package' => 'CSC',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_next_event' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_next_event/csc_next_event.module',
      'name' => 'csc_next_event',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Next Event',
        'description' => 'Shows next event widget',
        'package' => 'CSC',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_node_image' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_node_image/csc_node_image.module',
      'name' => 'csc_node_image',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Node Image',
        'description' => 'Show image(s)',
        'package' => 'CSC',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_readblock' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_readblock/csc_readblock.module',
      'name' => 'csc_readblock',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Read Block',
        'description' => 'Read content from different blocks and show them as widgets',
        'package' => 'CSC',
        'dependencies' => 
        array (
          0 => 'block',
        ),
        'version' => '7.x-1.0',
        'core' => '7.x',
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_related' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_related/csc_related.module',
      'name' => 'csc_related',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Related',
        'description' => 'Widget to show related content for current node',
        'package' => 'CSC',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_role' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_role/csc_role.module',
      'name' => 'csc_role',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Role',
        'description' => 'Shows CSC personnel depending on their role',
        'package' => 'CSC',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_teaser' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_teaser/csc_teaser.module',
      'name' => 'csc_teaser',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Teaser',
        'description' => 'Shows node teaser and node body on pop-up window',
        'package' => 'CSC',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'csc_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/csc_test/csc_test.module',
      'name' => 'csc_test',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Test Widget',
        'description' => 'To test custom code',
        'package' => 'CSC',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'ctools' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/ctools/ctools.module',
      'name' => 'ctools',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '6008',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Chaos tools',
        'description' => 'A library of helpful tools by Merlin of Chaos.',
        'core' => '7.x',
        'package' => 'Chaos tool suite',
        'files' => 
        array (
          0 => 'includes/context.inc',
          1 => 'includes/math-expr.inc',
          2 => 'includes/stylizer.inc',
        ),
        'version' => '7.x-1.3',
        'project' => 'ctools',
        'datestamp' => '1365013512',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'ctools',
      'version' => '7.x-1.3',
    ),
    'ctools_access_ruleset' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/ctools/ctools_access_ruleset/ctools_access_ruleset.module',
      'name' => 'ctools_access_ruleset',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Custom rulesets',
        'description' => 'Create custom, exportable, reusable access rulesets for applications like Panels.',
        'core' => '7.x',
        'package' => 'Chaos tool suite',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'version' => '7.x-1.3',
        'project' => 'ctools',
        'datestamp' => '1365013512',
        'php' => '5.2.4',
      ),
      'project' => 'ctools',
      'version' => '7.x-1.3',
    ),
    'ctools_ajax_sample' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/ctools/ctools_ajax_sample/ctools_ajax_sample.module',
      'name' => 'ctools_ajax_sample',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Chaos Tools (CTools) AJAX Example',
        'description' => 'Shows how to use the power of Chaos AJAX.',
        'package' => 'Chaos tool suite',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'core' => '7.x',
        'version' => '7.x-1.3',
        'project' => 'ctools',
        'datestamp' => '1365013512',
        'php' => '5.2.4',
      ),
      'project' => 'ctools',
      'version' => '7.x-1.3',
    ),
    'ctools_custom_content' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/ctools/ctools_custom_content/ctools_custom_content.module',
      'name' => 'ctools_custom_content',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Custom content panes',
        'description' => 'Create custom, exportable, reusable content panes for applications like Panels.',
        'core' => '7.x',
        'package' => 'Chaos tool suite',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'version' => '7.x-1.3',
        'project' => 'ctools',
        'datestamp' => '1365013512',
        'php' => '5.2.4',
      ),
      'project' => 'ctools',
      'version' => '7.x-1.3',
    ),
    'ctools_export_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/ctools/tests/ctools_export_test/ctools_export_test.module',
      'name' => 'ctools_export_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CTools export test',
        'description' => 'CTools export test module',
        'core' => '7.x',
        'package' => 'Chaos tool suite',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'hidden' => true,
        'files' => 
        array (
          0 => 'ctools_export.test',
        ),
        'version' => '7.x-1.3',
        'project' => 'ctools',
        'datestamp' => '1365013512',
        'php' => '5.2.4',
      ),
      'project' => 'ctools',
      'version' => '7.x-1.3',
    ),
    'ctools_plugin_example' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/ctools/ctools_plugin_example/ctools_plugin_example.module',
      'name' => 'ctools_plugin_example',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Chaos Tools (CTools) Plugin Example',
        'description' => 'Shows how an external module can provide ctools plugins (for Panels, etc.).',
        'package' => 'Chaos tool suite',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'panels',
          2 => 'page_manager',
          3 => 'advanced_help',
        ),
        'core' => '7.x',
        'version' => '7.x-1.3',
        'project' => 'ctools',
        'datestamp' => '1365013512',
        'php' => '5.2.4',
      ),
      'project' => 'ctools',
      'version' => '7.x-1.3',
    ),
    'ctools_plugin_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/ctools/tests/ctools_plugin_test.module',
      'name' => 'ctools_plugin_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Chaos tools plugins test',
        'description' => 'Provides hooks for testing ctools plugins.',
        'package' => 'Chaos tool suite',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'files' => 
        array (
          0 => 'ctools.plugins.test',
          1 => 'object_cache.test',
          2 => 'css.test',
          3 => 'context.test',
          4 => 'math_expression.test',
          5 => 'math_expression_stack.test',
        ),
        'hidden' => true,
        'version' => '7.x-1.3',
        'project' => 'ctools',
        'datestamp' => '1365013512',
        'php' => '5.2.4',
      ),
      'project' => 'ctools',
      'version' => '7.x-1.3',
    ),
    'current_search' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/facetapi/contrib/current_search/current_search.module',
      'name' => 'current_search',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Current Search Blocks',
        'description' => 'Provides an interface for creating blocks containing information about the current search.',
        'dependencies' => 
        array (
          0 => 'facetapi',
        ),
        'package' => 'Search Toolkit',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'plugins/current_search/item.inc',
          1 => 'plugins/current_search/item_active.inc',
          2 => 'plugins/current_search/item_group.inc',
          3 => 'plugins/current_search/item_text.inc',
          4 => 'tests/current_search.test',
        ),
        'configure' => 'admin/config/search/current_search',
        'version' => '7.x-1.3',
        'project' => 'facetapi',
        'datestamp' => '1364861711',
        'php' => '5.2.4',
      ),
      'project' => 'facetapi',
      'version' => '7.x-1.3',
    ),
    'dashboard' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/dashboard/dashboard.module',
      'name' => 'dashboard',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Dashboard',
        'description' => 'Provides a dashboard page in the administrative interface for organizing administrative tasks and tracking information within your site.',
        'core' => '7.x',
        'package' => 'Core',
        'version' => '7.38',
        'files' => 
        array (
          0 => 'dashboard.test',
        ),
        'dependencies' => 
        array (
          0 => 'block',
        ),
        'configure' => 'admin/dashboard/customize',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'database_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/database_test.module',
      'name' => 'database_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Database Test',
        'description' => 'Support module for Database layer tests.',
        'core' => '7.x',
        'package' => 'Testing',
        'version' => '7.38',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'date' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/date/date.module',
      'name' => 'date',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7004',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date',
        'description' => 'Makes date/time fields available.',
        'dependencies' => 
        array (
          0 => 'date_api',
        ),
        'package' => 'Date/Time',
        'core' => '7.x',
        'php' => '5.2',
        'files' => 
        array (
          0 => 'tests/date_api.test',
          1 => 'tests/date.test',
          2 => 'tests/date_field.test',
          3 => 'tests/date_validation.test',
          4 => 'tests/date_timezone.test',
        ),
        'version' => '7.x-2.6',
        'project' => 'date',
        'datestamp' => '1344850024',
      ),
      'project' => 'date',
      'version' => '7.x-2.6',
    ),
    'date_all_day' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/date/date_all_day/date_all_day.module',
      'name' => 'date_all_day',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date All Day',
        'description' => 'Adds \'All Day\' functionality to date fields, including an \'All Day\' theme and \'All Day\' checkboxes for the Date select and Date popup widgets.',
        'dependencies' => 
        array (
          0 => 'date_api',
          1 => 'date',
        ),
        'package' => 'Date/Time',
        'core' => '7.x',
        'version' => '7.x-2.6',
        'project' => 'date',
        'datestamp' => '1344850024',
        'php' => '5.2.4',
      ),
      'project' => 'date',
      'version' => '7.x-2.6',
    ),
    'date_api' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/date/date_api/date_api.module',
      'name' => 'date_api',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date API',
        'description' => 'A Date API that can be used by other modules.',
        'package' => 'Date/Time',
        'core' => '7.x',
        'php' => '5.2',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'date.css',
          ),
        ),
        'files' => 
        array (
          0 => 'date_api.module',
          1 => 'date_api_sql.inc',
        ),
        'version' => '7.x-2.6',
        'project' => 'date',
        'datestamp' => '1344850024',
        'dependencies' => 
        array (
        ),
      ),
      'project' => 'date',
      'version' => '7.x-2.6',
    ),
    'date_context' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/date/date_context/date_context.module',
      'name' => 'date_context',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date Context',
        'description' => 'Adds an option to the Context module to set a context condition based on the value of a date field.',
        'package' => 'Date/Time',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'date',
          1 => 'context',
        ),
        'files' => 
        array (
          0 => 'date_context.module',
          1 => 'plugins/date_context_date_condition.inc',
        ),
        'version' => '7.x-2.6',
        'project' => 'date',
        'datestamp' => '1344850024',
        'php' => '5.2.4',
      ),
      'project' => 'date',
      'version' => '7.x-2.6',
    ),
    'date_migrate' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/date/date_migrate/date_migrate.module',
      'name' => 'date_migrate',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date Migration',
        'description' => 'Provides support for importing into date fields with the Migrate module.',
        'core' => '7.x',
        'package' => 'Date/Time',
        'dependencies' => 
        array (
          0 => 'migrate',
          1 => 'date',
        ),
        'files' => 
        array (
          0 => 'date.migrate.inc',
          1 => 'date_migrate.test',
        ),
        'version' => '7.x-2.6',
        'project' => 'date',
        'datestamp' => '1344850024',
        'php' => '5.2.4',
      ),
      'project' => 'date',
      'version' => '7.x-2.6',
    ),
    'date_migrate_example' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/date/date_migrate/date_migrate_example/date_migrate_example.module',
      'name' => 'date_migrate_example',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'date',
          1 => 'date_repeat',
          2 => 'date_repeat_field',
          3 => 'date_migrate',
          4 => 'features',
          5 => 'migrate',
        ),
        'description' => 'Examples of migrating with the Date module',
        'features' => 
        array (
          'field' => 
          array (
            0 => 'node-date_migrate_example-body',
            1 => 'node-date_migrate_example-field_date',
            2 => 'node-date_migrate_example-field_date_range',
            3 => 'node-date_migrate_example-field_date_repeat',
            4 => 'node-date_migrate_example-field_datestamp',
            5 => 'node-date_migrate_example-field_datestamp_range',
            6 => 'node-date_migrate_example-field_datetime',
            7 => 'node-date_migrate_example-field_datetime_range',
          ),
          'node' => 
          array (
            0 => 'date_migrate_example',
          ),
        ),
        'files' => 
        array (
          0 => 'date_migrate_example.migrate.inc',
        ),
        'name' => 'Date Migration Example',
        'package' => 'Features',
        'project' => 'date',
        'version' => '7.x-2.6',
        'datestamp' => '1344850024',
        'php' => '5.2.4',
      ),
      'project' => 'date',
      'version' => '7.x-2.6',
    ),
    'date_popup' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/date/date_popup/date_popup.module',
      'name' => 'date_popup',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date Popup',
        'description' => 'Enables jquery popup calendars and time entry widgets for selecting dates and times.',
        'dependencies' => 
        array (
          0 => 'date_api',
        ),
        'package' => 'Date/Time',
        'core' => '7.x',
        'configure' => 'admin/config/date/date_popup',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'themes/datepicker.1.7.css',
          ),
        ),
        'version' => '7.x-2.6',
        'project' => 'date',
        'datestamp' => '1344850024',
        'php' => '5.2.4',
      ),
      'project' => 'date',
      'version' => '7.x-2.6',
    ),
    'date_popup_authored' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/date_popup_authored/date_popup_authored.module',
      'name' => 'date_popup_authored',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date Popup Authored',
        'description' => 'Provides a datepicker for the \'Authored on\' field on node forms.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'date_popup_authored.test',
        ),
        'package' => 'Date/Time',
        'dependencies' => 
        array (
          0 => 'date_popup',
        ),
        'version' => '7.x-1.1',
        'project' => 'date_popup_authored',
        'datestamp' => '1333178146',
        'php' => '5.2.4',
      ),
      'project' => 'date_popup_authored',
      'version' => '7.x-1.1',
    ),
    'date_repeat' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/date/date_repeat/date_repeat.module',
      'name' => 'date_repeat',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '1',
      'info' => 
      array (
        'name' => 'Date Repeat API',
        'description' => 'A Date Repeat API to calculate repeating dates and times from iCal rules.',
        'dependencies' => 
        array (
          0 => 'date_api',
        ),
        'package' => 'Date/Time',
        'core' => '7.x',
        'php' => '5.2',
        'files' => 
        array (
          0 => 'tests/date_repeat.test',
          1 => 'tests/date_repeat_form.test',
        ),
        'version' => '7.x-2.6',
        'project' => 'date',
        'datestamp' => '1344850024',
      ),
      'project' => 'date',
      'version' => '7.x-2.6',
    ),
    'date_repeat_field' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/date/date_repeat_field/date_repeat_field.module',
      'name' => 'date_repeat_field',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date Repeat Field',
        'description' => 'Creates the option of Repeating date fields and manages Date fields that use the Date Repeat API.',
        'dependencies' => 
        array (
          0 => 'date_api',
          1 => 'date',
          2 => 'date_repeat',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'date_repeat_field.css',
          ),
        ),
        'package' => 'Date/Time',
        'core' => '7.x',
        'version' => '7.x-2.6',
        'project' => 'date',
        'datestamp' => '1344850024',
        'php' => '5.2.4',
      ),
      'project' => 'date',
      'version' => '7.x-2.6',
    ),
    'date_tools' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/date/date_tools/date_tools.module',
      'name' => 'date_tools',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date Tools',
        'description' => 'Tools to import and auto-create dates and calendars.',
        'dependencies' => 
        array (
          0 => 'date',
        ),
        'package' => 'Date/Time',
        'core' => '7.x',
        'configure' => 'admin/config/date/tools',
        'files' => 
        array (
          0 => 'tests/date_tools.test',
        ),
        'version' => '7.x-2.6',
        'project' => 'date',
        'datestamp' => '1344850024',
        'php' => '5.2.4',
      ),
      'project' => 'date',
      'version' => '7.x-2.6',
    ),
    'date_views' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/date/date_views/date_views.module',
      'name' => 'date_views',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date Views',
        'description' => 'Views integration for date fields and date functionality.',
        'package' => 'Date/Time',
        'dependencies' => 
        array (
          0 => 'date_api',
          1 => 'views',
        ),
        'core' => '7.x',
        'php' => '5.2',
        'files' => 
        array (
          0 => 'includes/date_views_argument_handler.inc',
          1 => 'includes/date_views_argument_handler_simple.inc',
          2 => 'includes/date_views_filter_handler.inc',
          3 => 'includes/date_views_filter_handler_simple.inc',
          4 => 'includes/date_views.views_default.inc',
          5 => 'includes/date_views.views.inc',
          6 => 'includes/date_views_plugin_pager.inc',
        ),
        'version' => '7.x-2.6',
        'project' => 'date',
        'datestamp' => '1344850024',
      ),
      'project' => 'date',
      'version' => '7.x-2.6',
    ),
    'dblog' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/dblog/dblog.module',
      'name' => 'dblog',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '1',
      'schema_version' => '7002',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Database logging',
        'description' => 'Logs and records system events to the database.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'dblog.test',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'defaultconfig' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/defaultconfig/defaultconfig.module',
      'name' => 'defaultconfig',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7101',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Default config',
        'description' => 'Use features as default configuration without having to deal with overriden features.',
        'core' => '7.x',
        'package' => 'configuration',
        'dependencies' => 
        array (
          0 => 'features',
        ),
        'version' => '7.x-1.0-alpha9',
        'project' => 'defaultconfig',
        'datestamp' => '1352143559',
        'php' => '5.2.4',
      ),
      'project' => 'defaultconfig',
      'version' => '7.x-1.0-alpha9',
    ),
    'defaultcontent' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/defaultcontent/defaultcontent.module',
      'name' => 'defaultcontent',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Default Content',
        'description' => 'Allows import/export of default content.',
        'core' => '7.x',
        'package' => 'Features',
        'dependencies' => 
        array (
          0 => 'features',
          1 => 'ctools',
          2 => 'menu',
        ),
        'version' => '7.x-1.0-alpha9',
        'project' => 'defaultcontent',
        'datestamp' => '1359180370',
        'php' => '5.2.4',
      ),
      'project' => 'defaultcontent',
      'version' => '7.x-1.0-alpha9',
    ),
    'devel' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/devel/devel.module',
      'name' => 'devel',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '88',
      'info' => 
      array (
        'name' => 'Devel',
        'description' => 'Various blocks, pages, and functions for developers.',
        'package' => 'Development',
        'core' => '7.x',
        'configure' => 'admin/config/development/devel',
        'tags' => 
        array (
          0 => 'developer',
        ),
        'files' => 
        array (
          0 => 'devel.test',
          1 => 'devel.mail.inc',
        ),
        'version' => '7.x-1.5',
        'project' => 'devel',
        'datestamp' => '1398963366',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'devel',
      'version' => '7.x-1.5',
    ),
    'devel_generate' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/devel/devel_generate/devel_generate.module',
      'name' => 'devel_generate',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Devel generate',
        'description' => 'Generate dummy users, nodes, and taxonomy terms.',
        'package' => 'Development',
        'core' => '7.x',
        'tags' => 
        array (
          0 => 'developer',
        ),
        'configure' => 'admin/config/development/generate',
        'files' => 
        array (
          0 => 'devel_generate.test',
        ),
        'version' => '7.x-1.5',
        'project' => 'devel',
        'datestamp' => '1398963366',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'devel',
      'version' => '7.x-1.5',
    ),
    'devel_node_access' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/devel/devel_node_access.module',
      'name' => 'devel_node_access',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Devel node access',
        'description' => 'Developer blocks and page illustrating relevant node_access records.',
        'package' => 'Development',
        'dependencies' => 
        array (
          0 => 'menu',
        ),
        'core' => '7.x',
        'configure' => 'admin/config/development/devel',
        'tags' => 
        array (
          0 => 'developer',
        ),
        'version' => '7.x-1.5',
        'project' => 'devel',
        'datestamp' => '1398963366',
        'php' => '5.2.4',
      ),
      'project' => 'devel',
      'version' => '7.x-1.5',
    ),
    'drupal_autoload_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/drupal_autoload_test/drupal_autoload_test.module',
      'name' => 'drupal_autoload_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Drupal code registry test',
        'description' => 'Support module for testing the code registry.',
        'files' => 
        array (
          0 => 'drupal_autoload_test_interface.inc',
          1 => 'drupal_autoload_test_class.inc',
        ),
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'drupal_system_listing_compatible_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/drupal_system_listing_compatible_test/drupal_system_listing_compatible_test.module',
      'name' => 'drupal_system_listing_compatible_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Drupal system listing compatible test',
        'description' => 'Support module for testing the drupal_system_listing function.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'drupal_system_listing_incompatible_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/drupal_system_listing_incompatible_test/drupal_system_listing_incompatible_test.module',
      'name' => 'drupal_system_listing_incompatible_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Drupal system listing incompatible test',
        'description' => 'Support module for testing the drupal_system_listing function.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'email' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/email/email.module',
      'name' => 'email',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Email',
        'description' => 'Defines an email field type.',
        'core' => '7.x',
        'package' => 'Fields',
        'files' => 
        array (
          0 => 'email.migrate.inc',
        ),
        'version' => '7.x-1.3',
        'project' => 'email',
        'datestamp' => '1397134155',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'email',
      'version' => '7.x-1.3',
    ),
    'entity' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/entity/entity.module',
      'name' => 'entity',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity API',
        'description' => 'Enables modules to work with any entity type and to provide entities.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'entity.features.inc',
          1 => 'entity.i18n.inc',
          2 => 'entity.info.inc',
          3 => 'entity.rules.inc',
          4 => 'entity.test',
          5 => 'includes/entity.inc',
          6 => 'includes/entity.controller.inc',
          7 => 'includes/entity.ui.inc',
          8 => 'includes/entity.wrapper.inc',
          9 => 'views/entity.views.inc',
          10 => 'views/handlers/entity_views_field_handler_helper.inc',
          11 => 'views/handlers/entity_views_handler_area_entity.inc',
          12 => 'views/handlers/entity_views_handler_field_boolean.inc',
          13 => 'views/handlers/entity_views_handler_field_date.inc',
          14 => 'views/handlers/entity_views_handler_field_duration.inc',
          15 => 'views/handlers/entity_views_handler_field_entity.inc',
          16 => 'views/handlers/entity_views_handler_field_field.inc',
          17 => 'views/handlers/entity_views_handler_field_numeric.inc',
          18 => 'views/handlers/entity_views_handler_field_options.inc',
          19 => 'views/handlers/entity_views_handler_field_text.inc',
          20 => 'views/handlers/entity_views_handler_field_uri.inc',
          21 => 'views/handlers/entity_views_handler_relationship_by_bundle.inc',
          22 => 'views/handlers/entity_views_handler_relationship.inc',
          23 => 'views/plugins/entity_views_plugin_row_entity_view.inc',
        ),
        'version' => '7.x-1.2',
        'project' => 'entity',
        'datestamp' => '1376493705',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'entity',
      'version' => '7.x-1.2',
    ),
    'entityreference' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/entityreference/entityreference.module',
      'name' => 'entityreference',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity Reference',
        'description' => 'Provides a field that can reference other entities.',
        'core' => '7.x',
        'package' => 'Fields',
        'dependencies' => 
        array (
          0 => 'entity',
          1 => 'ctools',
        ),
        'files' => 
        array (
          0 => 'entityreference.migrate.inc',
          1 => 'plugins/selection/abstract.inc',
          2 => 'plugins/selection/views.inc',
          3 => 'plugins/behavior/abstract.inc',
          4 => 'views/entityreference_plugin_display.inc',
          5 => 'views/entityreference_plugin_style.inc',
          6 => 'views/entityreference_plugin_row_fields.inc',
          7 => 'tests/entityreference.handlers.test',
          8 => 'tests/entityreference.taxonomy.test',
          9 => 'tests/entityreference.admin.test',
        ),
        'version' => '7.x-1.0',
        'project' => 'entityreference',
        'datestamp' => '1353230808',
        'php' => '5.2.4',
      ),
      'project' => 'entityreference',
      'version' => '7.x-1.0',
    ),
    'entityreference_behavior_example' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/entityreference/examples/entityreference_behavior_example/entityreference_behavior_example.module',
      'name' => 'entityreference_behavior_example',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity Reference Behavior Example',
        'description' => 'Provides some example code for implementing Entity Reference behaviors.',
        'core' => '7.x',
        'package' => 'Fields',
        'dependencies' => 
        array (
          0 => 'entityreference',
        ),
        'version' => '7.x-1.0',
        'project' => 'entityreference',
        'datestamp' => '1353230808',
        'php' => '5.2.4',
      ),
      'project' => 'entityreference',
      'version' => '7.x-1.0',
    ),
    'entity_cache_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/entity_cache_test.module',
      'name' => 'entity_cache_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity cache test',
        'description' => 'Support module for testing entity cache.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'entity_cache_test_dependency',
        ),
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'entity_cache_test_dependency' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/entity_cache_test_dependency.module',
      'name' => 'entity_cache_test_dependency',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity cache test dependency',
        'description' => 'Support dependency module for testing entity cache.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'entity_crud_hook_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/entity_crud_hook_test.module',
      'name' => 'entity_crud_hook_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity CRUD Hooks Test',
        'description' => 'Support module for CRUD hook tests.',
        'core' => '7.x',
        'package' => 'Testing',
        'version' => '7.38',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'entity_feature' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/entity/tests/entity_feature.module',
      'name' => 'entity_feature',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity feature module',
        'description' => 'Provides some entities in code.',
        'version' => '7.x-1.2',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'entity_feature.module',
        ),
        'dependencies' => 
        array (
          0 => 'entity_test',
        ),
        'hidden' => true,
        'project' => 'entity',
        'datestamp' => '1376493705',
        'php' => '5.2.4',
      ),
      'project' => 'entity',
      'version' => '7.x-1.2',
    ),
    'entity_query_access_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/entity_query_access_test.module',
      'name' => 'entity_query_access_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity query access test',
        'description' => 'Support module for checking entity query results.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'entity_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/entity/tests/entity_test.module',
      'name' => 'entity_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity CRUD test module',
        'description' => 'Provides entity types based upon the CRUD API.',
        'version' => '7.x-1.2',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'entity_test.module',
          1 => 'entity_test.install',
        ),
        'dependencies' => 
        array (
          0 => 'entity',
        ),
        'hidden' => true,
        'project' => 'entity',
        'datestamp' => '1376493705',
        'php' => '5.2.4',
      ),
      'project' => 'entity',
      'version' => '7.x-1.2',
    ),
    'entity_test_i18n' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/entity/tests/entity_test_i18n.module',
      'name' => 'entity_test_i18n',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity-test type translation',
        'description' => 'Allows translating entity-test types.',
        'dependencies' => 
        array (
          0 => 'entity_test',
          1 => 'i18n_string',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'hidden' => true,
        'version' => '7.x-1.2',
        'project' => 'entity',
        'datestamp' => '1376493705',
        'php' => '5.2.4',
      ),
      'project' => 'entity',
      'version' => '7.x-1.2',
    ),
    'entity_token' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/entity/entity_token.module',
      'name' => 'entity_token',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity tokens',
        'description' => 'Provides token replacements for all properties that have no tokens and are known to the entity API.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'entity_token.tokens.inc',
          1 => 'entity_token.module',
        ),
        'dependencies' => 
        array (
          0 => 'entity',
        ),
        'version' => '7.x-1.2',
        'project' => 'entity',
        'datestamp' => '1376493705',
        'php' => '5.2.4',
      ),
      'project' => 'entity',
      'version' => '7.x-1.2',
    ),
    'error_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/error_test.module',
      'name' => 'error_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Error test',
        'description' => 'Support module for error and exception testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'examplemodule' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod',
      'name' => 'examplemodule',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'dependencies' => 
        array (
        ),
        'description' => '',
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => NULL,
    ),
    'facetapi' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/facetapi/facetapi.module',
      'name' => 'facetapi',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7103',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Facet API',
        'description' => 'An abstracted facet API that can be used by various search backends.',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'package' => 'Search Toolkit',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'plugins/facetapi/adapter.inc',
          1 => 'plugins/facetapi/dependency.inc',
          2 => 'plugins/facetapi/dependency_bundle.inc',
          3 => 'plugins/facetapi/dependency_role.inc',
          4 => 'plugins/facetapi/empty_behavior.inc',
          5 => 'plugins/facetapi/empty_behavior_text.inc',
          6 => 'plugins/facetapi/filter.inc',
          7 => 'plugins/facetapi/query_type.inc',
          8 => 'plugins/facetapi/url_processor.inc',
          9 => 'plugins/facetapi/url_processor_standard.inc',
          10 => 'plugins/facetapi/widget.inc',
          11 => 'plugins/facetapi/widget_links.inc',
          12 => 'tests/facetapi_test.plugins.inc',
          13 => 'tests/facetapi.test',
        ),
        'version' => '7.x-1.3',
        'project' => 'facetapi',
        'datestamp' => '1364861711',
        'php' => '5.2.4',
      ),
      'project' => 'facetapi',
      'version' => '7.x-1.3',
    ),
    'facetapi_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/facetapi/tests/facetapi_test.module',
      'name' => 'facetapi_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Facet API Test',
        'description' => 'Provides a test adapter and plugins.',
        'dependencies' => 
        array (
          0 => 'facetapi',
        ),
        'package' => 'Testing',
        'core' => '7.x',
        'hidden' => true,
        'version' => '7.x-1.3',
        'project' => 'facetapi',
        'datestamp' => '1364861711',
        'php' => '5.2.4',
      ),
      'project' => 'facetapi',
      'version' => '7.x-1.3',
    ),
    'fape' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/fape/fape.module',
      'name' => 'fape',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Field API Pane Editor',
        'description' => 'Adds a contextual link to Field API Panel Panes to edit that field value.',
        'core' => '7.x',
        'package' => 'Chaos tool suite',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'entity',
        ),
        'version' => '7.x-1.1+2-dev',
        'project' => 'fape',
        'datestamp' => '1366645533',
        'php' => '5.2.4',
      ),
      'project' => 'fape',
      'version' => '7.x-1.1+2-dev',
    ),
    'features' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/features/features.module',
      'name' => 'features',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '6101',
      'weight' => '20',
      'info' => 
      array (
        'name' => 'Features',
        'description' => 'Provides feature management for Drupal.',
        'core' => '7.x',
        'package' => 'Features',
        'files' => 
        array (
          0 => 'tests/features.test',
        ),
        'version' => '7.x-2.0-beta2',
        'project' => 'features',
        'datestamp' => '1364589018',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'features',
      'version' => '7.x-2.0-beta2',
    ),
    'features_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/features/tests/features_test.module',
      'name' => 'features_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Features Tests',
        'description' => 'Test module for Features testing.',
        'core' => '7.x',
        'package' => 'Testing',
        'php' => '5.2.0',
        'dependencies' => 
        array (
          0 => 'features',
          1 => 'image',
          2 => 'strongarm',
          3 => 'taxonomy',
          4 => 'views',
        ),
        'features' => 
        array (
          'ctools' => 
          array (
            0 => 'strongarm:strongarm:1',
            1 => 'views:views_default:3.0',
          ),
          'features_api' => 
          array (
            0 => 'api:1',
          ),
          'field' => 
          array (
            0 => 'node-features_test-field_features_test',
          ),
          'filter' => 
          array (
            0 => 'features_test',
          ),
          'image' => 
          array (
            0 => 'features_test',
          ),
          'node' => 
          array (
            0 => 'features_test',
          ),
          'taxonomy' => 
          array (
            0 => 'taxonomy_features_test',
          ),
          'user_permission' => 
          array (
            0 => 'create features_test content',
          ),
          'views_view' => 
          array (
            0 => 'features_test',
          ),
        ),
        'hidden' => true,
        'version' => '7.x-2.0-beta2',
        'project' => 'features',
        'datestamp' => '1364589018',
      ),
      'project' => 'features',
      'version' => '7.x-2.0-beta2',
    ),
    'field' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/field/field.module',
      'name' => 'field',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7003',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Field',
        'description' => 'Field API to add fields to entities like nodes and users.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'field.module',
          1 => 'field.attach.inc',
          2 => 'field.info.class.inc',
          3 => 'tests/field.test',
        ),
        'dependencies' => 
        array (
          0 => 'field_sql_storage',
        ),
        'required' => true,
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'theme/field.css',
          ),
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'fieldable_panels_panes' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/fieldable_panels_panes/fieldable_panels_panes.module',
      'name' => 'fieldable_panels_panes',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7107',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Fieldable Panels Panes',
        'description' => 'Allow the creation of fieldable panels pane entities.',
        'package' => 'Panels',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'panels',
          1 => 'views',
        ),
        'files' => 
        array (
          0 => 'includes/PanelsPaneController.class.php',
          1 => 'includes/translation.handler.fieldable_panels_pane.inc',
          2 => 'plugins/views/fieldable_panels_panes_handler_argument_bundle.inc',
          3 => 'plugins/views/fieldable_panels_panes_handler_field_bundle.inc',
          4 => 'plugins/views/fieldable_panels_panes_handler_field_delete_entity.inc',
          5 => 'plugins/views/fieldable_panels_panes_handler_field_edit_entity.inc',
          6 => 'plugins/views/fieldable_panels_panes_handler_field_view_entity.inc',
          7 => 'plugins/views/fieldable_panels_panes_handler_filter_bundle.inc',
          8 => 'plugins/views/fieldable_panels_panes_handler_field_delete_revision.inc',
          9 => 'plugins/views/fieldable_panels_panes_handler_field_edit_revision.inc',
          10 => 'plugins/views/fieldable_panels_panes_handler_field_view_revision.inc',
          11 => 'plugins/views/fieldable_panels_panes_handler_field_is_current.inc',
          12 => 'plugins/views/fieldable_panels_panes_handler_field_make_current.inc',
        ),
        'version' => '7.x-1.4+5-dev',
        'project' => 'fieldable_panels_panes',
        'datestamp' => '1366645540',
        'php' => '5.2.4',
      ),
      'project' => 'fieldable_panels_panes',
      'version' => '7.x-1.4+5-dev',
    ),
    'field_group' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/field_group/field_group.module',
      'name' => 'field_group',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7003',
      'weight' => '1',
      'info' => 
      array (
        'name' => 'Fieldgroup',
        'description' => 'Fieldgroup',
        'package' => 'Fields',
        'dependencies' => 
        array (
          0 => 'field',
          1 => 'ctools',
        ),
        'core' => '7.x',
        'files' => 
        array (
          0 => 'field_group.install',
          1 => 'field_group.module',
          2 => 'field_group.field_ui.inc',
          3 => 'field_group.form.inc',
          4 => 'field_group.features.inc',
          5 => 'field_group.test',
        ),
        'version' => '7.x-1.1',
        'project' => 'field_group',
        'datestamp' => '1319051133',
        'php' => '5.2.4',
      ),
      'project' => 'field_group',
      'version' => '7.x-1.1',
    ),
    'field_sql_storage' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/field/modules/field_sql_storage/field_sql_storage.module',
      'name' => 'field_sql_storage',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Field SQL storage',
        'description' => 'Stores field data in an SQL database.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
        ),
        'files' => 
        array (
          0 => 'field_sql_storage.test',
        ),
        'required' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'field_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/field/tests/field_test.module',
      'name' => 'field_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Field API Test',
        'description' => 'Support module for the Field API tests.',
        'core' => '7.x',
        'package' => 'Testing',
        'files' => 
        array (
          0 => 'field_test.entity.inc',
        ),
        'version' => '7.38',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'field_tools' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/field_tools/field_tools.module',
      'name' => 'field_tools',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Field tools',
        'description' => 'Allows fields to be cloned to other entities.',
        'dependencies' => 
        array (
          0 => 'field_ui',
        ),
        'package' => 'Fields',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'field_tools.module',
          1 => 'field_tools.admin.inc',
        ),
        'version' => '7.x-1.0-alpha4',
        'project' => 'field_tools',
        'datestamp' => '1377167522',
        'php' => '5.2.4',
      ),
      'project' => 'field_tools',
      'version' => '7.x-1.0-alpha4',
    ),
    'field_tools_taxonomy' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/field_tools/field_tools_taxonomy/field_tools_taxonomy.module',
      'name' => 'field_tools_taxonomy',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Field tools taxonomy',
        'description' => 'Allows taxonomy vocabularies to be applied to entities.',
        'dependencies' => 
        array (
          0 => 'field_ui',
          1 => 'taxonomy',
        ),
        'package' => 'Fields',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'field_tools_taxonomy.module',
          1 => 'field_tools_taxonomy.admin.inc',
        ),
        'version' => '7.x-1.0-alpha4',
        'project' => 'field_tools',
        'datestamp' => '1377167522',
        'php' => '5.2.4',
      ),
      'project' => 'field_tools',
      'version' => '7.x-1.0-alpha4',
    ),
    'field_ui' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/field_ui/field_ui.module',
      'name' => 'field_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Field UI',
        'description' => 'User interface for the Field API.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
        ),
        'files' => 
        array (
          0 => 'field_ui.test',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'file' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/file/file.module',
      'name' => 'file',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'File',
        'description' => 'Defines a file field type.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
        ),
        'files' => 
        array (
          0 => 'tests/file.test',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'file_entity' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/file_entity/file_entity.module',
      'name' => 'file_entity',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7207',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'File entity',
        'description' => 'Extends Drupal file entities to be fieldable and viewable.',
        'package' => 'Media',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
          1 => 'file',
          2 => 'ctools',
        ),
        'files' => 
        array (
          0 => 'views/views_handler_argument_file_type.inc',
          1 => 'views/views_handler_field_file_rendered.inc',
          2 => 'views/views_handler_field_file_type.inc',
          3 => 'views/views_handler_filter_file_type.inc',
          4 => 'views/views_handler_field_file_filename.inc',
          5 => 'views/views_handler_field_file_link.inc',
          6 => 'views/views_handler_field_file_link_edit.inc',
          7 => 'views/views_handler_field_file_link_delete.inc',
          8 => 'views/views_handler_field_file_link_download.inc',
          9 => 'views/views_handler_field_file_link_usage.inc',
          10 => 'views/views_plugin_row_file_rss.inc',
          11 => 'views/views_plugin_row_file_view.inc',
          12 => 'tests/file_entity.test',
        ),
        'configure' => 'admin/structure/file-types',
        'version' => '7.x-2.0-unstable7+61-dev',
        'project' => 'file_entity',
        'datestamp' => '1366645542',
        'php' => '5.2.4',
      ),
      'project' => 'file_entity',
      'version' => '7.x-2.0-unstable7+61-dev',
    ),
    'file_entity_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/file_entity/tests/file_entity_test.module',
      'name' => 'file_entity_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'File Entity Test',
        'description' => 'Support module for File Entity tests.',
        'package' => 'Testing',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'file_entity',
        ),
        'hidden' => true,
        'version' => '7.x-2.0-unstable7+61-dev',
        'project' => 'file_entity',
        'datestamp' => '1366645542',
        'php' => '5.2.4',
      ),
      'project' => 'file_entity',
      'version' => '7.x-2.0-unstable7+61-dev',
    ),
    'file_module_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/file/tests/file_module_test.module',
      'name' => 'file_module_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'File test',
        'description' => 'Provides hooks for testing File module functionality.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'file_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/file_test.module',
      'name' => 'file_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'File test',
        'description' => 'Support module for file handling tests.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'file_test.module',
        ),
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'filter' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/filter/filter.module',
      'name' => 'filter',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7010',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Filter',
        'description' => 'Filters content in preparation for display.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'filter.test',
        ),
        'required' => true,
        'configure' => 'admin/config/content/formats',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'filter_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/filter_test.module',
      'name' => 'filter_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Filter test module',
        'description' => 'Tests filter hooks and functions.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'form_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/form_test.module',
      'name' => 'form_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'FormAPI Test',
        'description' => 'Support module for Form API tests.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'forum' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/forum/forum.module',
      'name' => 'forum',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Forum',
        'description' => 'Provides discussion forums.',
        'dependencies' => 
        array (
          0 => 'taxonomy',
          1 => 'comment',
        ),
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'forum.test',
        ),
        'configure' => 'admin/structure/forum',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'forum.css',
          ),
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'gtwitpane' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod',
      'name' => 'gtwitpane',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'dependencies' => 
        array (
        ),
        'description' => '',
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => NULL,
    ),
    'help' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/help/help.module',
      'name' => 'help',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Help',
        'description' => 'Manages the display of online help.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'help.test',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'help_example' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/advanced_help/help_example/help_example.module',
      'name' => 'help_example',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Advanced help example',
        'description' => 'A example help module to demonstrate the advanced help module.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'advanced_help',
        ),
        'files' => 
        array (
          0 => 'help_example.module',
        ),
        'version' => '7.x-1.0',
        'project' => 'advanced_help',
        'datestamp' => '1321022730',
        'php' => '5.2.4',
      ),
      'project' => 'advanced_help',
      'version' => '7.x-1.0',
    ),
    'ie8_redirect' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/ie8_redirect/ie8_redirect.module',
      'name' => 'ie8_redirect',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'IE8 Redirect',
        'description' => 'Redirect in case user browser is IE8 or less',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'image' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/image/image.module',
      'name' => 'image',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7005',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Image',
        'description' => 'Provides image manipulation tools.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'file',
        ),
        'files' => 
        array (
          0 => 'image.test',
        ),
        'configure' => 'admin/config/media/image-styles',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'image_field_caption' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/image_field_caption/image_field_caption.module',
      'name' => 'image_field_caption',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7202',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Image Field Caption',
        'description' => 'Provides a caption textarea for image fields.',
        'core' => '7.x',
        'package' => 'Other',
        'dependencies' => 
        array (
          0 => 'image',
        ),
        'configure' => 'admin/config/media/image-field-caption',
        'version' => '7.x-2.0',
        'project' => 'image_field_caption',
        'datestamp' => '1370462752',
        'php' => '5.2.4',
      ),
      'project' => 'image_field_caption',
      'version' => '7.x-2.0',
    ),
    'image_module_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/image/tests/image_module_test.module',
      'name' => 'image_module_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Image test',
        'description' => 'Provides hook implementations for testing Image module functionality.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'image_module_test.module',
        ),
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'image_resize_filter' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/image_resize_filter/image_resize_filter.module',
      'name' => 'image_resize_filter',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7000',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Image resize filter',
        'description' => 'Filter to automatically scale images to their height and width dimensions.',
        'core' => '7.x',
        'package' => 'Input filters',
        'configure' => 'admin/config/content/formats',
        'version' => '7.x-1.13',
        'project' => 'image_resize_filter',
        'datestamp' => '1313565117',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'image_resize_filter',
      'version' => '7.x-1.13',
    ),
    'image_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/image_test.module',
      'name' => 'image_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Image test',
        'description' => 'Support module for image toolkit tests.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'imce' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/imce/imce.module',
      'name' => 'imce',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'IMCE',
        'description' => 'An image/file uploader and browser supporting personal directories and user quota.',
        'core' => '7.x',
        'package' => 'Media',
        'configure' => 'admin/config/media/imce',
        'version' => '7.x-1.8',
        'project' => 'imce',
        'datestamp' => '1387302359',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'imce',
      'version' => '7.x-1.8',
    ),
    'imce_filefield' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/imce_filefield/imce_filefield.module',
      'name' => 'imce_filefield',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'IMCE for File Field',
        'description' => 'Allows users to select files from IMCE File Browser for file fields.',
        'dependencies' => 
        array (
          0 => 'file',
          1 => 'imce',
        ),
        'package' => 'Media',
        'core' => '7.x',
        'version' => '7.x-1.0',
        'project' => 'imce_filefield',
        'datestamp' => '1387303106',
        'php' => '5.2.4',
      ),
      'project' => 'imce_filefield',
      'version' => '7.x-1.0',
    ),
    'invisimail' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/invisimail/invisimail.module',
      'name' => 'invisimail',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Invisimail',
        'description' => 'Attempts to thwart spam-bots by encoding email addresses.',
        'dependencies' => 
        array (
          0 => 'filter',
        ),
        'core' => '7.x',
        'files' => 
        array (
          0 => 'invisimail.module',
        ),
        'version' => '7.x-1.1',
        'project' => 'invisimail',
        'datestamp' => '1294290657',
        'php' => '5.2.4',
      ),
      'project' => 'invisimail',
      'version' => '7.x-1.1',
    ),
    'isotope_example_feature' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod',
      'name' => 'isotope_example_feature',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'dependencies' => 
        array (
        ),
        'description' => '',
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => NULL,
    ),
    'jplayer' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/jplayer/jplayer.module',
      'name' => 'jplayer',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'jPlayer',
        'description' => 'Provides an HTML5-compatible with Flash-fallback audio player.',
        'package' => 'Media',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'file',
        ),
        'configure' => 'admin/config/media/jplayer',
        'files' => 
        array (
          0 => 'jplayer.install',
          1 => 'jplayer.module',
          2 => 'includes/jplayer.admin.inc',
          3 => 'includes/jplayer.theme.inc',
          4 => 'includes/jplayer.views.inc',
          5 => 'includes/jplayer_style_plugin.inc',
          6 => 'theme/jplayer.tpl.php',
        ),
        'version' => '7.x-2.0-beta1',
        'project' => 'jplayer',
        'datestamp' => '1337979956',
        'php' => '5.2.4',
      ),
      'project' => 'jplayer',
      'version' => '7.x-2.0-beta1',
    ),
    'jplayer_protect' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/jplayer/jplayer_protect/jplayer_protect.module',
      'name' => 'jplayer_protect',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'jPlayer Content Protection',
        'description' => 'Prevent direct access to media files.',
        'package' => 'Media',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'jplayer',
        ),
        'files' => 
        array (
          0 => 'jplayer_protect.install',
          1 => 'jplayer_protect.module',
        ),
        'version' => '7.x-2.0-beta1',
        'project' => 'jplayer',
        'datestamp' => '1337979956',
        'php' => '5.2.4',
      ),
      'project' => 'jplayer',
      'version' => '7.x-2.0-beta1',
    ),
    'jquery_update' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/jquery_update/jquery_update.module',
      'name' => 'jquery_update',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7000',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'jQuery Update',
        'description' => 'Update jQuery and jQuery UI to a more recent version.',
        'package' => 'User interface',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'jquery_update.module',
          1 => 'jquery_update.install',
        ),
        'configure' => 'admin/config/development/jquery_update',
        'version' => '7.x-2.3',
        'project' => 'jquery_update',
        'datestamp' => '1360375905',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'jquery_update',
      'version' => '7.x-2.3',
    ),
    'libraries' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/libraries/libraries.module',
      'name' => 'libraries',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7200',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Libraries',
        'description' => 'Allows version-dependent and shared usage of external libraries.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'tests/libraries.test',
        ),
        'version' => '7.x-2.1',
        'project' => 'libraries',
        'datestamp' => '1362848412',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'libraries',
      'version' => '7.x-2.1',
    ),
    'libraries_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/libraries/tests/libraries_test.module',
      'name' => 'libraries_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Libraries test module',
        'description' => 'Tests library detection and loading.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'libraries',
        ),
        'hidden' => true,
        'version' => '7.x-2.1',
        'project' => 'libraries',
        'datestamp' => '1362848412',
        'php' => '5.2.4',
      ),
      'project' => 'libraries',
      'version' => '7.x-2.1',
    ),
    'link' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/link/link.module',
      'name' => 'link',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Link',
        'description' => 'Defines simple link field types.',
        'core' => '7.x',
        'package' => 'Fields',
        'files' => 
        array (
          0 => 'link.module',
          1 => 'link.migrate.inc',
          2 => 'tests/link.test',
          3 => 'tests/link.attribute.test',
          4 => 'tests/link.crud.test',
          5 => 'tests/link.crud_browser.test',
          6 => 'tests/link.token.test',
          7 => 'tests/link.validate.test',
          8 => 'views/link_views_handler_argument_target.inc',
          9 => 'views/link_views_handler_filter_protocol.inc',
        ),
        'version' => '7.x-1.1',
        'project' => 'link',
        'datestamp' => '1360444361',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'link',
      'version' => '7.x-1.1',
    ),
    'linkit' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/linkit/linkit.module',
      'name' => 'linkit',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7203',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Linkit',
        'description' => 'Provides an easy interface for inserting links to internal content, files and external pages by providing autocomplete search for several WYSIWYG-editors.',
        'core' => '7.x',
        'configure' => 'admin/config/content/linkit',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'entity',
        ),
        'files' => 
        array (
          0 => 'plugins/plugin.class.php',
          1 => 'plugins/linkit_plugins/linkit-plugin-entity.class.php',
        ),
        'version' => '7.x-2.6',
        'project' => 'linkit',
        'datestamp' => '1362862214',
        'php' => '5.2.4',
      ),
      'project' => 'linkit',
      'version' => '7.x-2.6',
    ),
    'list' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/field/modules/list/list.module',
      'name' => 'list',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'List',
        'description' => 'Defines list field types. Use with Options to create selection lists.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
          1 => 'options',
        ),
        'files' => 
        array (
          0 => 'tests/list.test',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'list_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/field/modules/list/tests/list_test.module',
      'name' => 'list_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'List test',
        'description' => 'Support module for the List module tests.',
        'core' => '7.x',
        'package' => 'Testing',
        'version' => '7.38',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'locale' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/locale/locale.module',
      'name' => 'locale',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Locale',
        'description' => 'Adds language handling functionality and enables the translation of the user interface to languages other than English.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'locale.test',
        ),
        'configure' => 'admin/config/regional/language',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'locale_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/locale/tests/locale_test.module',
      'name' => 'locale_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Locale Test',
        'description' => 'Support module for the locale layer tests.',
        'core' => '7.x',
        'package' => 'Testing',
        'version' => '7.38',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'location' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/location/location.module',
      'name' => 'location',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7301',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Location',
        'package' => 'Location',
        'description' => 'The location module allows you to associate a geographic location with content and users. Users can do proximity searches by postal code.  This is useful for organizing communities that have a geographic presence.',
        'core' => '7.x',
        'configure' => 'admin/config/content/location',
        'files' => 
        array (
          0 => 'location.module',
          1 => 'location.install',
          2 => 'location.admin.inc',
          3 => 'location.georss.inc',
          4 => 'location.inc',
          5 => 'location.token.inc',
          6 => 'location.views.inc',
          7 => 'location.views_default.inc',
          8 => 'location.migrate.inc',
          9 => 'tests/location_testcase.test',
          10 => 'tests/cow.test',
          11 => 'tests/earth.test',
          12 => 'tests/google_geocoder.test',
          13 => 'tests/location_cck.test',
          14 => 'tests/location_cck2.test',
          15 => 'handlers/location_handler_argument_location_country.inc',
          16 => 'handlers/location_handler_argument_location_province.inc',
          17 => 'handlers/location_handler_argument_location_proximity.inc',
          18 => 'handlers/location_handler_field_location_address.inc',
          19 => 'handlers/location_handler_field_location_country.inc',
          20 => 'handlers/location_handler_field_location_distance.inc',
          21 => 'handlers/location_handler_field_location_province.inc',
          22 => 'handlers/location_handler_field_location_street.inc',
          23 => 'handlers/location_handler_filter_location_country.inc',
          24 => 'handlers/location_handler_filter_location_province.inc',
          25 => 'handlers/location_handler_sort_location_distance.inc',
          26 => 'handlers/location_views_handler_field_coordinates.inc',
          27 => 'handlers/location_views_handler_field_latitude.inc',
          28 => 'handlers/location_views_handler_field_longitude.inc',
          29 => 'handlers/location_views_handler_filter_proximity.inc',
          30 => 'plugins/contexts/location.inc',
          31 => 'plugins/relationships/location_from_node.inc',
        ),
        'version' => '7.x-3.0-rc5',
        'project' => 'location',
        'datestamp' => '1378834936',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'location',
      'version' => '7.x-3.0-rc5',
    ),
    'location_addanother' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/location/contrib/location_addanother/location_addanother.module',
      'name' => 'location_addanother',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Location Add Another',
        'description' => 'Allows you to quickly add locations directly from a node without having to click \'edit\' first.',
        'dependencies' => 
        array (
          0 => 'location',
          1 => 'location_node',
        ),
        'package' => 'Location',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'location_addanother.module',
          1 => 'location_addanother.install',
        ),
        'version' => '7.x-3.0-rc5',
        'project' => 'location',
        'datestamp' => '1378834936',
        'php' => '5.2.4',
      ),
      'project' => 'location',
      'version' => '7.x-3.0-rc5',
    ),
    'location_cck' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/location/contrib/location_cck/location_cck.module',
      'name' => 'location_cck',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '6301',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Location CCK',
        'description' => 'Defines a Location field type.',
        'dependencies' => 
        array (
          0 => 'location',
        ),
        'package' => 'CCK',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'location_cck.module',
          1 => 'location_cck.install',
        ),
        'version' => '7.x-3.0-rc5',
        'project' => 'location',
        'datestamp' => '1378834936',
        'php' => '5.2.4',
      ),
      'project' => 'location',
      'version' => '7.x-3.0-rc5',
    ),
    'location_email' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/location/contrib/location_email/location_email.module',
      'name' => 'location_email',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Location Email',
        'package' => 'Location',
        'description' => 'Allows you to add an email address to a location.',
        'dependencies' => 
        array (
          0 => 'location',
        ),
        'core' => '7.x',
        'files' => 
        array (
          0 => 'location_email.module',
          1 => 'location_email.install',
          2 => 'location_email.views.inc',
        ),
        'version' => '7.x-3.0-rc5',
        'project' => 'location',
        'datestamp' => '1378834936',
        'php' => '5.2.4',
      ),
      'project' => 'location',
      'version' => '7.x-3.0-rc5',
    ),
    'location_entity' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/location/contrib/location_entity/location_entity.module',
      'name' => 'location_entity',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Location Entity',
        'description' => 'Provide information about Location field to Entity module.',
        'core' => '7.x',
        'package' => 'Location',
        'dependencies' => 
        array (
          0 => 'location',
        ),
        'files' => 
        array (
          0 => 'location_entity.module',
        ),
        'version' => '7.x-3.0-rc5',
        'project' => 'location',
        'datestamp' => '1378834936',
        'php' => '5.2.4',
      ),
      'project' => 'location',
      'version' => '7.x-3.0-rc5',
    ),
    'location_fax' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/location/contrib/location_fax/location_fax.module',
      'name' => 'location_fax',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Location Fax',
        'package' => 'Location',
        'description' => 'Allows you to add a fax number to a location.',
        'dependencies' => 
        array (
          0 => 'location',
        ),
        'core' => '7.x',
        'files' => 
        array (
          0 => 'location_fax.module',
          1 => 'location_fax.install',
          2 => 'location_fax.views.inc',
        ),
        'version' => '7.x-3.0-rc5',
        'project' => 'location',
        'datestamp' => '1378834936',
        'php' => '5.2.4',
      ),
      'project' => 'location',
      'version' => '7.x-3.0-rc5',
    ),
    'location_generate' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/location/contrib/location_generate/location_generate.module',
      'name' => 'location_generate',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Location Generate',
        'description' => 'Bulk assign random latitude and longitudes to nodes.',
        'package' => 'Development',
        'dependencies' => 
        array (
          0 => 'devel_generate',
          1 => 'location',
        ),
        'core' => '7.x',
        'files' => 
        array (
          0 => 'location_generate.module',
        ),
        'version' => '7.x-3.0-rc5',
        'project' => 'location',
        'datestamp' => '1378834936',
        'php' => '5.2.4',
      ),
      'project' => 'location',
      'version' => '7.x-3.0-rc5',
    ),
    'location_node' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/location/location_node.module',
      'name' => 'location_node',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Node Locations',
        'description' => 'Associate locations with nodes.',
        'dependencies' => 
        array (
          0 => 'location',
        ),
        'package' => 'Location',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'location_node.module',
          1 => 'location_node.install',
        ),
        'version' => '7.x-3.0-rc5',
        'project' => 'location',
        'datestamp' => '1378834936',
        'php' => '5.2.4',
      ),
      'project' => 'location',
      'version' => '7.x-3.0-rc5',
    ),
    'location_phone' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/location/contrib/location_phone/location_phone.module',
      'name' => 'location_phone',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Location Phone',
        'package' => 'Location',
        'description' => 'Allows you to add a phone number to a location.',
        'dependencies' => 
        array (
          0 => 'location',
        ),
        'core' => '7.x',
        'files' => 
        array (
          0 => 'location_phone.module',
          1 => 'location_phone.install',
          2 => 'location_phone.views.inc',
        ),
        'version' => '7.x-3.0-rc5',
        'project' => 'location',
        'datestamp' => '1378834936',
        'php' => '5.2.4',
      ),
      'project' => 'location',
      'version' => '7.x-3.0-rc5',
    ),
    'location_search' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/location/contrib/location_search/location_search.module',
      'name' => 'location_search',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Location Search',
        'package' => 'Location',
        'description' => 'Advanced search page for locations.',
        'dependencies' => 
        array (
          0 => 'search',
          1 => 'location',
        ),
        'core' => '7.x',
        'files' => 
        array (
          0 => 'location_search.module',
          1 => 'location_search.install',
          2 => 'location_search.admin.inc',
        ),
        'version' => '7.x-3.0-rc5',
        'project' => 'location',
        'datestamp' => '1378834936',
        'php' => '5.2.4',
      ),
      'project' => 'location',
      'version' => '7.x-3.0-rc5',
    ),
    'location_taxonomy' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/location/contrib/location_taxonomy/location_taxonomy.module',
      'name' => 'location_taxonomy',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Location Taxonomy',
        'description' => 'Associate locations with taxonomy terms.',
        'dependencies' => 
        array (
          0 => 'location',
          1 => 'taxonomy',
        ),
        'package' => 'Location',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'location_taxonomy.module',
          1 => 'location_taxonomy.install',
        ),
        'version' => '7.x-3.0-rc5',
        'project' => 'location',
        'datestamp' => '1378834936',
        'php' => '5.2.4',
      ),
      'project' => 'location',
      'version' => '7.x-3.0-rc5',
    ),
    'location_user' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/location/location_user.module',
      'name' => 'location_user',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'User Locations',
        'description' => 'Associate locations with users.',
        'dependencies' => 
        array (
          0 => 'location',
        ),
        'package' => 'Location',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'location_user.module',
          1 => 'location_user.install',
        ),
        'configure' => 'admin/config/people/accounts',
        'version' => '7.x-3.0-rc5',
        'project' => 'location',
        'datestamp' => '1378834936',
        'php' => '5.2.4',
      ),
      'project' => 'location',
      'version' => '7.x-3.0-rc5',
    ),
    'main_menu' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/main_menu/main_menu.module',
      'name' => 'main_menu',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Main Menu widget',
        'description' => 'Main menu content pane',
        'version' => '7.x-1.0',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'media' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/media/media.module',
      'name' => 'media',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7211',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Media',
        'description' => 'Provides the core Media API',
        'package' => 'Media',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'file_entity',
          1 => 'image',
          2 => 'views',
        ),
        'files' => 
        array (
          0 => 'includes/MediaReadOnlyStreamWrapper.inc',
          1 => 'includes/MediaBrowserPluginInterface.inc',
          2 => 'includes/MediaBrowserPlugin.inc',
          3 => 'includes/MediaBrowserUpload.inc',
          4 => 'includes/MediaBrowserView.inc',
          5 => 'includes/MediaEntityTranslationHandler.inc',
          6 => 'includes/media_views_plugin_display_media_browser.inc',
          7 => 'includes/media_views_plugin_style_media_browser.inc',
          8 => 'tests/media.test',
          9 => 'tests/media.entity.test',
          10 => 'tests/media.file.usage.test',
        ),
        'configure' => 'admin/config/media/browser',
        'version' => '7.x-2.0-unstable7+38-dev',
        'project' => 'media',
        'datestamp' => '1366645561',
        'php' => '5.2.4',
      ),
      'project' => 'media',
      'version' => '7.x-2.0-unstable7+38-dev',
    ),
    'mediafield' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/media/modules/mediafield/mediafield.module',
      'name' => 'mediafield',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Media Field',
        'description' => 'Provides a field type that stores media-specific data. <em>Deprecated by the core File field type.</em>',
        'package' => 'Media',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'media',
        ),
        'version' => '7.x-2.0-unstable7+38-dev',
        'project' => 'media',
        'datestamp' => '1366645561',
        'php' => '5.2.4',
      ),
      'project' => 'media',
      'version' => '7.x-2.0-unstable7+38-dev',
    ),
    'media_internet' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/media/modules/media_internet/media_internet.module',
      'name' => 'media_internet',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Media Internet Sources',
        'description' => 'Provides an API for accessing media on various internet services',
        'package' => 'Media',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'media',
        ),
        'files' => 
        array (
          0 => 'includes/MediaBrowserInternet.inc',
        ),
        'version' => '7.x-2.0-unstable7+38-dev',
        'project' => 'media',
        'datestamp' => '1366645561',
        'php' => '5.2.4',
      ),
      'project' => 'media',
      'version' => '7.x-2.0-unstable7+38-dev',
    ),
    'media_vimeo' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/media_vimeo/media_vimeo.module',
      'name' => 'media_vimeo',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7200',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Media: Vimeo',
        'description' => 'Provides Vimeo support to the Media module.',
        'package' => 'Media',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'media_vimeo.module',
          1 => 'includes/MediaInternetVimeoHandler.inc',
          2 => 'includes/MediaVimeoStreamWrapper.inc',
          3 => 'includes/media_vimeo.formatters.inc',
          4 => 'includes/media_vimeo.variables.inc',
        ),
        'dependencies' => 
        array (
          0 => 'media',
          1 => 'media_internet',
        ),
        'version' => '',
        'project' => 'media_vimeo',
        'datestamp' => '1366645532',
        'php' => '5.2.4',
      ),
      'project' => 'media_vimeo',
      'version' => '',
    ),
    'media_youtube' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/media_youtube/media_youtube.module',
      'name' => 'media_youtube',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7202',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Media: YouTube',
        'description' => 'Provides YouTube support for File Entity and the Media module.',
        'package' => 'Media',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'includes/MediaInternetYouTubeHandler.inc',
          1 => 'includes/MediaYouTubeStreamWrapper.inc',
          2 => 'includes/MediaYouTubeBrowser.inc',
        ),
        'dependencies' => 
        array (
          0 => 'media',
          1 => 'media_internet',
        ),
        'version' => '7.x-2.0-rc2+0-dev',
        'project' => 'media_youtube',
        'datestamp' => '1366645538',
        'php' => '5.2.4',
      ),
      'project' => 'media_youtube',
      'version' => '7.x-2.0-rc2+0-dev',
    ),
    'menu' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/menu/menu.module',
      'name' => 'menu',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7003',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Menu',
        'description' => 'Allows administrators to customize the site navigation menu.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'menu.test',
        ),
        'configure' => 'admin/structure/menu',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'menu_block' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/menu_block/menu_block.module',
      'name' => 'menu_block',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7202',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Menu Block',
        'description' => 'Provides configurable blocks of menu items.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'menu (>7.11)',
        ),
        'files' => 
        array (
          0 => 'menu_block.module',
          1 => 'menu_block.admin.inc',
          2 => 'menu_block.follow.inc',
          3 => 'menu_block.pages.inc',
          4 => 'menu_block.sort.inc',
          5 => 'menu_block.install',
          6 => 'plugins/content_types/menu_tree/menu_tree.inc',
        ),
        'configure' => 'admin/config/user-interface/menu-block',
        'version' => '7.x-2.3',
        'project' => 'menu_block',
        'datestamp' => '1328286646',
        'php' => '5.2.4',
      ),
      'project' => 'menu_block',
      'version' => '7.x-2.3',
    ),
    'menu_block_export' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/menu_block/menu_block_export.module',
      'name' => 'menu_block_export',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Menu Block Export',
        'description' => 'Provides export interface for Menu block module.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'menu_block',
        ),
        'files' => 
        array (
          0 => 'menu_block_export.module',
          1 => 'menu_block_export.admin.inc',
        ),
        'configure' => 'admin/config/user-interface/menu-block/export',
        'version' => '7.x-2.3',
        'project' => 'menu_block',
        'datestamp' => '1328286646',
        'php' => '5.2.4',
      ),
      'project' => 'menu_block',
      'version' => '7.x-2.3',
    ),
    'menu_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/menu_test.module',
      'name' => 'menu_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Hook menu tests',
        'description' => 'Support module for menu hook testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'module_filter' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/module_filter/module_filter.module',
      'name' => 'module_filter',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7100',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Module filter',
        'description' => 'Filter the modules list.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'module_filter.install',
          1 => 'module_filter.js',
          2 => 'module_filter.module',
          3 => 'module_filter.admin.inc',
          4 => 'module_filter.theme.inc',
          5 => 'css/module_filter.css',
          6 => 'css/module_filter_tab.css',
          7 => 'js/module_filter.js',
          8 => 'js/module_filter_tab.js',
        ),
        'configure' => 'admin/config/user-interface/modulefilter',
        'version' => '7.x-1.7',
        'project' => 'module_filter',
        'datestamp' => '1341518501',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'module_filter',
      'version' => '7.x-1.7',
    ),
    'module_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/module_test.module',
      'name' => 'module_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Module test',
        'description' => 'Support module for module system testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'myquote' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod',
      'name' => 'myquote',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'dependencies' => 
        array (
        ),
        'description' => '',
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => NULL,
    ),
    'navbar' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/navbar/navbar.module',
      'name' => 'navbar',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Mobile friendly navigation toolbar',
        'description' => 'A very simple mobile friendly toolbar that lets you switch between frontend and backend.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'jquery_update',
        ),
        'version' => '7.x-1.0-alpha3',
        'project' => 'navbar',
        'datestamp' => '1349337129',
        'php' => '5.2.4',
      ),
      'project' => 'navbar',
      'version' => '7.x-1.0-alpha3',
    ),
    'node' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/node/node.module',
      'name' => 'node',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7015',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Node',
        'description' => 'Allows content to be submitted to the site and displayed on pages.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'node.module',
          1 => 'node.test',
        ),
        'required' => true,
        'configure' => 'admin/structure/types',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'node.css',
          ),
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'node_access_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/node/tests/node_access_test.module',
      'name' => 'node_access_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Node module access tests',
        'description' => 'Support module for node permission testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'node_export' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/node_export/node_export.module',
      'name' => 'node_export',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7303',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Node export',
        'description' => 'Allows users to export content and then import into another Drupal installation.',
        'dependencies' => 
        array (
          0 => 'uuid',
        ),
        'core' => '7.x',
        'package' => 'Node export',
        'configure' => 'admin/config/content/node_export',
        'files' => 
        array (
          0 => 'views/views_handler_field_node_link_export.inc',
        ),
        'version' => '7.x-3.0',
        'project' => 'node_export',
        'datestamp' => '1345435979',
        'php' => '5.2.4',
      ),
      'project' => 'node_export',
      'version' => '7.x-3.0',
    ),
    'node_export_dependency' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/node_export/modules/node_export_dependency/node_export_dependency.module',
      'name' => 'node_export_dependency',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Node export dependency (experimental)',
        'description' => 'Helps maintain relationships to dependent entities.  Intended to make Node export relation obsolete.',
        'dependencies' => 
        array (
          0 => 'node_export',
          1 => 'uuid',
        ),
        'core' => '7.x',
        'package' => 'Node export',
        'version' => '7.x-3.0',
        'project' => 'node_export',
        'datestamp' => '1345435979',
        'php' => '5.2.4',
      ),
      'project' => 'node_export',
      'version' => '7.x-3.0',
    ),
    'node_export_features' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/node_export/modules/node_export_features/node_export_features.module',
      'name' => 'node_export_features',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Node export features',
        'description' => 'Adds Features support to Node export, so you can put your exports into Features modules.',
        'dependencies' => 
        array (
          0 => 'node_export',
          1 => 'uuid',
          2 => 'features',
        ),
        'core' => '7.x',
        'package' => 'Node export',
        'version' => '7.x-3.0',
        'project' => 'node_export',
        'datestamp' => '1345435979',
        'php' => '5.2.4',
      ),
      'project' => 'node_export',
      'version' => '7.x-3.0',
    ),
    'node_export_feeds' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/node_export/modules/node_export_feeds/node_export_feeds.module',
      'name' => 'node_export_feeds',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Node export feeds',
        'description' => 'Node export feeds importer.  This is a more advanced importer than the one built into node export, but tricky to use.',
        'core' => '7.x',
        'package' => 'Node export',
        'dependencies' => 
        array (
          0 => 'feeds',
          1 => 'node_export',
        ),
        'files' => 
        array (
          0 => 'FeedsNodeExportParser.inc',
          1 => 'FeedsNodeExportProcessor.inc',
        ),
        'version' => '7.x-3.0',
        'project' => 'node_export',
        'datestamp' => '1345435979',
        'php' => '5.2.4',
      ),
      'project' => 'node_export',
      'version' => '7.x-3.0',
    ),
    'node_export_relation' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/node_export/modules/node_export_relation/node_export_relation.module',
      'name' => 'node_export_relation',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Node export relation (deprecated)',
        'description' => 'Helps maintain relationships.  Supports node references, taxonomy, and organic groups.',
        'dependencies' => 
        array (
          0 => 'node_export',
          1 => 'uuid',
        ),
        'core' => '7.x',
        'package' => 'Node export',
        'version' => '7.x-3.0',
        'project' => 'node_export',
        'datestamp' => '1345435979',
        'php' => '5.2.4',
      ),
      'project' => 'node_export',
      'version' => '7.x-3.0',
    ),
    'node_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/node/tests/node_test.module',
      'name' => 'node_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Node module tests',
        'description' => 'Support module for node related testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'node_test_exception' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/node/tests/node_test_exception.module',
      'name' => 'node_test_exception',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Node module exception tests',
        'description' => 'Support module for node related exception testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'number' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/field/modules/number/number.module',
      'name' => 'number',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Number',
        'description' => 'Defines numeric field types.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
        ),
        'files' => 
        array (
          0 => 'number.test',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'openid' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/openid/openid.module',
      'name' => 'openid',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'OpenID',
        'description' => 'Allows users to log into your site using OpenID.',
        'version' => '7.38',
        'package' => 'Core',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'openid.test',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'openid_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/openid/tests/openid_test.module',
      'name' => 'openid_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'OpenID dummy provider',
        'description' => 'OpenID provider used for testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'openid',
        ),
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'options' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/field/modules/options/options.module',
      'name' => 'options',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Options',
        'description' => 'Defines selection, check box and radio button widgets for text and numeric fields.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
        ),
        'files' => 
        array (
          0 => 'options.test',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'overlay' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/overlay/overlay.module',
      'name' => 'overlay',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Overlay',
        'description' => 'Displays the Drupal administration interface in an overlay.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'page_manager' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/ctools/page_manager/page_manager.module',
      'name' => 'page_manager',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '99',
      'info' => 
      array (
        'name' => 'Page manager',
        'description' => 'Provides a UI and API to manage pages within the site.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'package' => 'Chaos tool suite',
        'version' => '7.x-1.3',
        'project' => 'ctools',
        'datestamp' => '1365013512',
        'php' => '5.2.4',
      ),
      'project' => 'ctools',
      'version' => '7.x-1.3',
    ),
    'panelizer' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/panelizer/panelizer.module',
      'name' => 'panelizer',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7110',
      'weight' => '21',
      'info' => 
      array (
        'name' => 'Panelizer',
        'description' => 'Allow any node type to have custom panel displays, similar to the panel node type.',
        'package' => 'Panels',
        'dependencies' => 
        array (
          0 => 'panels',
          1 => 'ctools',
          2 => 'page_manager',
        ),
        'core' => '7.x',
        'configure' => 'admin/config/content/panelizer',
        'files' => 
        array (
          0 => 'plugins/views/panelizer_handler_field_link.inc',
          1 => 'plugins/views/panelizer_handler_panelizer_status.inc',
          2 => 'plugins/views/panelizer_handler_filter_panelizer_status.inc',
          3 => 'plugins/views/panelizer_plugin_row_panelizer_node_view.inc',
        ),
        'version' => '7.x-3.1',
        'project' => 'panelizer',
        'datestamp' => '1360785942',
        'php' => '5.2.4',
      ),
      'project' => 'panelizer',
      'version' => '7.x-3.1',
    ),
    'panels' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/panels/panels.module',
      'name' => 'panels',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7301',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Panels',
        'description' => 'Core Panels display functions; provides no external UI, at least one other Panels module should be enabled.',
        'core' => '7.x',
        'package' => 'Panels',
        'configure' => 'admin/structure/panels',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'files' => 
        array (
          0 => 'panels.module',
          1 => 'includes/common.inc',
          2 => 'includes/legacy.inc',
          3 => 'includes/plugins.inc',
          4 => 'plugins/views/panels_views_plugin_row_fields.inc',
        ),
        'version' => '7.x-3.3+39-dev',
        'project' => 'panels',
        'datestamp' => '1366645551',
        'php' => '5.2.4',
      ),
      'project' => 'panels',
      'version' => '7.x-3.3+39-dev',
    ),
    'panels_breadcrumbs' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/panels_breadcrumbs/panels_breadcrumbs.module',
      'name' => 'panels_breadcrumbs',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Panels Breadcrumbs',
        'description' => 'Adds the ability to set breadcrumbs directly from Panels and takes advantage of arguments and contexts as placeholder tokens',
        'core' => '7.x',
        'package' => 'Panels',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'page_manager',
          2 => 'panels',
        ),
        'version' => '7.x-2.0',
        'project' => 'panels_breadcrumbs',
        'datestamp' => '1358163197',
        'php' => '5.2.4',
      ),
      'project' => 'panels_breadcrumbs',
      'version' => '7.x-2.0',
    ),
    'panels_ipe' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/panels/panels_ipe/panels_ipe.module',
      'name' => 'panels_ipe',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Panels In-Place Editor',
        'description' => 'Provide a UI for managing some Panels directly on the frontend, instead of having to use the backend.',
        'package' => 'Panels',
        'dependencies' => 
        array (
          0 => 'panels',
        ),
        'core' => '7.x',
        'configure' => 'admin/structure/panels',
        'files' => 
        array (
          0 => 'panels_ipe.module',
        ),
        'version' => '7.x-3.3+39-dev',
        'project' => 'panels',
        'datestamp' => '1366645551',
        'php' => '5.2.4',
      ),
      'project' => 'panels',
      'version' => '7.x-3.3+39-dev',
    ),
    'panels_mini' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/panels/panels_mini/panels_mini.module',
      'name' => 'panels_mini',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Mini panels',
        'description' => 'Create mini panels that can be used as blocks by Drupal and panes by other panel modules.',
        'package' => 'Panels',
        'dependencies' => 
        array (
          0 => 'panels',
        ),
        'core' => '7.x',
        'files' => 
        array (
          0 => 'plugins/export_ui/panels_mini_ui.class.php',
        ),
        'version' => '7.x-3.3+39-dev',
        'project' => 'panels',
        'datestamp' => '1366645551',
        'php' => '5.2.4',
      ),
      'project' => 'panels',
      'version' => '7.x-3.3+39-dev',
    ),
    'panels_node' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/panels/panels_node/panels_node.module',
      'name' => 'panels_node',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Panel nodes',
        'description' => 'Create nodes that are divided into areas with selectable content.',
        'package' => 'Panels',
        'dependencies' => 
        array (
          0 => 'panels',
        ),
        'configure' => 'admin/structure/panels',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'panels_node.module',
        ),
        'version' => '7.x-3.3+39-dev',
        'project' => 'panels',
        'datestamp' => '1366645551',
        'php' => '5.2.4',
      ),
      'project' => 'panels',
      'version' => '7.x-3.3+39-dev',
    ),
    'panopoly' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/panopoly.profile',
      'name' => 'panopoly',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '1000',
      'info' => 
      array (
        'name' => 'Panopoly',
        'distribution_name' => 'Panopoly',
        'description' => 'A magical framework for building Drupal products based on the Panels module',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'menu',
          1 => 'image',
          2 => 'list',
          3 => 'number',
          4 => 'options',
          5 => 'path',
          6 => 'taxonomy',
          7 => 'search',
          8 => 'shortcut',
          9 => 'field',
          10 => 'field_ui',
          11 => 'file',
          12 => 'dblog',
          13 => 'update',
          14 => 'panopoly_core',
          15 => 'panopoly_images',
          16 => 'panopoly_theme',
          17 => 'panopoly_magic',
          18 => 'panopoly_widgets',
          19 => 'panopoly_admin',
          20 => 'panopoly_users',
          21 => 'panopoly_pages',
          22 => 'panopoly_search',
          23 => 'panopoly_wysiwyg',
          24 => 'navbar',
          25 => 'backports',
          26 => 'simplified_menu_admin',
          27 => 'save_draft',
          28 => 'module_filter',
          29 => 'date_popup_authored',
          30 => 'devel',
          31 => 'uuid',
        ),
        'version' => '7.x-1.0-rc4',
        'project' => 'panopoly',
        'datestamp' => '1366645521',
        'php' => '5.2.4',
      ),
      'project' => 'panopoly',
      'version' => '7.x-1.0-rc4',
    ),
    'panopoly_admin' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/panopoly/panopoly_admin/panopoly_admin.module',
      'name' => 'panopoly_admin',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Panopoly Admin',
        'description' => 'Administrative dashboard and related editing interfaces.',
        'core' => '7.x',
        'package' => 'Panopoly',
        'php' => '5.2.4',
        'project' => 'panopoly_admin',
        'dependencies' => 
        array (
          0 => 'admin_views',
          1 => 'ctools',
          2 => 'defaultconfig',
          3 => 'features',
          4 => 'jquery_update',
          5 => 'page_manager',
          6 => 'panopoly_theme',
          7 => 'strongarm',
          8 => 'views_bulk_operations',
        ),
        'scripts' => 
        array (
          0 => 'panopoly-admin.js',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'panopoly-admin.css',
          ),
        ),
        'features' => 
        array (
          'ctools' => 
          array (
            0 => 'page_manager:pages_default:1',
            1 => 'strongarm:strongarm:1',
            2 => 'views:views_default:3.0',
          ),
          'defaultconfig' => 
          array (
            0 => 'strongarm:admin_toolbar',
            1 => 'strongarm:user_register',
            2 => 'user_default_permissions:access administration menu',
            3 => 'user_default_permissions:access administration pages',
            4 => 'user_default_permissions:access content',
            5 => 'user_default_permissions:access content overview',
            6 => 'user_default_permissions:access navbar',
            7 => 'user_default_permissions:administer menu',
            8 => 'user_default_permissions:administer taxonomy',
            9 => 'user_default_permissions:create files',
            10 => 'user_default_permissions:delete any files',
            11 => 'user_default_permissions:delete own files',
            12 => 'user_default_permissions:delete revisions',
            13 => 'user_default_permissions:edit any files',
            14 => 'user_default_permissions:edit own files',
            15 => 'user_default_permissions:revert revisions',
            16 => 'user_default_permissions:save draft',
            17 => 'user_default_permissions:use admin toolbar',
            18 => 'user_default_permissions:view files',
            19 => 'user_default_permissions:view own files',
            20 => 'user_default_permissions:view own private files',
            21 => 'user_default_permissions:view own unpublished content',
            22 => 'user_default_permissions:view revisions',
          ),
          'features_api' => 
          array (
            0 => 'api:1',
          ),
          'page_manager_handlers' => 
          array (
            0 => 'node_edit_panel_context',
          ),
          'page_manager_pages' => 
          array (
            0 => 'panopoly_admin_layout_library',
            1 => 'panopoly_admin_page_library',
            2 => 'panopoly_admin_pane_library',
          ),
          'variable' => 
          array (
            0 => 'jquery_update_jquery_version',
            1 => 'user_admin_role',
          ),
        ),
        'version' => '7.x-1.0-rc4',
        'datestamp' => '1366630897',
      ),
      'project' => 'panopoly_admin',
      'version' => '7.x-1.0-rc4',
    ),
    'panopoly_core' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/panopoly/panopoly_core/panopoly_core.module',
      'name' => 'panopoly_core',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Panopoly Core',
        'description' => 'The magical core of the Panopoly framework.',
        'core' => '7.x',
        'package' => 'Panopoly',
        'php' => '5.2.4',
        'project' => 'panopoly_core',
        'dependencies' => 
        array (
          0 => 'apps',
          1 => 'ctools',
          2 => 'date',
          3 => 'date_api',
          4 => 'date_popup',
          5 => 'date_views',
          6 => 'defaultconfig',
          7 => 'defaultcontent',
          8 => 'entity',
          9 => 'entityreference',
          10 => 'features',
          11 => 'field_group',
          12 => 'field_sql_storage',
          13 => 'fieldable_panels_panes',
          14 => 'image',
          15 => 'libraries',
          16 => 'list',
          17 => 'menu',
          18 => 'page_manager',
          19 => 'panelizer',
          20 => 'panels',
          21 => 'panels_breadcrumbs',
          22 => 'panels_ipe',
          23 => 'pathauto',
          24 => 'pm_existing_pages',
          25 => 'strongarm',
          26 => 'taxonomy',
          27 => 'token',
          28 => 'views',
          29 => 'views_autocomplete_filters',
          30 => 'views_content',
          31 => 'views_ui',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'css/panopoly-fonts.css',
            1 => 'css/panopoly-dropbutton.css',
          ),
        ),
        'features' => 
        array (
          'ctools' => 
          array (
            0 => 'panelizer:panelizer:1',
            1 => 'strongarm:strongarm:1',
            2 => 'views:views_default:3.0',
          ),
          'defaultconfig' => 
          array (
            0 => 'strongarm:apps_allow_voting',
            1 => 'strongarm:date_first_day',
            2 => 'strongarm:date_format_long',
            3 => 'strongarm:date_format_medium',
            4 => 'strongarm:date_format_panopoly_day',
            5 => 'strongarm:date_format_panopoly_time',
            6 => 'strongarm:date_format_short',
            7 => 'strongarm:field_bundle_settings_taxonomy_term__panopoly_categories',
            8 => 'strongarm:panelizer_defaults_taxonomy_term_panopoly_categories',
            9 => 'strongarm:panels_page_allowed_layouts',
            10 => 'strongarm:panels_page_allowed_types',
            11 => 'strongarm:panels_page_default',
            12 => 'strongarm:pathauto_taxonomy_term_panopoly_categories_pattern',
            13 => 'user_default_permissions:administer panels styles',
            14 => 'user_default_permissions:change layouts in place editing',
            15 => 'user_default_permissions:use page manager',
            16 => 'user_default_permissions:use panels in place editing',
            17 => 'user_default_roles:administrator',
            18 => 'user_default_roles:editor',
          ),
          'features_api' => 
          array (
            0 => 'api:1',
          ),
          'field' => 
          array (
            0 => 'taxonomy_term-panopoly_categories-field_featured_image',
          ),
          'panelizer_defaults' => 
          array (
            0 => 'taxonomy_term:panopoly_categories:default',
            1 => 'taxonomy_term:panopoly_categories:default:default',
            2 => 'taxonomy_term:panopoly_categories:default:featured',
          ),
          'taxonomy' => 
          array (
            0 => 'panopoly_categories',
          ),
          'variable' => 
          array (
            0 => 'ctools_content_all_views',
            1 => 'page_manager_node_edit_disabled',
            2 => 'page_manager_node_view_disabled',
            3 => 'page_manager_term_view_disabled',
            4 => 'panelizer_taxonomy_term:panopoly_categories_allowed_layouts_default',
            5 => 'panelizer_taxonomy_term:panopoly_categories_allowed_types_default',
          ),
          'views_view' => 
          array (
            0 => 'panopoly_taxonomy',
          ),
        ),
        'version' => '7.x-1.0-rc4',
        'datestamp' => '1366630919',
      ),
      'project' => 'panopoly_core',
      'version' => '7.x-1.0-rc4',
    ),
    'panopoly_images' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/panopoly/panopoly_images/panopoly_images.module',
      'name' => 'panopoly_images',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Panopoly Images',
        'description' => 'Provides scaling and cropping to images.',
        'core' => '7.x',
        'package' => 'Panopoly',
        'php' => '5.2.4',
        'project' => 'panopoly_images',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'features',
          2 => 'file_entity',
          3 => 'image',
          4 => 'media',
        ),
        'features' => 
        array (
          'ctools' => 
          array (
            0 => 'file_entity:file_default_displays:1',
          ),
          'features_api' => 
          array (
            0 => 'api:1',
          ),
          'file_display' => 
          array (
            0 => 'image__default__file_field_file_default',
            1 => 'image__default__file_field_file_rendered',
            2 => 'image__default__file_field_file_table',
            3 => 'image__default__file_field_file_url_plain',
            4 => 'image__default__file_field_media_large_icon',
            5 => 'image__default__file_image',
            6 => 'image__full__file_image',
            7 => 'image__link__file_field_file_default',
            8 => 'image__link__file_field_file_rendered',
            9 => 'image__link__file_field_file_table',
            10 => 'image__link__file_field_file_url_plain',
            11 => 'image__link__file_field_media_large_icon',
            12 => 'image__link__file_image',
            13 => 'image__preview__file_field_file_default',
            14 => 'image__preview__file_field_file_rendered',
            15 => 'image__preview__file_field_file_table',
            16 => 'image__preview__file_field_file_url_plain',
            17 => 'image__preview__file_field_media_large_icon',
            18 => 'image__preview__file_image',
            19 => 'image__teaser__file_field_file_default',
            20 => 'image__teaser__file_field_file_rendered',
            21 => 'image__teaser__file_field_file_table',
            22 => 'image__teaser__file_field_file_url_plain',
            23 => 'image__teaser__file_field_media_large_icon',
            24 => 'image__teaser__file_image',
          ),
          'image' => 
          array (
            0 => 'panopoly_image_featured',
            1 => 'panopoly_image_full',
            2 => 'panopoly_image_half',
            3 => 'panopoly_image_quarter',
            4 => 'panopoly_image_spotlight',
            5 => 'panopoly_image_square',
            6 => 'panopoly_image_thumbnail',
            7 => 'panopoly_image_video',
          ),
        ),
        'version' => '7.x-1.0-rc4',
        'datestamp' => '1366630935',
      ),
      'project' => 'panopoly_images',
      'version' => '7.x-1.0-rc4',
    ),
    'panopoly_magic' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/panopoly/panopoly_magic/panopoly_magic.module',
      'name' => 'panopoly_magic',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Panopoly Magic',
        'description' => 'Weaves together the chaos magic.',
        'core' => '7.x',
        'package' => 'Panopoly',
        'php' => '5.2.4',
        'project' => 'panopoly_magic',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'fape',
          2 => 'features',
          3 => 'page_manager',
          4 => 'panels_ipe',
          5 => 'views',
        ),
        'scripts' => 
        array (
          0 => 'panopoly-magic.js',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'css/panopoly-magic.css',
            1 => 'css/panopoly-modal.css',
          ),
        ),
        'features' => 
        array (
          'features_api' => 
          array (
            0 => 'api:1',
          ),
        ),
        'version' => '7.x-1.0-rc4',
        'datestamp' => '1366630938',
      ),
      'project' => 'panopoly_magic',
      'version' => '7.x-1.0-rc4',
    ),
    'panopoly_pages' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/panopoly/panopoly_pages/panopoly_pages.module',
      'name' => 'panopoly_pages',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Panopoly Pages',
        'description' => 'Provides a basic page, suitable for Panelizing.',
        'core' => '7.x',
        'package' => 'Panopoly',
        'php' => '5.2.4',
        'project' => 'panopoly_pages',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'defaultconfig',
          2 => 'features',
          3 => 'menu_block',
          4 => 'node',
          5 => 'page_manager',
          6 => 'panelizer',
          7 => 'taxonomy',
          8 => 'strongarm',
        ),
        'features' => 
        array (
          'ctools' => 
          array (
            0 => 'page_manager:pages_default:1',
            1 => 'panelizer:panelizer:1',
            2 => 'strongarm:strongarm:1',
          ),
          'defaultconfig' => 
          array (
            0 => 'user_default_permissions:create panopoly_page content',
            1 => 'user_default_permissions:delete any panopoly_page content',
            2 => 'user_default_permissions:delete own panopoly_page content',
            3 => 'user_default_permissions:edit any panopoly_page content',
            4 => 'user_default_permissions:edit own panopoly_page content',
          ),
          'features_api' => 
          array (
            0 => 'api:1',
          ),
          'field' => 
          array (
            0 => 'node-panopoly_page-body',
            1 => 'node-panopoly_page-field_featured_categories',
            2 => 'node-panopoly_page-field_featured_image',
            3 => 'node-panopoly_page-field_featured_status',
          ),
          'node' => 
          array (
            0 => 'panopoly_page',
          ),
          'panelizer_defaults' => 
          array (
            0 => 'node:panopoly_page:default',
            1 => 'node:panopoly_page:default:default',
            2 => 'node:panopoly_page:default:featured',
            3 => 'node:panopoly_page:default:teaser',
          ),
          'variable' => 
          array (
            0 => 'additional_settings__active_tab_panopoly_page',
            1 => 'field_bundle_settings_node__panopoly_page',
            2 => 'menu_options_panopoly_page',
            3 => 'menu_parent_panopoly_page',
            4 => 'node_options_panopoly_page',
            5 => 'node_preview_panopoly_page',
            6 => 'node_submitted_panopoly_page',
            7 => 'panelizer_defaults_node_panopoly_page',
            8 => 'panelizer_node:panopoly_page_allowed_layouts_default',
            9 => 'panelizer_node:panopoly_page_allowed_types_default',
            10 => 'save_continue_panopoly_page',
          ),
        ),
        'version' => '7.x-1.0-rc4',
        'datestamp' => '1366630940',
      ),
      'project' => 'panopoly_pages',
      'version' => '7.x-1.0-rc4',
    ),
    'panopoly_search' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/panopoly/panopoly_search/panopoly_search.module',
      'name' => 'panopoly_search',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7004',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Panopoly Search',
        'description' => 'Indexes and searches site content, Solr or otherwise.',
        'core' => '7.x',
        'package' => 'Panopoly',
        'php' => '5.2.4',
        'project' => 'panopoly_search',
        'dependencies' => 
        array (
          0 => 'facetapi',
          1 => 'page_manager',
          2 => 'search',
          3 => 'search_api',
          4 => 'search_api_db',
          5 => 'search_api_facetapi',
          6 => 'search_api_solr',
          7 => 'search_api_views',
          8 => 'strongarm',
          9 => 'views',
          10 => 'views_content',
        ),
        'features' => 
        array (
          'ctools' => 
          array (
            0 => 'facetapi:facetapi_defaults:1',
            1 => 'page_manager:pages_default:1',
            2 => 'strongarm:strongarm:1',
            3 => 'views:views_default:3.0',
          ),
          'facetapi' => 
          array (
            0 => 'search_api@database_node_index:block:author',
            1 => 'search_api@database_node_index:block:created',
            2 => 'search_api@database_node_index:block:search_api_language',
            3 => 'search_api@database_node_index:block:search_api_url',
            4 => 'search_api@database_node_index:block:search_api_viewed',
            5 => 'search_api@database_node_index:block:status',
            6 => 'search_api@database_node_index:block:title',
            7 => 'search_api@database_node_index:block:type',
            8 => 'search_api@database_node_index:block:url',
            9 => 'search_api@node_index:block:author',
            10 => 'search_api@node_index:block:body:summary',
            11 => 'search_api@node_index:block:body:value',
            12 => 'search_api@node_index:block:created',
            13 => 'search_api@node_index:block:field_tags',
            14 => 'search_api@node_index:block:nid',
            15 => 'search_api@node_index:block:search_api_language',
            16 => 'search_api@node_index:block:search_api_url',
            17 => 'search_api@node_index:block:search_api_viewed',
            18 => 'search_api@node_index:block:status',
            19 => 'search_api@node_index:block:title',
            20 => 'search_api@node_index:block:type',
            21 => 'search_api@node_index:block:url',
          ),
          'features_api' => 
          array (
            0 => 'api:1',
          ),
          'page_manager_pages' => 
          array (
            0 => 'panopoly_search',
          ),
          'search_api_index' => 
          array (
            0 => 'database_node_index',
            1 => 'node_index',
          ),
          'search_api_server' => 
          array (
            0 => 'database_server',
            1 => 'solr_server',
          ),
          'variable' => 
          array (
            0 => 'facetapi:block_cache:search_api@database_node_index',
            1 => 'facetapi:block_cache:search_api@node_index',
            2 => 'search_active_modules',
            3 => 'search_api_facets_search_ids',
          ),
          'views_view' => 
          array (
            0 => 'panopoly_database_search',
            1 => 'panopoly_search',
          ),
        ),
        'version' => '7.x-1.0-rc4',
        'datestamp' => '1366630943',
      ),
      'project' => 'panopoly_search',
      'version' => '7.x-1.0-rc4',
    ),
    'panopoly_theme' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/panopoly/panopoly_theme/panopoly_theme.module',
      'name' => 'panopoly_theme',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Panopoly Theme',
        'description' => 'Helps with theming and provides many layouts.',
        'core' => '7.x',
        'package' => 'Panopoly',
        'php' => '5.2.4',
        'project' => 'panopoly_theme',
        'dependencies' => 
        array (
          0 => 'panels',
        ),
        'scripts' => 
        array (
          0 => 'js/panopoly-accordion.js',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'css/panopoly-featured.css',
            1 => 'css/panopoly-accordian.css',
          ),
        ),
        'features' => 
        array (
          'features_api' => 
          array (
            0 => 'api:1',
          ),
        ),
        'version' => '7.x-1.0-rc4',
        'datestamp' => '1366630949',
      ),
      'project' => 'panopoly_theme',
      'version' => '7.x-1.0-rc4',
    ),
    'panopoly_users' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/panopoly/panopoly_users/panopoly_users.module',
      'name' => 'panopoly_users',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Panopoly Users',
        'description' => 'Maintains user accounts and user workflows.',
        'core' => '7.x',
        'package' => 'Panopoly',
        'php' => '5.2.4',
        'project' => 'panopoly_users',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'defaultconfig',
          2 => 'features',
          3 => 'field_group',
          4 => 'image',
          5 => 'panelizer',
          6 => 'page_manager',
          7 => 'pm_existing_pages',
          8 => 'strongarm',
        ),
        'features' => 
        array (
          'ctools' => 
          array (
            0 => 'field_group:field_group:1',
            1 => 'page_manager:pages_default:1',
            2 => 'panelizer:panelizer:1',
            3 => 'pm_existing_pages:pm_existing_pages:1',
            4 => 'strongarm:strongarm:1',
          ),
          'defaultconfig' => 
          array (
            0 => 'strongarm:panelizer_defaults_user_user',
            1 => 'user_default_permissions:administer panelizer user user breadcrumbs',
            2 => 'user_default_permissions:administer panelizer user user content',
            3 => 'user_default_permissions:administer panelizer user user context',
            4 => 'user_default_permissions:administer panelizer user user defaults',
            5 => 'user_default_permissions:administer panelizer user user layout',
            6 => 'user_default_permissions:administer panelizer user user overview',
            7 => 'user_default_permissions:administer panelizer user user settings',
          ),
          'features_api' => 
          array (
            0 => 'api:1',
          ),
          'field' => 
          array (
            0 => 'user-user-field_user_about',
            1 => 'user-user-field_user_picture',
          ),
          'field_group' => 
          array (
            0 => 'group_user_profile|user|user|form',
          ),
          'page_manager_existing_pages' => 
          array (
            0 => 'user_login',
            1 => 'user_password',
            2 => 'user_register',
          ),
          'page_manager_handlers' => 
          array (
            0 => 'pm_existing_pages_user_login_panel_context',
            1 => 'pm_existing_pages_user_password_panel_context',
            2 => 'pm_existing_pages_user_register_panel_context',
            3 => 'user_edit_panel_context',
          ),
          'panelizer_defaults' => 
          array (
            0 => 'user:user:default',
            1 => 'user:user:default:default',
            2 => 'user:user:default:featured',
          ),
          'variable' => 
          array (
            0 => 'page_manager_user_view_disabled',
            1 => 'panelizer_user:user_allowed_layouts_default',
            2 => 'panelizer_user:user_allowed_types_default',
            3 => 'pm_existing_pages_disabled_user_login',
            4 => 'pm_existing_pages_disabled_user_password',
            5 => 'pm_existing_pages_disabled_user_register',
          ),
        ),
        'version' => '7.x-1.0-rc4',
        'datestamp' => '1366630954',
      ),
      'project' => 'panopoly_users',
      'version' => '7.x-1.0-rc4',
    ),
    'panopoly_widgets' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/panopoly/panopoly_widgets/panopoly_widgets.module',
      'name' => 'panopoly_widgets',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7005',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Panopoly Widgets',
        'description' => 'Creates generic widget functionality to customize wide and far.',
        'core' => '7.x',
        'package' => 'Panopoly',
        'php' => '5.2.4',
        'project' => 'panopoly_widgets',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'defaultconfig',
          2 => 'features',
          3 => 'fieldable_panels_panes',
          4 => 'file',
          5 => 'file_entity',
          6 => 'image',
          7 => 'link',
          8 => 'media',
          9 => 'media_vimeo',
          10 => 'media_youtube',
          11 => 'menu_block',
          12 => 'number',
          13 => 'page_manager',
          14 => 'simple_gmap',
          15 => 'tablefield',
          16 => 'text',
          17 => 'views',
          18 => 'views_autocomplete_filters',
          19 => 'views_content',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'panopoly-widgets.css',
          ),
        ),
        'features' => 
        array (
          'ctools' => 
          array (
            0 => 'file_entity:file_default_displays:1',
            1 => 'views:views_default:3.0',
          ),
          'defaultconfig' => 
          array (
            0 => 'user_default_permissions:add media from remote sources',
            1 => 'user_default_permissions:create fieldable basic_file',
            2 => 'user_default_permissions:create fieldable image',
            3 => 'user_default_permissions:create fieldable map',
            4 => 'user_default_permissions:create fieldable quick_links',
            5 => 'user_default_permissions:create fieldable spotlight',
            6 => 'user_default_permissions:create fieldable table',
            7 => 'user_default_permissions:create fieldable text',
            8 => 'user_default_permissions:create fieldable video',
            9 => 'user_default_permissions:delete fieldable basic_file',
            10 => 'user_default_permissions:delete fieldable image',
            11 => 'user_default_permissions:delete fieldable map',
            12 => 'user_default_permissions:delete fieldable quick_links',
            13 => 'user_default_permissions:delete fieldable spotlight',
            14 => 'user_default_permissions:delete fieldable table',
            15 => 'user_default_permissions:delete fieldable text',
            16 => 'user_default_permissions:delete fieldable video',
            17 => 'user_default_permissions:edit fieldable basic_file',
            18 => 'user_default_permissions:edit fieldable image',
            19 => 'user_default_permissions:edit fieldable map',
            20 => 'user_default_permissions:edit fieldable quick_links',
            21 => 'user_default_permissions:edit fieldable spotlight',
            22 => 'user_default_permissions:edit fieldable table',
            23 => 'user_default_permissions:edit fieldable text',
            24 => 'user_default_permissions:edit fieldable video',
          ),
          'features_api' => 
          array (
            0 => 'api:1',
          ),
          'field_base' => 
          array (
            0 => 'field_basic_file_file',
            1 => 'field_basic_file_text',
            2 => 'field_basic_image_caption',
            3 => 'field_basic_image_image',
            4 => 'field_basic_spotlight_items',
            5 => 'field_basic_table_table',
            6 => 'field_basic_text_text',
            7 => 'field_map_address',
            8 => 'field_map_information',
            9 => 'field_quick_links_links',
            10 => 'field_video_file',
          ),
          'field_instance' => 
          array (
            0 => 'fieldable_panels_pane-basic_file-field_basic_file_file',
            1 => 'fieldable_panels_pane-basic_file-field_basic_file_text',
            2 => 'fieldable_panels_pane-image-field_basic_image_caption',
            3 => 'fieldable_panels_pane-image-field_basic_image_image',
            4 => 'fieldable_panels_pane-map-field_map_address',
            5 => 'fieldable_panels_pane-map-field_map_information',
            6 => 'fieldable_panels_pane-quick_links-field_quick_links_links',
            7 => 'fieldable_panels_pane-spotlight-field_basic_spotlight_items',
            8 => 'fieldable_panels_pane-table-field_basic_table_table',
            9 => 'fieldable_panels_pane-text-field_basic_text_text',
            10 => 'fieldable_panels_pane-video-field_video_file',
          ),
          'file_display' => 
          array (
            0 => 'video__link__file_field_file_default',
          ),
          'views_view' => 
          array (
            0 => 'panopoly_widgets_general_content',
          ),
        ),
        'version' => '7.x-1.0-rc4',
        'datestamp' => '1366630958',
      ),
      'project' => 'panopoly_widgets',
      'version' => '7.x-1.0-rc4',
    ),
    'panopoly_wysiwyg' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/panopoly/panopoly_wysiwyg/panopoly_wysiwyg.module',
      'name' => 'panopoly_wysiwyg',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Panopoly WYSIWYG',
        'description' => 'Integrates a WYSIWYG into Drupal.',
        'core' => '7.x',
        'package' => 'Panopoly',
        'php' => '5.2.4',
        'project' => 'panopoly_wysiwyg',
        'dependencies' => 
        array (
          0 => 'caption_filter',
          1 => 'ctools',
          2 => 'defaultconfig',
          3 => 'features',
          4 => 'image_resize_filter',
          5 => 'linkit',
          6 => 'media',
          7 => 'media_internet',
          8 => 'media_vimeo',
          9 => 'media_youtube',
          10 => 'strongarm',
          11 => 'wysiwyg',
          12 => 'wysiwyg_filter',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'panopoly-wysiwyg.css',
          ),
        ),
        'features' => 
        array (
          'ctools' => 
          array (
            0 => 'linkit:linkit_profiles:1',
            1 => 'strongarm:strongarm:1',
          ),
          'defaultconfig' => 
          array (
            0 => 'user_default_permissions:use text format panopoly_html_text',
            1 => 'user_default_permissions:use text format panopoly_wysiwyg_text',
          ),
          'features_api' => 
          array (
            0 => 'api:1',
          ),
          'filter' => 
          array (
            0 => 'panopoly_html_text',
            1 => 'panopoly_wysiwyg_text',
          ),
          'linkit_profiles' => 
          array (
            0 => 'content_editors',
          ),
          'variable' => 
          array (
            0 => 'media__wysiwyg_allowed_types',
            1 => 'media__wysiwyg_browser_plugins',
          ),
          'wysiwyg' => 
          array (
            0 => 'panopoly_html_text',
            1 => 'panopoly_wysiwyg_text',
          ),
        ),
        'version' => '7.x-1.0-rc4',
        'datestamp' => '1366630968',
      ),
      'project' => 'panopoly_wysiwyg',
      'version' => '7.x-1.0-rc4',
    ),
    'path' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/path/path.module',
      'name' => 'path',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Path',
        'description' => 'Allows users to rename URLs.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'path.test',
        ),
        'configure' => 'admin/config/search/path',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'pathauto' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/pathauto/pathauto.module',
      'name' => 'pathauto',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7006',
      'weight' => '1',
      'info' => 
      array (
        'name' => 'Pathauto',
        'description' => 'Provides a mechanism for modules to automatically generate aliases for the content they manage.',
        'dependencies' => 
        array (
          0 => 'path',
          1 => 'token',
        ),
        'core' => '7.x',
        'files' => 
        array (
          0 => 'pathauto.test',
        ),
        'configure' => 'admin/config/search/path/patterns',
        'recommends' => 
        array (
          0 => 'redirect',
        ),
        'version' => '7.x-1.2',
        'project' => 'pathauto',
        'datestamp' => '1344525185',
        'php' => '5.2.4',
      ),
      'project' => 'pathauto',
      'version' => '7.x-1.2',
    ),
    'path_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/path_test.module',
      'name' => 'path_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Hook path tests',
        'description' => 'Support module for path hook testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'php' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/php/php.module',
      'name' => 'php',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'PHP filter',
        'description' => 'Allows embedded PHP code/snippets to be evaluated.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'php.test',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'pm_existing_pages' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/pm_existing_pages/pm_existing_pages.module',
      'name' => 'pm_existing_pages',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Page manager existing pages',
        'description' => 'Provides the ability to override existing pages through Page manager.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'page_manager',
        ),
        'package' => 'Chaos tool suite',
        'version' => '7.x-1.4',
        'project' => 'pm_existing_pages',
        'datestamp' => '1337606183',
        'php' => '5.2.4',
      ),
      'project' => 'pm_existing_pages',
      'version' => '7.x-1.4',
    ),
    'poll' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/poll/poll.module',
      'name' => 'poll',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Poll',
        'description' => 'Allows your site to capture votes on different topics in the form of multiple choice questions.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'poll.test',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'poll.css',
          ),
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'profile' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/profile/profile.module',
      'name' => 'profile',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Profile',
        'description' => 'Supports configurable user profiles.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'profile.test',
        ),
        'configure' => 'admin/config/people/profile',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'psr_0_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/psr_0_test/psr_0_test.module',
      'name' => 'psr_0_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'PSR-0 Test cases',
        'description' => 'Test classes to be discovered by simpletest.',
        'core' => '7.x',
        'hidden' => true,
        'package' => 'Testing',
        'version' => '7.38',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'psr_4_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/psr_4_test/psr_4_test.module',
      'name' => 'psr_4_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'PSR-4 Test cases',
        'description' => 'Test classes to be discovered by simpletest.',
        'core' => '7.x',
        'hidden' => true,
        'package' => 'Testing',
        'version' => '7.38',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'rdf' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/rdf/rdf.module',
      'name' => 'rdf',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'RDF',
        'description' => 'Enriches your content with metadata to let other applications (e.g. search engines, aggregators) better understand its relationships and attributes.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'rdf.test',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'rdf_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/rdf/tests/rdf_test.module',
      'name' => 'rdf_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'RDF module tests',
        'description' => 'Support module for RDF module testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'redirect' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/redirect/redirect.module',
      'name' => 'redirect',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '1',
      'schema_version' => '7102',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Redirect',
        'description' => 'Allows users to redirect from old URLs to new URLs.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'redirect.controller.inc',
          1 => 'redirect.test',
          2 => 'views/redirect.views.inc',
          3 => 'views/redirect_handler_filter_redirect_type.inc',
          4 => 'views/redirect_handler_field_redirect_source.inc',
          5 => 'views/redirect_handler_field_redirect_redirect.inc',
          6 => 'views/redirect_handler_field_redirect_operations.inc',
          7 => 'views/redirect_handler_field_redirect_link_edit.inc',
          8 => 'views/redirect_handler_field_redirect_link_delete.inc',
        ),
        'configure' => 'admin/config/search/redirect/settings',
        'version' => '7.x-1.0-rc3',
        'project' => 'redirect',
        'datestamp' => '1436393342',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'redirect',
      'version' => '7.x-1.0-rc3',
    ),
    'requirements1_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/requirements1_test.module',
      'name' => 'requirements1_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Requirements 1 Test',
        'description' => 'Tests that a module is not installed when it fails hook_requirements(\'install\').',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'requirements2_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/requirements2_test.module',
      'name' => 'requirements2_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Requirements 2 Test',
        'description' => 'Tests that a module is not installed when the one it depends on fails hook_requirements(\'install).',
        'dependencies' => 
        array (
          0 => 'requirements1_test',
          1 => 'comment',
        ),
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'respondjs' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/respondjs/respondjs.module',
      'name' => 'respondjs',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Respond.js',
        'description' => 'Respond.js integration for Drupal',
        'core' => '7.x',
        'package' => 'Responsive',
        'files' => 
        array (
          0 => 'respondjs.module',
          1 => 'respondjs.admin.inc',
        ),
        'version' => '7.x-1.1',
        'project' => 'respondjs',
        'datestamp' => '1331953244',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'respondjs',
      'version' => '7.x-1.1',
    ),
    'save_draft' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/save_draft/save_draft.module',
      'name' => 'save_draft',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Save Draft',
        'description' => 'Adds a \'Save as Draft\' button to content types',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'save_draft.module',
          1 => 'save_draft.test',
        ),
        'version' => '7.x-1.4',
        'project' => 'save_draft',
        'datestamp' => '1303860116',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'save_draft',
      'version' => '7.x-1.4',
    ),
    'search' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/search/search.module',
      'name' => 'search',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7000',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Search',
        'description' => 'Enables site-wide keyword searching.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'search.extender.inc',
          1 => 'search.test',
        ),
        'configure' => 'admin/config/search/settings',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'search.css',
          ),
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'search_api' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/search_api/search_api.module',
      'name' => 'search_api',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7114',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Search API',
        'description' => 'Provides a generic API for modules offering search capabilites.',
        'dependencies' => 
        array (
          0 => 'entity',
        ),
        'core' => '7.x',
        'package' => 'Search',
        'files' => 
        array (
          0 => 'search_api.test',
          1 => 'includes/callback.inc',
          2 => 'includes/callback_add_aggregation.inc',
          3 => 'includes/callback_add_hierarchy.inc',
          4 => 'includes/callback_add_url.inc',
          5 => 'includes/callback_add_viewed_entity.inc',
          6 => 'includes/callback_bundle_filter.inc',
          7 => 'includes/callback_language_control.inc',
          8 => 'includes/callback_node_access.inc',
          9 => 'includes/callback_node_status.inc',
          10 => 'includes/datasource.inc',
          11 => 'includes/datasource_entity.inc',
          12 => 'includes/datasource_external.inc',
          13 => 'includes/exception.inc',
          14 => 'includes/index_entity.inc',
          15 => 'includes/processor.inc',
          16 => 'includes/processor_html_filter.inc',
          17 => 'includes/processor_ignore_case.inc',
          18 => 'includes/processor_stopwords.inc',
          19 => 'includes/processor_tokenizer.inc',
          20 => 'includes/query.inc',
          21 => 'includes/server_entity.inc',
          22 => 'includes/service.inc',
        ),
        'configure' => 'admin/config/search/search_api',
        'version' => '7.x-1.4',
        'project' => 'search_api',
        'datestamp' => '1357726719',
        'php' => '5.2.4',
      ),
      'project' => 'search_api',
      'version' => '7.x-1.4',
    ),
    'search_api_db' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/search_api_db/search_api_db.module',
      'name' => 'search_api_db',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7101',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Database search',
        'description' => 'Offers an implementation of the Search API that uses database tables for indexing content.',
        'dependencies' => 
        array (
          0 => 'search_api',
        ),
        'core' => '7.x',
        'package' => 'Search',
        'files' => 
        array (
          0 => 'search_api_db.test',
          1 => 'service.inc',
        ),
        'version' => '7.x-1.0-beta4',
        'project' => 'search_api_db',
        'datestamp' => '1351629735',
        'php' => '5.2.4',
      ),
      'project' => 'search_api_db',
      'version' => '7.x-1.0-beta4',
    ),
    'search_api_facetapi' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/search_api/contrib/search_api_facetapi/search_api_facetapi.module',
      'name' => 'search_api_facetapi',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Search facets',
        'description' => 'Integrate the Search API with the Facet API to provide facetted searches.',
        'dependencies' => 
        array (
          0 => 'search_api',
          1 => 'facetapi',
        ),
        'core' => '7.x',
        'package' => 'Search',
        'files' => 
        array (
          0 => 'plugins/facetapi/adapter.inc',
          1 => 'plugins/facetapi/query_type_term.inc',
          2 => 'plugins/facetapi/query_type_date.inc',
        ),
        'version' => '7.x-1.4',
        'project' => 'search_api',
        'datestamp' => '1357726719',
        'php' => '5.2.4',
      ),
      'project' => 'search_api',
      'version' => '7.x-1.4',
    ),
    'search_api_solr' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/search_api_solr/search_api_solr.module',
      'name' => 'search_api_solr',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7101',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Solr search',
        'description' => 'Offers an implementation of the Search API that uses an Apache Solr server for indexing content.',
        'dependencies' => 
        array (
          0 => 'search_api',
        ),
        'core' => '7.x',
        'package' => 'Search',
        'files' => 
        array (
          0 => 'service.inc',
          1 => 'solr_connection.inc',
          2 => 'solr_field.inc',
          3 => 'includes/solr_httptransport.inc',
          4 => 'includes/spellcheck.inc',
        ),
        'version' => '7.x-1.0-rc3',
        'project' => 'search_api_solr',
        'datestamp' => '1357517056',
        'php' => '5.2.4',
      ),
      'project' => 'search_api_solr',
      'version' => '7.x-1.0-rc3',
    ),
    'search_api_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/search_api/tests/search_api_test.module',
      'name' => 'search_api_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Search API test',
        'description' => 'Some dummy implementations for testing the Search API.',
        'core' => '7.x',
        'package' => 'Search',
        'dependencies' => 
        array (
          0 => 'search_api',
        ),
        'files' => 
        array (
          0 => 'search_api_test.module',
        ),
        'hidden' => true,
        'version' => '7.x-1.4',
        'project' => 'search_api',
        'datestamp' => '1357726719',
        'php' => '5.2.4',
      ),
      'project' => 'search_api',
      'version' => '7.x-1.4',
    ),
    'search_api_views' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/search_api/contrib/search_api_views/search_api_views.module',
      'name' => 'search_api_views',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7102',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Search views',
        'description' => 'Integrates the Search API with Views, enabling users to create views with searches as filters or arguments.',
        'dependencies' => 
        array (
          0 => 'search_api',
          1 => 'views',
        ),
        'core' => '7.x',
        'package' => 'Search',
        'files' => 
        array (
          0 => 'includes/display_facet_block.inc',
          1 => 'includes/handler_argument.inc',
          2 => 'includes/handler_argument_fulltext.inc',
          3 => 'includes/handler_argument_more_like_this.inc',
          4 => 'includes/handler_argument_text.inc',
          5 => 'includes/handler_filter.inc',
          6 => 'includes/handler_filter_boolean.inc',
          7 => 'includes/handler_filter_date.inc',
          8 => 'includes/handler_filter_fulltext.inc',
          9 => 'includes/handler_filter_language.inc',
          10 => 'includes/handler_filter_options.inc',
          11 => 'includes/handler_filter_text.inc',
          12 => 'includes/handler_sort.inc',
          13 => 'includes/query.inc',
        ),
        'version' => '7.x-1.4',
        'project' => 'search_api',
        'datestamp' => '1357726719',
        'php' => '5.2.4',
      ),
      'project' => 'search_api',
      'version' => '7.x-1.4',
    ),
    'search_embedded_form' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/search/tests/search_embedded_form.module',
      'name' => 'search_embedded_form',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Search embedded form',
        'description' => 'Support module for search module testing of embedded forms.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'search_extra_type' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/search/tests/search_extra_type.module',
      'name' => 'search_extra_type',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Test search type',
        'description' => 'Support module for search module testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'search_highlight' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/search_highlight/search_highlight.module',
      'name' => 'search_highlight',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Search Higlight',
        'description' => 'Hightlight keywords on search results',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => NULL,
    ),
    'search_node_tags' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/search/tests/search_node_tags.module',
      'name' => 'search_node_tags',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Test search node tags',
        'description' => 'Support module for Node search tags testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'session_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/session_test.module',
      'name' => 'session_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Session test',
        'description' => 'Support module for session data testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'shortcut' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/shortcut/shortcut.module',
      'name' => 'shortcut',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Shortcut',
        'description' => 'Allows users to manage customizable lists of shortcut links.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'shortcut.test',
        ),
        'configure' => 'admin/config/user-interface/shortcut',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'simplenews' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/simplenews/simplenews.module',
      'name' => 'simplenews',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7010',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Simplenews',
        'description' => 'Send newsletters to subscribed email addresses.',
        'package' => 'Mail',
        'core' => '7.x',
        'configure' => 'admin/config/services/simplenews',
        'dependencies' => 
        array (
          0 => 'taxonomy',
        ),
        'test_dependencies' => 
        array (
          0 => 'i18n_taxonomy',
        ),
        'files' => 
        array (
          0 => 'tests/simplenews.test',
          1 => 'includes/simplenews.source.inc',
          2 => 'includes/views/handlers/simplenews_handler_field_newsletter_status.inc',
          3 => 'includes/views/handlers/simplenews_handler_field_newsletter_priority.inc',
          4 => 'includes/views/handlers/simplenews_handler_field_category_hyperlinks.inc',
          5 => 'includes/views/handlers/simplenews_handler_field_category_new_account.inc',
          6 => 'includes/views/handlers/simplenews_handler_field_category_opt_inout.inc',
          7 => 'includes/views/handlers/simplenews_handler_field_newsletter_send.inc',
          8 => 'includes/views/handlers/simplenews_handler_filter_newsletter_status.inc',
          9 => 'includes/views/handlers/simplenews_handler_filter_newsletter_priority.inc',
          10 => 'includes/views/handlers/simplenews_handler_filter_category_hyperlinks.inc',
          11 => 'includes/views/handlers/simplenews_handler_filter_category_new_account.inc',
          12 => 'includes/views/handlers/simplenews_handler_filter_category_opt_inout.inc',
        ),
        'version' => '7.x-1.0',
        'project' => 'simplenews',
        'datestamp' => '1347191876',
        'php' => '5.2.4',
      ),
      'project' => 'simplenews',
      'version' => '7.x-1.0',
    ),
    'simplenews_rules' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/simplenews/simplenews_rules/simplenews_rules.module',
      'name' => 'simplenews_rules',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Simplenews rules',
        'description' => 'Provides integration with Rules module for Simplenews.',
        'dependencies' => 
        array (
          0 => 'simplenews',
          1 => 'rules',
        ),
        'package' => 'Mail',
        'core' => '7.x',
        'version' => '7.x-1.0',
        'project' => 'simplenews',
        'datestamp' => '1347191876',
        'php' => '5.2.4',
      ),
      'project' => 'simplenews',
      'version' => '7.x-1.0',
    ),
    'simpletest' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/simpletest.module',
      'name' => 'simpletest',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Testing',
        'description' => 'Provides a framework for unit and functional testing.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'simpletest.test',
          1 => 'drupal_web_test_case.php',
          2 => 'tests/actions.test',
          3 => 'tests/ajax.test',
          4 => 'tests/batch.test',
          5 => 'tests/bootstrap.test',
          6 => 'tests/cache.test',
          7 => 'tests/common.test',
          8 => 'tests/database_test.test',
          9 => 'tests/entity_crud.test',
          10 => 'tests/entity_crud_hook_test.test',
          11 => 'tests/entity_query.test',
          12 => 'tests/error.test',
          13 => 'tests/file.test',
          14 => 'tests/filetransfer.test',
          15 => 'tests/form.test',
          16 => 'tests/graph.test',
          17 => 'tests/image.test',
          18 => 'tests/lock.test',
          19 => 'tests/mail.test',
          20 => 'tests/menu.test',
          21 => 'tests/module.test',
          22 => 'tests/pager.test',
          23 => 'tests/password.test',
          24 => 'tests/path.test',
          25 => 'tests/registry.test',
          26 => 'tests/schema.test',
          27 => 'tests/session.test',
          28 => 'tests/tablesort.test',
          29 => 'tests/theme.test',
          30 => 'tests/unicode.test',
          31 => 'tests/update.test',
          32 => 'tests/xmlrpc.test',
          33 => 'tests/upgrade/upgrade.test',
          34 => 'tests/upgrade/upgrade.comment.test',
          35 => 'tests/upgrade/upgrade.filter.test',
          36 => 'tests/upgrade/upgrade.forum.test',
          37 => 'tests/upgrade/upgrade.locale.test',
          38 => 'tests/upgrade/upgrade.menu.test',
          39 => 'tests/upgrade/upgrade.node.test',
          40 => 'tests/upgrade/upgrade.taxonomy.test',
          41 => 'tests/upgrade/upgrade.trigger.test',
          42 => 'tests/upgrade/upgrade.translatable.test',
          43 => 'tests/upgrade/upgrade.upload.test',
          44 => 'tests/upgrade/upgrade.user.test',
          45 => 'tests/upgrade/update.aggregator.test',
          46 => 'tests/upgrade/update.trigger.test',
          47 => 'tests/upgrade/update.field.test',
          48 => 'tests/upgrade/update.user.test',
        ),
        'configure' => 'admin/config/development/testing/settings',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'simple_gmap' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/simple_gmap/simple_gmap.module',
      'name' => 'simple_gmap',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Simple Google Maps',
        'description' => 'Provides a Google Maps link/map formatter for simple Text fields',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'simple_gmap.module',
        ),
        'version' => '7.x-1.0',
        'project' => 'simple_gmap',
        'datestamp' => '1348681791',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'simple_gmap',
      'version' => '7.x-1.0',
    ),
    'simplified_menu_admin' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/simplified_menu_admin/simplified_menu_admin.module',
      'name' => 'simplified_menu_admin',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Simplified menu administration',
        'description' => 'Simplifies the Menu and Shortcut modules by merging "List links" and "Edit menu" into a single administration page.',
        'core' => '7.x',
        'version' => '7.x-1.0-beta2',
        'project' => 'simplified_menu_admin',
        'datestamp' => '1308938520',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'simplified_menu_admin',
      'version' => '7.x-1.0-beta2',
    ),
    'statistics' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/statistics/statistics.module',
      'name' => 'statistics',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Statistics',
        'description' => 'Logs access statistics for your site.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'statistics.test',
        ),
        'configure' => 'admin/config/system/statistics',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'strongarm' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/strongarm/strongarm.module',
      'name' => 'strongarm',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7201',
      'weight' => '-1000',
      'info' => 
      array (
        'name' => 'Strongarm',
        'description' => 'Enforces variable values defined by modules that need settings set to operate properly.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'files' => 
        array (
          0 => 'strongarm.admin.inc',
          1 => 'strongarm.install',
          2 => 'strongarm.module',
        ),
        'version' => '7.x-2.0',
        'project' => 'strongarm',
        'datestamp' => '1339604214',
        'php' => '5.2.4',
      ),
      'project' => 'strongarm',
      'version' => '7.x-2.0',
    ),
    'stylizer' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/ctools/stylizer/stylizer.module',
      'name' => 'stylizer',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Stylizer',
        'description' => 'Create custom styles for applications such as Panels.',
        'core' => '7.x',
        'package' => 'Chaos tool suite',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'color',
        ),
        'version' => '7.x-1.3',
        'project' => 'ctools',
        'datestamp' => '1365013512',
        'php' => '5.2.4',
      ),
      'project' => 'ctools',
      'version' => '7.x-1.3',
    ),
    'syslog' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/syslog/syslog.module',
      'name' => 'syslog',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Syslog',
        'description' => 'Logs and records system events to syslog.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'syslog.test',
        ),
        'configure' => 'admin/config/development/logging',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'system' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/system/system.module',
      'name' => 'system',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7079',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'System',
        'description' => 'Handles general site configuration for administrators.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'system.archiver.inc',
          1 => 'system.mail.inc',
          2 => 'system.queue.inc',
          3 => 'system.tar.inc',
          4 => 'system.updater.inc',
          5 => 'system.test',
        ),
        'required' => true,
        'configure' => 'admin/config/system',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'system_dependencies_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/system_dependencies_test.module',
      'name' => 'system_dependencies_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'System dependency test',
        'description' => 'Support module for testing system dependencies.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'dependencies' => 
        array (
          0 => '_missing_dependency',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'system_incompatible_core_version_dependencies_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/system_incompatible_core_version_dependencies_test.module',
      'name' => 'system_incompatible_core_version_dependencies_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'System incompatible core version dependencies test',
        'description' => 'Support module for testing system dependencies.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'dependencies' => 
        array (
          0 => 'system_incompatible_core_version_test',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'system_incompatible_core_version_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/system_incompatible_core_version_test.module',
      'name' => 'system_incompatible_core_version_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'System incompatible core version test',
        'description' => 'Support module for testing system dependencies.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '5.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'system_incompatible_module_version_dependencies_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/system_incompatible_module_version_dependencies_test.module',
      'name' => 'system_incompatible_module_version_dependencies_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'System incompatible module version dependencies test',
        'description' => 'Support module for testing system dependencies.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'dependencies' => 
        array (
          0 => 'system_incompatible_module_version_test (>2.0)',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'system_incompatible_module_version_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/system_incompatible_module_version_test.module',
      'name' => 'system_incompatible_module_version_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'System incompatible module version test',
        'description' => 'Support module for testing system dependencies.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'system_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/system_test.module',
      'name' => 'system_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'System test',
        'description' => 'Support module for system testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'system_test.module',
        ),
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'tablefield' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/tablefield/tablefield.module',
      'name' => 'tablefield',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'TableField',
        'description' => 'Defines a generic tablular data field.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'tablefield.css',
          1 => 'tablefield.module',
          2 => 'tablefield.install',
        ),
        'version' => '7.x-2.1',
        'project' => 'tablefield',
        'datestamp' => '1355435674',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'tablefield',
      'version' => '7.x-2.1',
    ),
    'taxonomy' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/taxonomy/taxonomy.module',
      'name' => 'taxonomy',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7011',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Taxonomy',
        'description' => 'Enables the categorization of content.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'options',
        ),
        'files' => 
        array (
          0 => 'taxonomy.module',
          1 => 'taxonomy.test',
        ),
        'configure' => 'admin/structure/taxonomy',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'taxonomy_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/taxonomy_test.module',
      'name' => 'taxonomy_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Taxonomy test module',
        'description' => '"Tests functions and hooks not used in core".',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'dependencies' => 
        array (
          0 => 'taxonomy',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'text' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/field/modules/text/text.module',
      'name' => 'text',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7000',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Text',
        'description' => 'Defines simple text field types.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
        ),
        'files' => 
        array (
          0 => 'text.test',
        ),
        'required' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'theme_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/theme_test.module',
      'name' => 'theme_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Theme test',
        'description' => 'Support module for theme system testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'token' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/token/token.module',
      'name' => 'token',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Token',
        'description' => 'Provides a user interface for the Token API and some missing core tokens.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'token.test',
        ),
        'version' => '7.x-1.5',
        'project' => 'token',
        'datestamp' => '1361665026',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'token',
      'version' => '7.x-1.5',
    ),
    'token_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/token/tests/token_test.module',
      'name' => 'token_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Token Test',
        'description' => 'Testing module for token functionality.',
        'package' => 'Testing',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'token_test.module',
        ),
        'hidden' => true,
        'version' => '7.x-1.5',
        'project' => 'token',
        'datestamp' => '1361665026',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'token',
      'version' => '7.x-1.5',
    ),
    'toolbar' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/toolbar/toolbar.module',
      'name' => 'toolbar',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Toolbar',
        'description' => 'Provides a toolbar that shows the top-level administration menu items and links from other modules.',
        'core' => '7.x',
        'package' => 'Core',
        'version' => '7.38',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'tracker' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/tracker/tracker.module',
      'name' => 'tracker',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Tracker',
        'description' => 'Enables tracking of recent content for users.',
        'dependencies' => 
        array (
          0 => 'comment',
        ),
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'tracker.test',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'translation' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/translation/translation.module',
      'name' => 'translation',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Content translation',
        'description' => 'Allows content to be translated into different languages.',
        'dependencies' => 
        array (
          0 => 'locale',
        ),
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'translation.test',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'translation_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/translation/tests/translation_test.module',
      'name' => 'translation_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Content Translation Test',
        'description' => 'Support module for the content translation tests.',
        'core' => '7.x',
        'package' => 'Testing',
        'version' => '7.38',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'trigger' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/trigger/trigger.module',
      'name' => 'trigger',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Trigger',
        'description' => 'Enables actions to be fired on certain system events, such as when new content is created.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'trigger.test',
        ),
        'configure' => 'admin/structure/trigger',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'trigger_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/trigger/tests/trigger_test.module',
      'name' => 'trigger_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Trigger Test',
        'description' => 'Support module for Trigger tests.',
        'package' => 'Testing',
        'core' => '7.x',
        'hidden' => true,
        'version' => '7.38',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'update' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/update/update.module',
      'name' => 'update',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Update manager',
        'description' => 'Checks for available updates, and can securely install or update modules and themes via a web interface.',
        'version' => '7.38',
        'package' => 'Core',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'update.test',
        ),
        'configure' => 'admin/reports/updates/settings',
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'update_script_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/update_script_test.module',
      'name' => 'update_script_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Update script test',
        'description' => 'Support module for update script testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'update_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/update/tests/update_test.module',
      'name' => 'update_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Update test',
        'description' => 'Support module for update module testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'update_test_1' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/update_test_1.module',
      'name' => 'update_test_1',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Update test',
        'description' => 'Support module for update testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'update_test_2' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/update_test_2.module',
      'name' => 'update_test_2',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Update test',
        'description' => 'Support module for update testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'update_test_3' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/update_test_3.module',
      'name' => 'update_test_3',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Update test',
        'description' => 'Support module for update testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'url_alter_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/url_alter_test.module',
      'name' => 'url_alter_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Url_alter tests',
        'description' => 'A support modules for url_alter hook testing.',
        'core' => '7.x',
        'package' => 'Testing',
        'version' => '7.38',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'user' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/user/user.module',
      'name' => 'user',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7018',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'User',
        'description' => 'Manages the user registration and login system.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'user.module',
          1 => 'user.test',
        ),
        'required' => true,
        'configure' => 'admin/config/people',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'user.css',
          ),
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'user_form_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/user/tests/user_form_test.module',
      'name' => 'user_form_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'User module form tests',
        'description' => 'Support module for user form testing.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'uuid' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/uuid/uuid.module',
      'name' => 'uuid',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7102',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Universally Unique ID',
        'description' => 'Extends the entity functionality and adds support for universally unique identifiers.',
        'core' => '7.x',
        'package' => 'UUID',
        'configure' => 'admin/config/system/uuid',
        'files' => 
        array (
          0 => 'uuid.test',
        ),
        'version' => '7.x-1.0-alpha3+47-dev',
        'project' => 'uuid',
        'datestamp' => '1366645541',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'uuid',
      'version' => '7.x-1.0-alpha3+47-dev',
    ),
    'uuid_default_entities_example' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/uuid/uuid_default_entities_example/uuid_default_entities_example.module',
      'name' => 'uuid_default_entities_example',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'entity',
          1 => 'features',
          2 => 'uuid',
        ),
        'description' => 'Example feature mainly used for testing.',
        'features' => 
        array (
          'uuid_entities' => 
          array (
            0 => 'deploy_example_plan',
          ),
        ),
        'name' => 'UUID default entities example',
        'package' => 'Features',
        'version' => '7.x-1.0-alpha3+47-dev',
        'project' => 'uuid',
        'datestamp' => '1366645541',
        'php' => '5.2.4',
      ),
      'project' => 'uuid',
      'version' => '7.x-1.0-alpha3+47-dev',
    ),
    'uuid_path' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/uuid/uuid_path/uuid_path.module',
      'name' => 'uuid_path',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'UUID Path',
        'description' => 'Provides export functionality for url aliases and menu links.',
        'core' => '7.x',
        'package' => 'UUID',
        'dependencies' => 
        array (
          0 => 'uuid',
        ),
        'version' => '7.x-1.0-alpha3+47-dev',
        'project' => 'uuid',
        'datestamp' => '1366645541',
        'php' => '5.2.4',
      ),
      'project' => 'uuid',
      'version' => '7.x-1.0-alpha3+47-dev',
    ),
    'uuid_services' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/uuid/uuid_services/uuid_services.module',
      'name' => 'uuid_services',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'UUID Services',
        'description' => 'Provides integration with the Services module, like exposing a UUID entity resource.',
        'core' => '7.x',
        'package' => 'Services - resources',
        'dependencies' => 
        array (
          0 => 'services',
          1 => 'uuid',
          2 => 'entity',
        ),
        'version' => '7.x-1.0-alpha3+47-dev',
        'project' => 'uuid',
        'datestamp' => '1366645541',
        'php' => '5.2.4',
      ),
      'project' => 'uuid',
      'version' => '7.x-1.0-alpha3+47-dev',
    ),
    'uuid_services_example' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/uuid/uuid_services_example/uuid_services_example.module',
      'name' => 'uuid_services_example',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'rest_server',
          1 => 'services',
          2 => 'uuid',
          3 => 'uuid_services',
        ),
        'description' => 'Example feature of a UUID service. Works well with the Deploy Example feature as a client.',
        'features' => 
        array (
          'ctools' => 
          array (
            0 => 'services:services:3',
          ),
          'services_endpoint' => 
          array (
            0 => 'uuid_services_example',
          ),
        ),
        'name' => 'UUID Services Example',
        'package' => 'Features',
        'version' => '7.x-1.0-alpha3+47-dev',
        'project' => 'uuid',
        'datestamp' => '1366645541',
        'php' => '5.2.4',
      ),
      'project' => 'uuid',
      'version' => '7.x-1.0-alpha3+47-dev',
    ),
    'views' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/views/views.module',
      'name' => 'views',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7301',
      'weight' => '10',
      'info' => 
      array (
        'name' => 'Views',
        'description' => 'Create customized lists and queries from your database.',
        'package' => 'Views',
        'core' => '7.x',
        'php' => '5.2',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'css/views.css',
          ),
        ),
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'files' => 
        array (
          0 => 'handlers/views_handler_area.inc',
          1 => 'handlers/views_handler_area_result.inc',
          2 => 'handlers/views_handler_area_text.inc',
          3 => 'handlers/views_handler_area_text_custom.inc',
          4 => 'handlers/views_handler_area_view.inc',
          5 => 'handlers/views_handler_argument.inc',
          6 => 'handlers/views_handler_argument_date.inc',
          7 => 'handlers/views_handler_argument_formula.inc',
          8 => 'handlers/views_handler_argument_many_to_one.inc',
          9 => 'handlers/views_handler_argument_null.inc',
          10 => 'handlers/views_handler_argument_numeric.inc',
          11 => 'handlers/views_handler_argument_string.inc',
          12 => 'handlers/views_handler_argument_group_by_numeric.inc',
          13 => 'handlers/views_handler_field.inc',
          14 => 'handlers/views_handler_field_counter.inc',
          15 => 'handlers/views_handler_field_boolean.inc',
          16 => 'handlers/views_handler_field_contextual_links.inc',
          17 => 'handlers/views_handler_field_custom.inc',
          18 => 'handlers/views_handler_field_date.inc',
          19 => 'handlers/views_handler_field_entity.inc',
          20 => 'handlers/views_handler_field_markup.inc',
          21 => 'handlers/views_handler_field_math.inc',
          22 => 'handlers/views_handler_field_numeric.inc',
          23 => 'handlers/views_handler_field_prerender_list.inc',
          24 => 'handlers/views_handler_field_time_interval.inc',
          25 => 'handlers/views_handler_field_serialized.inc',
          26 => 'handlers/views_handler_field_machine_name.inc',
          27 => 'handlers/views_handler_field_url.inc',
          28 => 'handlers/views_handler_filter.inc',
          29 => 'handlers/views_handler_filter_boolean_operator.inc',
          30 => 'handlers/views_handler_filter_boolean_operator_string.inc',
          31 => 'handlers/views_handler_filter_combine.inc',
          32 => 'handlers/views_handler_filter_date.inc',
          33 => 'handlers/views_handler_filter_equality.inc',
          34 => 'handlers/views_handler_filter_entity_bundle.inc',
          35 => 'handlers/views_handler_filter_group_by_numeric.inc',
          36 => 'handlers/views_handler_filter_in_operator.inc',
          37 => 'handlers/views_handler_filter_many_to_one.inc',
          38 => 'handlers/views_handler_filter_numeric.inc',
          39 => 'handlers/views_handler_filter_string.inc',
          40 => 'handlers/views_handler_relationship.inc',
          41 => 'handlers/views_handler_relationship_groupwise_max.inc',
          42 => 'handlers/views_handler_sort.inc',
          43 => 'handlers/views_handler_sort_date.inc',
          44 => 'handlers/views_handler_sort_formula.inc',
          45 => 'handlers/views_handler_sort_group_by_numeric.inc',
          46 => 'handlers/views_handler_sort_menu_hierarchy.inc',
          47 => 'handlers/views_handler_sort_random.inc',
          48 => 'includes/base.inc',
          49 => 'includes/handlers.inc',
          50 => 'includes/plugins.inc',
          51 => 'includes/view.inc',
          52 => 'modules/aggregator/views_handler_argument_aggregator_fid.inc',
          53 => 'modules/aggregator/views_handler_argument_aggregator_iid.inc',
          54 => 'modules/aggregator/views_handler_argument_aggregator_category_cid.inc',
          55 => 'modules/aggregator/views_handler_field_aggregator_title_link.inc',
          56 => 'modules/aggregator/views_handler_field_aggregator_category.inc',
          57 => 'modules/aggregator/views_handler_field_aggregator_item_description.inc',
          58 => 'modules/aggregator/views_handler_field_aggregator_xss.inc',
          59 => 'modules/aggregator/views_handler_filter_aggregator_category_cid.inc',
          60 => 'modules/aggregator/views_plugin_row_aggregator_rss.inc',
          61 => 'modules/book/views_plugin_argument_default_book_root.inc',
          62 => 'modules/comment/views_handler_argument_comment_user_uid.inc',
          63 => 'modules/comment/views_handler_field_comment.inc',
          64 => 'modules/comment/views_handler_field_comment_depth.inc',
          65 => 'modules/comment/views_handler_field_comment_link.inc',
          66 => 'modules/comment/views_handler_field_comment_link_approve.inc',
          67 => 'modules/comment/views_handler_field_comment_link_delete.inc',
          68 => 'modules/comment/views_handler_field_comment_link_edit.inc',
          69 => 'modules/comment/views_handler_field_comment_link_reply.inc',
          70 => 'modules/comment/views_handler_field_comment_node_link.inc',
          71 => 'modules/comment/views_handler_field_comment_username.inc',
          72 => 'modules/comment/views_handler_field_ncs_last_comment_name.inc',
          73 => 'modules/comment/views_handler_field_ncs_last_updated.inc',
          74 => 'modules/comment/views_handler_field_node_comment.inc',
          75 => 'modules/comment/views_handler_field_node_new_comments.inc',
          76 => 'modules/comment/views_handler_field_last_comment_timestamp.inc',
          77 => 'modules/comment/views_handler_filter_comment_user_uid.inc',
          78 => 'modules/comment/views_handler_filter_ncs_last_updated.inc',
          79 => 'modules/comment/views_handler_filter_node_comment.inc',
          80 => 'modules/comment/views_handler_sort_comment_thread.inc',
          81 => 'modules/comment/views_handler_sort_ncs_last_comment_name.inc',
          82 => 'modules/comment/views_handler_sort_ncs_last_updated.inc',
          83 => 'modules/comment/views_plugin_row_comment_rss.inc',
          84 => 'modules/comment/views_plugin_row_comment_view.inc',
          85 => 'modules/contact/views_handler_field_contact_link.inc',
          86 => 'modules/field/views_handler_field_field.inc',
          87 => 'modules/field/views_handler_relationship_entity_reverse.inc',
          88 => 'modules/field/views_handler_argument_field_list.inc',
          89 => 'modules/field/views_handler_argument_field_list_string.inc',
          90 => 'modules/field/views_handler_filter_field_list.inc',
          91 => 'modules/filter/views_handler_field_filter_format_name.inc',
          92 => 'modules/locale/views_handler_field_node_language.inc',
          93 => 'modules/locale/views_handler_filter_node_language.inc',
          94 => 'modules/locale/views_handler_argument_locale_group.inc',
          95 => 'modules/locale/views_handler_argument_locale_language.inc',
          96 => 'modules/locale/views_handler_field_locale_group.inc',
          97 => 'modules/locale/views_handler_field_locale_language.inc',
          98 => 'modules/locale/views_handler_field_locale_link_edit.inc',
          99 => 'modules/locale/views_handler_filter_locale_group.inc',
          100 => 'modules/locale/views_handler_filter_locale_language.inc',
          101 => 'modules/locale/views_handler_filter_locale_version.inc',
          102 => 'modules/node/views_handler_argument_dates_various.inc',
          103 => 'modules/node/views_handler_argument_node_language.inc',
          104 => 'modules/node/views_handler_argument_node_nid.inc',
          105 => 'modules/node/views_handler_argument_node_type.inc',
          106 => 'modules/node/views_handler_argument_node_vid.inc',
          107 => 'modules/node/views_handler_argument_node_uid_revision.inc',
          108 => 'modules/node/views_handler_field_history_user_timestamp.inc',
          109 => 'modules/node/views_handler_field_node.inc',
          110 => 'modules/node/views_handler_field_node_link.inc',
          111 => 'modules/node/views_handler_field_node_link_delete.inc',
          112 => 'modules/node/views_handler_field_node_link_edit.inc',
          113 => 'modules/node/views_handler_field_node_revision.inc',
          114 => 'modules/node/views_handler_field_node_revision_link.inc',
          115 => 'modules/node/views_handler_field_node_revision_link_delete.inc',
          116 => 'modules/node/views_handler_field_node_revision_link_revert.inc',
          117 => 'modules/node/views_handler_field_node_path.inc',
          118 => 'modules/node/views_handler_field_node_type.inc',
          119 => 'modules/node/views_handler_filter_history_user_timestamp.inc',
          120 => 'modules/node/views_handler_filter_node_access.inc',
          121 => 'modules/node/views_handler_filter_node_status.inc',
          122 => 'modules/node/views_handler_filter_node_type.inc',
          123 => 'modules/node/views_handler_filter_node_uid_revision.inc',
          124 => 'modules/node/views_plugin_argument_default_node.inc',
          125 => 'modules/node/views_plugin_argument_validate_node.inc',
          126 => 'modules/node/views_plugin_row_node_rss.inc',
          127 => 'modules/node/views_plugin_row_node_view.inc',
          128 => 'modules/profile/views_handler_field_profile_date.inc',
          129 => 'modules/profile/views_handler_field_profile_list.inc',
          130 => 'modules/profile/views_handler_filter_profile_selection.inc',
          131 => 'modules/search/views_handler_argument_search.inc',
          132 => 'modules/search/views_handler_field_search_score.inc',
          133 => 'modules/search/views_handler_filter_search.inc',
          134 => 'modules/search/views_handler_sort_search_score.inc',
          135 => 'modules/search/views_plugin_row_search_view.inc',
          136 => 'modules/statistics/views_handler_field_accesslog_path.inc',
          137 => 'modules/system/views_handler_argument_file_fid.inc',
          138 => 'modules/system/views_handler_field_file.inc',
          139 => 'modules/system/views_handler_field_file_extension.inc',
          140 => 'modules/system/views_handler_field_file_filemime.inc',
          141 => 'modules/system/views_handler_field_file_uri.inc',
          142 => 'modules/system/views_handler_field_file_status.inc',
          143 => 'modules/system/views_handler_filter_file_status.inc',
          144 => 'modules/taxonomy/views_handler_argument_taxonomy.inc',
          145 => 'modules/taxonomy/views_handler_argument_term_node_tid.inc',
          146 => 'modules/taxonomy/views_handler_argument_term_node_tid_depth.inc',
          147 => 'modules/taxonomy/views_handler_argument_term_node_tid_depth_modifier.inc',
          148 => 'modules/taxonomy/views_handler_argument_vocabulary_vid.inc',
          149 => 'modules/taxonomy/views_handler_argument_vocabulary_machine_name.inc',
          150 => 'modules/taxonomy/views_handler_field_taxonomy.inc',
          151 => 'modules/taxonomy/views_handler_field_term_node_tid.inc',
          152 => 'modules/taxonomy/views_handler_field_term_link_edit.inc',
          153 => 'modules/taxonomy/views_handler_filter_term_node_tid.inc',
          154 => 'modules/taxonomy/views_handler_filter_term_node_tid_depth.inc',
          155 => 'modules/taxonomy/views_handler_filter_vocabulary_vid.inc',
          156 => 'modules/taxonomy/views_handler_filter_vocabulary_machine_name.inc',
          157 => 'modules/taxonomy/views_handler_relationship_node_term_data.inc',
          158 => 'modules/taxonomy/views_plugin_argument_validate_taxonomy_term.inc',
          159 => 'modules/taxonomy/views_plugin_argument_default_taxonomy_tid.inc',
          160 => 'modules/tracker/views_handler_argument_tracker_comment_user_uid.inc',
          161 => 'modules/tracker/views_handler_filter_tracker_comment_user_uid.inc',
          162 => 'modules/tracker/views_handler_filter_tracker_boolean_operator.inc',
          163 => 'modules/system/views_handler_filter_system_type.inc',
          164 => 'modules/translation/views_handler_argument_node_tnid.inc',
          165 => 'modules/translation/views_handler_field_node_link_translate.inc',
          166 => 'modules/translation/views_handler_field_node_translation_link.inc',
          167 => 'modules/translation/views_handler_filter_node_tnid.inc',
          168 => 'modules/translation/views_handler_filter_node_tnid_child.inc',
          169 => 'modules/translation/views_handler_relationship_translation.inc',
          170 => 'modules/user/views_handler_argument_user_uid.inc',
          171 => 'modules/user/views_handler_argument_users_roles_rid.inc',
          172 => 'modules/user/views_handler_field_user.inc',
          173 => 'modules/user/views_handler_field_user_language.inc',
          174 => 'modules/user/views_handler_field_user_link.inc',
          175 => 'modules/user/views_handler_field_user_link_cancel.inc',
          176 => 'modules/user/views_handler_field_user_link_edit.inc',
          177 => 'modules/user/views_handler_field_user_mail.inc',
          178 => 'modules/user/views_handler_field_user_name.inc',
          179 => 'modules/user/views_handler_field_user_permissions.inc',
          180 => 'modules/user/views_handler_field_user_picture.inc',
          181 => 'modules/user/views_handler_field_user_roles.inc',
          182 => 'modules/user/views_handler_filter_user_current.inc',
          183 => 'modules/user/views_handler_filter_user_name.inc',
          184 => 'modules/user/views_handler_filter_user_permissions.inc',
          185 => 'modules/user/views_handler_filter_user_roles.inc',
          186 => 'modules/user/views_plugin_argument_default_current_user.inc',
          187 => 'modules/user/views_plugin_argument_default_user.inc',
          188 => 'modules/user/views_plugin_argument_validate_user.inc',
          189 => 'modules/user/views_plugin_row_user_view.inc',
          190 => 'plugins/views_plugin_access.inc',
          191 => 'plugins/views_plugin_access_none.inc',
          192 => 'plugins/views_plugin_access_perm.inc',
          193 => 'plugins/views_plugin_access_role.inc',
          194 => 'plugins/views_plugin_argument_default.inc',
          195 => 'plugins/views_plugin_argument_default_php.inc',
          196 => 'plugins/views_plugin_argument_default_fixed.inc',
          197 => 'plugins/views_plugin_argument_default_raw.inc',
          198 => 'plugins/views_plugin_argument_validate.inc',
          199 => 'plugins/views_plugin_argument_validate_numeric.inc',
          200 => 'plugins/views_plugin_argument_validate_php.inc',
          201 => 'plugins/views_plugin_cache.inc',
          202 => 'plugins/views_plugin_cache_none.inc',
          203 => 'plugins/views_plugin_cache_time.inc',
          204 => 'plugins/views_plugin_display.inc',
          205 => 'plugins/views_plugin_display_attachment.inc',
          206 => 'plugins/views_plugin_display_block.inc',
          207 => 'plugins/views_plugin_display_default.inc',
          208 => 'plugins/views_plugin_display_embed.inc',
          209 => 'plugins/views_plugin_display_extender.inc',
          210 => 'plugins/views_plugin_display_feed.inc',
          211 => 'plugins/views_plugin_display_page.inc',
          212 => 'plugins/views_plugin_exposed_form_basic.inc',
          213 => 'plugins/views_plugin_exposed_form.inc',
          214 => 'plugins/views_plugin_exposed_form_input_required.inc',
          215 => 'plugins/views_plugin_localization_core.inc',
          216 => 'plugins/views_plugin_localization.inc',
          217 => 'plugins/views_plugin_localization_none.inc',
          218 => 'plugins/views_plugin_pager.inc',
          219 => 'plugins/views_plugin_pager_full.inc',
          220 => 'plugins/views_plugin_pager_mini.inc',
          221 => 'plugins/views_plugin_pager_none.inc',
          222 => 'plugins/views_plugin_pager_some.inc',
          223 => 'plugins/views_plugin_query.inc',
          224 => 'plugins/views_plugin_query_default.inc',
          225 => 'plugins/views_plugin_row.inc',
          226 => 'plugins/views_plugin_row_fields.inc',
          227 => 'plugins/views_plugin_row_rss_fields.inc',
          228 => 'plugins/views_plugin_style.inc',
          229 => 'plugins/views_plugin_style_default.inc',
          230 => 'plugins/views_plugin_style_grid.inc',
          231 => 'plugins/views_plugin_style_list.inc',
          232 => 'plugins/views_plugin_style_jump_menu.inc',
          233 => 'plugins/views_plugin_style_mapping.inc',
          234 => 'plugins/views_plugin_style_rss.inc',
          235 => 'plugins/views_plugin_style_summary.inc',
          236 => 'plugins/views_plugin_style_summary_jump_menu.inc',
          237 => 'plugins/views_plugin_style_summary_unformatted.inc',
          238 => 'plugins/views_plugin_style_table.inc',
          239 => 'tests/handlers/views_handler_area_text.test',
          240 => 'tests/handlers/views_handler_argument_null.test',
          241 => 'tests/handlers/views_handler_argument_string.test',
          242 => 'tests/handlers/views_handler_field.test',
          243 => 'tests/handlers/views_handler_field_boolean.test',
          244 => 'tests/handlers/views_handler_field_custom.test',
          245 => 'tests/handlers/views_handler_field_counter.test',
          246 => 'tests/handlers/views_handler_field_date.test',
          247 => 'tests/handlers/views_handler_field_file_size.test',
          248 => 'tests/handlers/views_handler_field_math.test',
          249 => 'tests/handlers/views_handler_field_url.test',
          250 => 'tests/handlers/views_handler_field_xss.test',
          251 => 'tests/handlers/views_handler_filter_combine.test',
          252 => 'tests/handlers/views_handler_filter_date.test',
          253 => 'tests/handlers/views_handler_filter_equality.test',
          254 => 'tests/handlers/views_handler_filter_in_operator.test',
          255 => 'tests/handlers/views_handler_filter_numeric.test',
          256 => 'tests/handlers/views_handler_filter_string.test',
          257 => 'tests/handlers/views_handler_sort_random.test',
          258 => 'tests/handlers/views_handler_sort_date.test',
          259 => 'tests/handlers/views_handler_sort.test',
          260 => 'tests/test_plugins/views_test_plugin_access_test_dynamic.inc',
          261 => 'tests/test_plugins/views_test_plugin_access_test_static.inc',
          262 => 'tests/test_plugins/views_test_plugin_style_test_mapping.inc',
          263 => 'tests/plugins/views_plugin_display.test',
          264 => 'tests/styles/views_plugin_style_jump_menu.test',
          265 => 'tests/styles/views_plugin_style.test',
          266 => 'tests/styles/views_plugin_style_base.test',
          267 => 'tests/styles/views_plugin_style_mapping.test',
          268 => 'tests/styles/views_plugin_style_unformatted.test',
          269 => 'tests/views_access.test',
          270 => 'tests/views_analyze.test',
          271 => 'tests/views_basic.test',
          272 => 'tests/views_argument_default.test',
          273 => 'tests/views_argument_validator.test',
          274 => 'tests/views_exposed_form.test',
          275 => 'tests/field/views_fieldapi.test',
          276 => 'tests/views_glossary.test',
          277 => 'tests/views_groupby.test',
          278 => 'tests/views_handlers.test',
          279 => 'tests/views_module.test',
          280 => 'tests/views_pager.test',
          281 => 'tests/views_plugin_localization_test.inc',
          282 => 'tests/views_translatable.test',
          283 => 'tests/views_query.test',
          284 => 'tests/views_upgrade.test',
          285 => 'tests/views_test.views_default.inc',
          286 => 'tests/comment/views_handler_argument_comment_user_uid.test',
          287 => 'tests/comment/views_handler_filter_comment_user_uid.test',
          288 => 'tests/node/views_node_revision_relations.test',
          289 => 'tests/taxonomy/views_handler_relationship_node_term_data.test',
          290 => 'tests/user/views_handler_field_user_name.test',
          291 => 'tests/user/views_user_argument_default.test',
          292 => 'tests/user/views_user_argument_validate.test',
          293 => 'tests/user/views_user.test',
          294 => 'tests/views_cache.test',
          295 => 'tests/views_view.test',
          296 => 'tests/views_ui.test',
        ),
        'version' => '7.x-3.7',
        'project' => 'views',
        'datestamp' => '1365499236',
      ),
      'project' => 'views',
      'version' => '7.x-3.7',
    ),
    'views_autocomplete_filters' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/views_autocomplete_filters/views_autocomplete_filters.module',
      'name' => 'views_autocomplete_filters',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views Autocomplete Filters',
        'description' => 'Views Autocomplete Filters',
        'package' => 'Views',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'views',
        ),
        'files' => 
        array (
          0 => 'views_autocomplete_filters.module',
          1 => 'views_autocomplete_filters.views.inc',
          2 => 'views_autocomplete_filters_handler_filter_string.inc',
        ),
        'version' => '7.x-1.0-beta2',
        'project' => 'views_autocomplete_filters',
        'datestamp' => '1357634964',
        'php' => '5.2.4',
      ),
      'project' => 'views_autocomplete_filters',
      'version' => '7.x-1.0-beta2',
    ),
    'views_bulk_operations' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/views_bulk_operations/views_bulk_operations.module',
      'name' => 'views_bulk_operations',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views Bulk Operations',
        'description' => 'Provides a way of selecting multiple rows and applying operations to them.',
        'dependencies' => 
        array (
          0 => 'entity',
          1 => 'views',
        ),
        'package' => 'Views',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'plugins/operation_types/base.class.php',
          1 => 'views/views_bulk_operations_handler_field_operations.inc',
        ),
        'version' => '7.x-3.1',
        'project' => 'views_bulk_operations',
        'datestamp' => '1354500015',
        'php' => '5.2.4',
      ),
      'project' => 'views_bulk_operations',
      'version' => '7.x-3.1',
    ),
    'views_content' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/ctools/views_content/views_content.module',
      'name' => 'views_content',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views content panes',
        'description' => 'Allows Views content to be used in Panels, Dashboard and other modules which use the CTools Content API.',
        'package' => 'Chaos tool suite',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'views',
        ),
        'core' => '7.x',
        'files' => 
        array (
          0 => 'plugins/views/views_content_plugin_display_ctools_context.inc',
          1 => 'plugins/views/views_content_plugin_display_panel_pane.inc',
          2 => 'plugins/views/views_content_plugin_style_ctools_context.inc',
        ),
        'version' => '7.x-1.3',
        'project' => 'ctools',
        'datestamp' => '1365013512',
        'php' => '5.2.4',
      ),
      'project' => 'ctools',
      'version' => '7.x-1.3',
    ),
    'views_isotope' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod',
      'name' => 'views_isotope',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'dependencies' => 
        array (
        ),
        'description' => '',
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => NULL,
    ),
    'views_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/views/tests/views_test.module',
      'name' => 'views_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views Test',
        'description' => 'Test module for Views.',
        'package' => 'Views',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'views',
        ),
        'hidden' => true,
        'version' => '7.x-3.7',
        'project' => 'views',
        'datestamp' => '1365499236',
        'php' => '5.2.4',
      ),
      'project' => 'views',
      'version' => '7.x-3.7',
    ),
    'views_ui' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/views/views_ui.module',
      'name' => 'views_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views UI',
        'description' => 'Administrative interface to views. Without this module, you cannot create or edit your views.',
        'package' => 'Views',
        'core' => '7.x',
        'configure' => 'admin/structure/views',
        'dependencies' => 
        array (
          0 => 'views',
        ),
        'files' => 
        array (
          0 => 'views_ui.module',
          1 => 'plugins/views_wizard/views_ui_base_views_wizard.class.php',
        ),
        'version' => '7.x-3.7',
        'project' => 'views',
        'datestamp' => '1365499236',
        'php' => '5.2.4',
      ),
      'project' => 'views',
      'version' => '7.x-3.7',
    ),
    'view_modifier' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/modules/view_modifier/view_modifier.module',
      'name' => 'view_modifier',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'View SQL alter',
        'description' => 'Modify a View SQL to add custom features',
        'dependencies' => 
        array (
          0 => 'views',
        ),
        'version' => '7.x-1.0',
        'core' => '7.x',
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.x-1.0',
    ),
    'wysiwyg' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/wysiwyg/wysiwyg.module',
      'name' => 'wysiwyg',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7200',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Wysiwyg',
        'description' => 'Allows to edit content with client-side editors.',
        'package' => 'User interface',
        'core' => '7.x',
        'configure' => 'admin/config/content/wysiwyg',
        'files' => 
        array (
          0 => 'wysiwyg.module',
          1 => 'tests/wysiwyg.test',
        ),
        'version' => '7.x-2.2',
        'project' => 'wysiwyg',
        'datestamp' => '1349213776',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'wysiwyg',
      'version' => '7.x-2.2',
    ),
    'wysiwyg_filter' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/wysiwyg_filter/wysiwyg_filter.module',
      'name' => 'wysiwyg_filter',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'WYSIWYG Filter',
        'description' => 'Provides an input filter that allows site administrators configure which HTML elements, attributes and style properties are allowed.',
        'package' => 'Input filters',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'wysiwyg_filter.admin.inc',
          1 => 'wysiwyg_filter.inc',
          2 => 'wysiwyg_filter.install',
          3 => 'wysiwyg_filter.module',
          4 => 'wysiwyg_filter.pages.inc',
        ),
        'version' => '7.x-1.6-rc2',
        'project' => 'wysiwyg_filter',
        'datestamp' => '1310326321',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'wysiwyg_filter',
      'version' => '7.x-1.6-rc2',
    ),
    'wysiwyg_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/modules/contrib/wysiwyg/tests/wysiwyg_test.module',
      'name' => 'wysiwyg_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Wysiwyg testing',
        'description' => 'Tests Wysiwyg module functionality. Do not enable.',
        'core' => '7.x',
        'package' => 'Testing',
        'hidden' => true,
        'dependencies' => 
        array (
          0 => 'wysiwyg',
        ),
        'files' => 
        array (
          0 => 'wysiwyg_test.module',
        ),
        'version' => '7.x-2.2',
        'project' => 'wysiwyg',
        'datestamp' => '1349213776',
        'php' => '5.2.4',
      ),
      'project' => 'wysiwyg',
      'version' => '7.x-2.2',
    ),
    'xmlrpc_test' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/modules/simpletest/tests/xmlrpc_test.module',
      'name' => 'xmlrpc_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'XML-RPC Test',
        'description' => 'Support module for XML-RPC tests according to the validator1 specification.',
        'package' => 'Testing',
        'version' => '7.38',
        'core' => '7.x',
        'hidden' => true,
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
  ),
  'themes' => 
  array (
    'bartik' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/themes/bartik/bartik.info',
      'name' => 'bartik',
      'type' => 'theme',
      'owner' => 'themes/engines/phptemplate/phptemplate.engine',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Bartik',
        'description' => 'A flexible, recolorable theme with many regions.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'css/layout.css',
            1 => 'css/style.css',
            2 => 'css/colors.css',
          ),
          'print' => 
          array (
            0 => 'css/print.css',
          ),
        ),
        'regions' => 
        array (
          'header' => 'Header',
          'help' => 'Help',
          'page_top' => 'Page top',
          'page_bottom' => 'Page bottom',
          'highlighted' => 'Highlighted',
          'featured' => 'Featured',
          'content' => 'Content',
          'sidebar_first' => 'Sidebar first',
          'sidebar_second' => 'Sidebar second',
          'triptych_first' => 'Triptych first',
          'triptych_middle' => 'Triptych middle',
          'triptych_last' => 'Triptych last',
          'footer_firstcolumn' => 'Footer first column',
          'footer_secondcolumn' => 'Footer second column',
          'footer_thirdcolumn' => 'Footer third column',
          'footer_fourthcolumn' => 'Footer fourth column',
          'footer' => 'Footer',
        ),
        'settings' => 
        array (
          'shortcut_module_link' => '0',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'csc' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/sites/all/themes/csc/csc.info',
      'name' => 'csc',
      'type' => 'theme',
      'owner' => 'themes/engines/phptemplate/phptemplate.engine',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSC Custom theme',
        'description' => 'A flexible, recolorable theme with many regions and a responsive.',
        'version' => '7.38',
        'core' => '7.x',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'css/jquery.mCustomScrollbar.css',
            1 => 'css/layout.css',
            2 => 'css/style-opensans.css',
            3 => 'css/colors.css',
            4 => 'css/jquery.fancybox-1.3.4.css',
            5 => 'js/components/chosen/public/chosen.css',
          ),
          'print' => 
          array (
            0 => 'css/print.css',
          ),
        ),
        'scripts' => 
        array (
          0 => 'js/collapsible-menu.js',
          1 => 'js/ui.rollovers.js',
          2 => 'js/jquery.mCustomScrollbar.concat.min.js',
          3 => 'js/csc_common.js',
          4 => 'js/jquery.cookie.js',
          5 => 'js/jquery.fancybox-1.3.4.pack.js',
          6 => 'js/components/chosen/public/chosen.jquery.min.js',
          7 => 'js/components/jquery.dotdotdot/jquery.dotdotdot.min.js',
        ),
        'regions' => 
        array (
          'header' => 'Header',
          'help' => 'Help',
          'page_top' => 'Page top',
          'page_bottom' => 'Page bottom',
          'highlighted' => 'Highlighted',
          'featured' => 'Featured',
          'content' => 'Content',
          'sidebar_first' => 'Sidebar first',
          'sidebar_second' => 'Sidebar second',
          'triptych_first' => 'Triptych first',
          'triptych_middle' => 'Triptych middle',
          'triptych_last' => 'Triptych last',
          'footer_firstcolumn' => 'Footer first column',
          'footer_secondcolumn' => 'Footer second column',
          'footer_thirdcolumn' => 'Footer third column',
          'footer_fourthcolumn' => 'Footer fourth column',
          'footer' => 'Footer',
        ),
        'settings' => 
        array (
          'shortcut_module_link' => '0',
        ),
        'plugins' => 
        array (
          'panels' => 
          array (
            'layouts' => 'layouts',
          ),
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => '',
      'version' => '7.38',
    ),
    'garland' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/themes/garland/garland.info',
      'name' => 'garland',
      'type' => 'theme',
      'owner' => 'themes/engines/phptemplate/phptemplate.engine',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Garland',
        'description' => 'A multi-column theme which can be configured to modify colors and switch between fixed and fluid width layouts.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'style.css',
          ),
          'print' => 
          array (
            0 => 'print.css',
          ),
        ),
        'settings' => 
        array (
          'garland_width' => 'fluid',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'responsive_bartik' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/profiles/panopoly/themes/responsive_bartik/responsive_bartik.info',
      'name' => 'responsive_bartik',
      'type' => 'theme',
      'owner' => 'themes/engines/phptemplate/phptemplate.engine',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Responsive Bartik',
        'description' => 'A flexible, recolorable theme with many regions and a responsive, mobile-first layout.',
        'version' => '7.x-1.0-beta1+3-dev',
        'core' => '7.x',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'css/layout.css',
            1 => 'css/style.css',
            2 => 'css/colors.css',
          ),
          'print' => 
          array (
            0 => 'css/print.css',
          ),
        ),
        'scripts' => 
        array (
          0 => 'js/collapsible-menu.js',
        ),
        'regions' => 
        array (
          'header' => 'Header',
          'help' => 'Help',
          'page_top' => 'Page top',
          'page_bottom' => 'Page bottom',
          'highlighted' => 'Highlighted',
          'featured' => 'Featured',
          'content' => 'Content',
          'sidebar_first' => 'Sidebar first',
          'sidebar_second' => 'Sidebar second',
          'triptych_first' => 'Triptych first',
          'triptych_middle' => 'Triptych middle',
          'triptych_last' => 'Triptych last',
          'footer_firstcolumn' => 'Footer first column',
          'footer_secondcolumn' => 'Footer second column',
          'footer_thirdcolumn' => 'Footer third column',
          'footer_fourthcolumn' => 'Footer fourth column',
          'footer' => 'Footer',
        ),
        'settings' => 
        array (
          'shortcut_module_link' => '0',
        ),
        'project' => 'responsive_bartik',
        'datestamp' => '1366645528',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'responsive_bartik',
      'version' => '7.x-1.0-beta1+3-dev',
    ),
    'seven' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/themes/seven/seven.info',
      'name' => 'seven',
      'type' => 'theme',
      'owner' => 'themes/engines/phptemplate/phptemplate.engine',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Seven',
        'description' => 'A simple one-column, tableless, fluid width administration theme.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'stylesheets' => 
        array (
          'screen' => 
          array (
            0 => 'reset.css',
            1 => 'style.css',
          ),
        ),
        'settings' => 
        array (
          'shortcut_module_link' => '1',
        ),
        'regions' => 
        array (
          'content' => 'Content',
          'help' => 'Help',
          'page_top' => 'Page top',
          'page_bottom' => 'Page bottom',
          'sidebar_first' => 'First sidebar',
        ),
        'regions_hidden' => 
        array (
          0 => 'sidebar_first',
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
    'stark' => 
    array (
      'filename' => '/lv1/aegir/platforms/csc5-7.38-prod/themes/stark/stark.info',
      'name' => 'stark',
      'type' => 'theme',
      'owner' => 'themes/engines/phptemplate/phptemplate.engine',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Stark',
        'description' => 'This theme demonstrates Drupal\'s default HTML markup and CSS styles. To learn how to build your own theme and override Drupal\'s default code, see the <a href="http://drupal.org/theme-guide">Theming Guide</a>.',
        'package' => 'Core',
        'version' => '7.38',
        'core' => '7.x',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'layout.css',
          ),
        ),
        'project' => 'drupal',
        'datestamp' => '1434567286',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'project' => 'drupal',
      'version' => '7.38',
    ),
  ),
);
$options['site_ip_addresses'] = array (
  '@server_drupalshantivirginiaedu' => '10.250.3.237',
);
$options['installed'] = true;
$options['profile'] = 'panopoly';
$options['language'] = 'en';
$options['aliases'] = array (
  0 => 'uvacontemplation.org',
);
# Aegir additions
$_SERVER['db_type'] = $options['db_type'];
$_SERVER['db_port'] = $options['db_port'];
$_SERVER['db_host'] = $options['db_host'];
$_SERVER['db_user'] = $options['db_user'];
$_SERVER['db_passwd'] = $options['db_passwd'];
$_SERVER['db_name'] = $options['db_name'];
