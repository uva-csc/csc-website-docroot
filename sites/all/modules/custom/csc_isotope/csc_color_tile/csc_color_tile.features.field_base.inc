<?php
/**
 * @file
 * csc_color_tile.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function csc_color_tile_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_alternate_path'.
  $field_bases['field_alternate_path'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_alternate_path',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_alternate_url'.
  $field_bases['field_alternate_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_alternate_url',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'activities' => 'activities',
          'article' => 'article',
          'class' => 'class',
          'engagement' => 'engagement',
          'event' => 'event',
          'initiatives' => 'initiatives',
          'learning' => 'learning',
          'news' => 'news',
          'organization' => 'organization',
          'page' => 'page',
          'panopoly_landing_page' => 'panopoly_landing_page',
          'panopoly_page' => 'panopoly_page',
          'people' => 'people',
          'research' => 'research',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
