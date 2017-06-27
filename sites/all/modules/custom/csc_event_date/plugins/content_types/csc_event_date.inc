<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('CSC Event Date'),
  'description' => t('Panel to hide a date\'s time when node\'s tba field is checked'),
  'category' => t('CSC Plugins'),  
	'edit form' => 'csc_event_date_edit_form',
  'render callback' => 'csc_event_date_render',
  'admin info' => 'csc_event_date_admin_info',
);

/**
 * 'admin info' callback for panel pane.
 */
function csc_event_date_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = 'CSC Event Date';
    $block->content = 'Show CSC Event\'s date';
    return $block;
  }
}


function csc_event_date_render($subtype, $conf, $panel_args, $context = NULL) {
  $nodeid = 0;
  if (arg(0) == 'node' && is_numeric(arg(1))) $nodeid = arg(1);
	if (empty($nodeid) && count($panel_args) > 0) { $nodeid = $panel_args[0]; }
  if ($nodeid){
    $node = node_load($nodeid);
    $lng = $node->language;
		$ew = entity_metadata_wrapper('node', $node);
		$hd = $ew->field_hide_date->value();
    if(!$hd && !empty($node->field_event_date)) {
    	$tba = (empty($node->field_tba) || $node->field_tba['und'][0]['value'] == 0) ?  FALSE : TRUE;
			
			$dout = field_view_field('node', $node, 'field_event_date');
			if($tba) {
				$display = array('settings' => array('format_type' => 'panopoly_day'));
				$dout = field_view_field('node', $node, 'field_event_date', $display);
			}
			
      $output = '<div id="csc-event-date">';
			
			// If there's a repeat rule, custom format the string for presentation in block
			if(!empty($dout['#items'][0]['rrule'])) {
				$item = $dout['#items'][0];
				$v1 = (isset($item['value'])) ? $item['value'] : '';
				$v2 = (isset($item['value2'])) ? $item['value2'] : '';
				if($rrstr = csc_event_date_repeat_rule_render($item['rrule'], $v1,  $v2)) {
					$output .= '<p>' . $rrstr . '</p>';
				} else {
					$output .= $dout[0]['#markup']; // if rule can't be rendered use default markup
				}
			} else {
			// Otherwise use pre-rendered markup for each item (should only be one)
	      foreach($dout['#items'] as $n => $item) {
	      	$output .= $dout[$n]['#markup'];
	      }
				if($tba) { $output .= ', Time TBA'; }
			}
			
      $output.= "</div>\n";

      $block = new stdClass();
      $block->title = '';
      $block->content = $output;
      return $block;
    }
  }

}

function csc_event_date_repeat_rule_render($rule, $t1='', $t2='') {
	$rrule = array();
  $rules = explode(';', str_replace('RRULE:', '', $rule));
  foreach($rules as $rule) {
    $parts = explode('=', $rule);
    $key = $parts[0];
    $value = $parts[1];
    $rrule[$key] = $value;
  }
	$outstr = FALSE;
	// Weekly by day
	if($rrule['FREQ'] == 'WEEKLY' && isset($rrule['BYDAY'])) {
		$days = date_repeat_dow_day_options();
		$prefix = '';
		if($rrule['INTERVAL'] == 2) { $prefix = t('other') . ' '; }
		if($rrule['INTERVAL'] == 3) { $prefix = t('third') . ' '; }
		
		// Account for multiple days in a week
		$dayst = $days[$rrule['BYDAY']];
		$daylist = array();
		if( strpos($rrule['BYDAY'], ",") > -1) { // e.g., BYDAY => TU,TH
			$dpts = explode(',', $rrule['BYDAY']);
			foreach($dpts as $d1) {
				$daylist[] = $days[$d1];
			}
			if (count($daylist) == 2) {
				 $dayst = implode(' and ', $daylist);
			} else {
				$last = array_pop($daylist);
				$dayst = implode(', ', $daylist) . " and $last";
			}
		}
        $dtfmt = 'M jS, Y';
		$startdate = (!empty($t1)) ? date($dtfmt, strtotime($t1)) : FALSE;
		$enddate = date($dtfmt, strtotime($rrule['UNTIL']));
		if(empty($t1)) {
			$outstr = t('Every @int@day EMPTY until @enddate', array(
										'@int' => $prefix, 
										'@day' => $dayst, 
										'@enddate' => $enddate,
								));
		} elseif (empty($t2)) {
			$outstr = t('Every @int@day from @starttime until @enddate', array(
										'@int' => $prefix, 
										'@day' => $dayst, 
										'@starttime' => csc_event_date_parse_time($t1),
										'@enddate' => $enddate,
								));
		} else {
			$outstr = t('Every @int@day @starttime to @endtime, @startdate through @enddate', array(
										'@int' => $prefix, 
										'@day' => $dayst, 
										'@starttime' => csc_event_date_parse_time($t1),
										'@endtime' => csc_event_date_parse_time($t2),
										'@startdate' => $startdate,
										'@enddate' => $enddate,
								));
		}
		
	} else {
		// Add Other Rules here as needed for repeat rule render
	} 
	return $outstr;
}

function csc_event_date_parse_time($d) {
	// Convert Greenwich time to EST when Formatting date
	// TODO: May have to remove or change when implementing user timezones or other timezone fixes
	$est = date_default_timezone_get();
	$gmt = 'Europe/London';
	date_default_timezone_set($gmt);
	$fd = format_date(strtotime($d), 'custom', 'g:i A', $est);
	date_default_timezone_set($est);
	// Account for daylight savings time
	$timestamp = strtotime($d); // Given timestamp
 	$dls_start = strtotime("Second Sunday March ". date('Y', $timestamp)); // DLS Start
    $dls_end = strtotime("First Sunday November ". date('Y', $timestamp)); // DLS End
	$is_dlst = ($timestamp >= $dls_start && $timestamp <= $dls_end)  ? TRUE : FALSE; // Test if given timestamp in in DLS
	if ($is_dlst) {
		$pts = explode(':', $fd);
		$pts[0] = ($pts[0] + 1) % 12; // Adding 1 hr mod 12
	    // if it is now 0, that means its gone past a meridian and is now 12 in the next AM or PM	
        if ($pts[0] == 0) {
            $pts[0] = 12;
            if (strstr($pts[1], 'AM')) {
                $pts[1] = str_replace('AM', 'PM', $pts[1]);
            } else {
                $pts[1] = str_replace('PM', 'AM', $pts[1]);
            }
        }
		$fd = implode(':', $pts);
	}
	return $fd;
}

/**
 * 'Edit form' callback for the content type.
 */
function csc_event_date_edit_form($form, &$form_state) {
  // No settings beyond context, which has already been handled.
  return $form;
}