<?php

/**
 * @file
 * csc_events_views.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function csc_events_views_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_csc_long';
  $strongarm->value = 'D. M j, Y \\- g:ha';
  $export['date_format_csc_long'] = $strongarm;

  return $export;
}
