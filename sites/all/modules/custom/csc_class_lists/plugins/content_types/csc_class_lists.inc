<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('CSC Class List'),
  'description' => t('Shows List of Classes'),
  'category' => t('CSC Plugins'),
  'render callback' => 'csc_class_lists_render',
  'admin info' => 'csc_class_lists_info',
  'edit form' => 'csc_class_lists_edit_form',
  'defaults' => array(
        'desc_text' => '',
        'list_params' => '',
    ),
);

/**
 * 'admin info' callback for panel pane.
 */
function csc_class_lists_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = 'CSC Class List';
    $block->content = (empty($conf['list_params'])) ? "No Query Params" : "Query Params: " . $conf['list_params'];
    return $block;
  }
}

/**
 * 'Edit form' callback for the content type.
 */
function csc_class_lists_edit_form($form, &$form_state) {
  // Add list description text setting to add description before list
  $form['desc_text'] = array(
		'#type' => 'text_format',
		'#title' => t('Description text'),
		'#description' => t('In the textbox above, enter any descriptive text to display before this list.'),
		'#format' => NULL,
		'#default_value' => (isset($form_state['conf'])) ? $form_state['conf']['desc_text'] : '',
	);
  $form['list_params'] = array(
        '#type' => 'textfield',
        '#title' => t('List Params'),
        '#description' => t('In the textbox above, enter the page query parameters for filtering and sorting results. Do not include the question mark (?).'),
        '#format' => NULL,
        '#size' => 80,
        '#default_value' => (isset($form_state['conf'])) ? $form_state['conf']['list_params'] : '',
    );
  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function csc_class_lists_edit_form_submit($form, &$form_state) {
	$form_state['conf']['desc_text'] = $form_state['values']['desc_text']['value'];
	$form_state['conf']['list_params'] = $form_state['values']['list_params'];
}

function csc_class_lists_render($subtype, $conf, $panel_args, $context = NULL) {
  //watchdog('csc class list', 'in render: ' . json_encode($panel_args));
  $params = array();
  if (!empty($conf['list_params'])) {
    $temp = explode('&', $conf['list_params']);
    foreach ($temp as $p) {
      if (strstr($p, '=')) {
        $pts = explode('=', $p);
        $params[$pts[0]] = $pts[1];
      } else {
         // watchdog('csc class lists', "list param without = : {$p}");
      }
    }
  }

  $title = 'Instruction';
  $node_type = 'class';

  $field = field_info_field('field_audience');
  $audience_values = list_allowed_values($field);
  $audience = array_keys($audience_values)[0]; // Default audience is first in field value list

  // Base page path (Remove audience)
  $page_path = current_path();
  if (!empty($panel_args)) {
    $audience = $panel_args[0]; // If intended audience is in the given parameters (last part of path) use it
    // Calculate base page path for audience links
    $path_pts = explode('/', $page_path);
    if ($path_pts[count($path_pts) - 1] == $audience) {
      array_pop($path_pts);
    }
    $page_path = '/' . implode('/', $path_pts);
  }

  //*** Initializing ***
  $sort = (isset($_GET['sort']) && !empty($_GET['sort'])) ? check_plain(htmlspecialchars($_GET['sort'])): '';
  $sort_by = 'n.title';
  $order = 'ASC';
  $render_function = 'csc_class_lists_default_render';
  $tables = $where = $fields = $join = $group = '';

  //*** Filter ***
  $filter = isset($_GET['filter']) ? check_plain(htmlspecialchars($_GET['filter'])): '';
  $filter_by = '';
  switch($filter){
    case 'past':
      $tables = ', {field_data_field_date} fd';
      $where = "AND n.nid = fd.entity_id AND fd.entity_type = 'node' AND (fd.field_date_value < NOW() AND fd.field_date_value2 < NOW() AND fd.field_date_value2 <> fd.field_date_value)";
      break;
    case 'upcoming':
      $tables = ', {field_data_field_date} fd';
      $where = "AND n.nid = fd.entity_id AND fd.entity_type = 'node' AND fd.field_date_value > NOW()";
      break;
    case 'ongoing':
      $tables = ', {field_data_field_date} fd';
      $where = "AND n.nid = fd.entity_id AND fd.entity_type = 'node' AND ((fd.field_date_value < NOW() AND fd.field_date_value2 > NOW()) or (fd.field_date_value < NOW() AND fd.field_date_value2 = fd.field_date_value))";
      break;
  }


  //*** Audience ***

  // Create Query condition for audience
  $tables .= ', {field_data_field_audience} fa';
  $where .= "AND fa.field_audience_value='". htmlspecialchars($audience) ."' AND fa.entity_id=n.nid AND fa.bundle='$node_type' ";

  switch($sort){
    case 'date_asc':
      $sort_by = 'n.created';
      $order = 'ASC';
      break;
    case 'date_desc':
      $sort_by = 'n.created';
      $order = 'DESC';
      break;
    case 'school':
      $fields = ', fr2.field_related_target_id, n2.title as rtitle';
      $tables .= ", {field_data_field_related} fr2, {node} n2, {field_data_field_organization_type} ot";
      $where .= "AND fr2.entity_id=n.nid AND fr2.entity_type='node' AND n2.nid=fr2.field_related_target_id AND n2.nid=ot.entity_id AND ot.field_organization_type_value='UVA School'";
      $sort_by = 'n2.title, n.title';
      $order = 'ASC';
      $render_function = isset($_GET['group']) ? 'csc_class_lists_default_render' : 'csc_class_lists_school_render';
      break;
    case 'title_desc':
      $sort_by = 'n.title';
      $order = 'DESC';
      $render_function = isset($_GET['group']) ? 'csc_class_lists_default_render' : 'csc_class_lists_alpha_render';
      break;
    case 'title_asc':
      $sort_by = 'n.title';
      $order = 'ASC';
      $render_function = isset($_GET['group']) ? 'csc_class_lists_default_render' : 'csc_class_lists_alpha_render';
      break;
    case 'offered': // "Date Offered" is default
    default:
      $fields = ', min(df.field_date_value) as dfv, max(df.field_date_value) as maxdfv';
      $tables .= ', field_data_field_date {df}';
      $where .= 'AND n.nid=df.entity_id';
      $group = 'GROUP BY n.nid';
      $sort_by = 'dfv';
      $order = 'DESC';
      $render_function = 'csc_class_lists_semester_render';
      break;
  }

  $typestr = "n.type = 'class'";
  $qry = "SELECT n.nid $fields FROM {node} n $join $tables WHERE n.status = '1' AND $typestr $where $group ORDER BY $sort_by $order";

  // watchdog('csc_class_lists', 'Query: ' . $qry);
  //$output = csc_class_lists_select();

  $intro = _csc_class_lists_get_intro_text($audience);
  $output = trim($render_function($qry));
  if (strlen(strip_tags($output)) == 0 ) {
      $output = '<p>Sorry, no results found!</p>';
  }
  $output = $intro . '<div class="list-items ' . $render_function . '">' . $output . '</div>';
  // This line breaks the content pane:
  //$output .= '<script>jQuery(".list-item").dotdotdot({watch: true, height: 150})</script>';

  $block = new stdClass();
  $block->title = $title;
  $class_type_select = csc_class_lists_select($page_path, $audience, $sort);
  //$class_type_select = '<b>Type selecdt Placeholder</b>';
  $block->content = '<div class="all-class-desc">' . $conf['desc_text'] . '</div>' .
     $class_type_select . '<div class="csc-lists-container">' .
     $output . '</div><div class="clear"></div>';
  return $block;
}

/**
 * Get's intro text for certain list pages based on the imploded panel arguments.
 * First example is class_dropins. Made a custom block in block interface
 *
 * @param $pargs
 * @return string
 */
function _csc_class_lists_get_intro_text($audience) {
    $blockname = $audience . ' class description';  // Create the block name from the panel args
    //watchdog('csc_class_lists blockname', $blockname);
    // Get list of all blocks
    module_load_include('inc', 'block', 'block.admin');
    $blocks = block_admin_display_prepare_blocks('csc');
    // Set vars
    $module = 'block';
    $bid = -1;
    $content = '';
    //$all = array();

    // Iterate all blocks looking for this lists block
    foreach($blocks as $block) {
        //$all[] = strtolower($block['info']);
        if (strtolower($block['info']) == $blockname) {
            $bid = $block['delta'];
            $module = $block['module'];
            break;
        }
    }
    // If found, return the blocks content
    if ($bid > -1) {
        $fn = $module . '_block_view';
        $block = $fn($bid);
        if (!empty($block['content'])) {
            $content = '<div class="list-intro">' . $block['content'] . '</div>';
        }
    }
    return $content; // If nothing matches, this is an empty string
}

function csc_class_lists_select($pathArg, $audience_key='', $sortArg='') {

  $output = '<div class="list-filter-wrapper">';
  //return $output . "<b>PlaceHolder</b></div>";

  // Create Audience URLS with page path and audience values keys
  $field = field_info_field('field_audience');
  $audiences = list_allowed_values($field);
  $audience_links = array();
  foreach($audiences as $key => $label) {
    $audience_links[$key] = array(
      'path' => $pathArg . '/' . $key,
      'label' => $label,
    );
  }
  $sortstr = (!empty($sortArg)) ? "?sort={$sortArg}" : '';
  $output .= '<div id="audience-filter" class="audience-filter '. $audience_key .'">';
  foreach($audience_links as $k => $v) {
      $output .= '<a href="' . $v['path'] . $sortstr . '" class="' . ($k == $audience_key ? 'selected' : '') .
        '" data-value="' . $k . '">' . $v['label'] . '</a>';
  }
  $output .= '</div>';

  // Do Sort Select
  // Removed from sort: 'Date Added' => array('date_desc' => 'Newest First', 'date_asc' => 'Oldest First'),
  $sort = array(
    'Date Offered' => array('' => 'Date Offered'),
    'Title' => array('title_asc' => 'A-Z', 'title_desc' => 'Z-A'),
    'School' => array('school' => 'School A-Z')
  );
  // $sort_default = 'date_desc';
  // $filter = array('upcoming' => 'Upcoming', 'ongoing' => 'Ongoing', 'past' => 'Past');

  $output .= '<form method="get" id="csc-list-form">';
  $output .= '<div class="sort-label">Sort by</div>';
  $output .= '<select style="min-width:125px" data-placeholder="Sort by..." name="sort" onChange="document.getElementById(\'csc-list-form\').submit()">';
  foreach($sort as $k1 => $v1){
    $output .= '<optgroup label="' . $k1 . '">';
    foreach($v1 as $k => $v){
      $output .= '<option value="'. $k .'"';
      if($sortArg == $k) $output .= ' selected';
      $output .='>' . $v . '</option>';
    }
    $output .= '</optgroup>';
  }
  $output .= '</select>';

  $output .= "</form>\n";
  // Causes crash when adding panel to page. Took out. (ndg8f 2/5/2021)
  // $output .= '<script>jQuery("#csc-list-form").find("select").chosen({disable_search: true})</script>';
  $output .= '</div>';

  // Return top links output
  return $output;
}

/**
 * Default class list render. May not be used
 *
 * @param $qry
 * @return string
 * @throws Exception
 */
function csc_class_lists_default_render($qry) {
  $r = db_query($qry);
  $output = '';
  foreach($r as $row){
    $node = node_load($row->nid);
    $lng = $node->language;
    $teaser = isset($node->field_small_teaser[$lng][0]['value']) ? $node->field_teaser[$lng][0]['value'] : '';
    $itemimg = isset($node->field_featured_image[$lng][0]['uri'])? $node->field_featured_image[$lng][0]['uri'] : '';
    $output.= theme('csc_class_lists_item',
        array(
          'title' => $node->title,
          'nid' => $node->nid,
          'teaser' => $teaser,
          'image' => $itemimg,
          ));
  }

  return $output;
}

/**
 * Class title sort (asc/desc) render
 *
 * @param $qry
 * @return string
 * @throws Exception
 */
function csc_class_lists_alpha_render($qry){
  $r = db_query($qry);
  $output = ''; $letter = '';
  foreach($r as $row){
    $node = node_load($row->nid);
    $lng = $node->language;

		// Use Thumbnail if available otherwise main image
		$img = isset($node->field_thumbnail[$lng][0]['uri'])? $node->field_thumbnail[$lng][0]['uri'] : FALSE;
		if (!$img) {
			$img = isset($node->field_featured_image[$lng][0]['uri'])? $node->field_featured_image[$lng][0]['uri'] : '';
		}

    $item = theme('csc_class_lists_item', array('title' => $node->title,
                                          'nid' => $node->nid,
                                          'teaser' => isset($node->field_small_teaser[$lng][0]['value']) ? $node->field_teaser[$lng][0]['value'] : '',
                                          'image' => $img,
                                         ));

    $l = ($node->type == 'people') ? strtoupper(substr($node->field_last_name[$lng][0]['value'], 0, 1)) : strtoupper(substr($node->title, 0, 1));
    if($letter <> $l){
      $letter = $l;
      /* $tagopen is not defined
      if ($tagopen) {
        $output .= "</div>";
        $tagopen = false;
      }*/
      $output .= "<div class='clear'></div><h2>$letter</h2>\n";
      $output .= '<div class="list-group">';
      $tagopen = true;
      $output .= $item;
    }else{
      $output .= $item;
    }
  }

  if( $tagopen ) {
    $output .= "</div>";
  }

  return $output;
}

function csc_class_lists_year_render($qry){
  $r = db_query($qry);
  $output = ''; $year = '';
  foreach($r as $row){
    $node = node_load($row->nid);
    $lng = $node->language;
    $item = theme('csc_class_lists_item', array('title' => $node->title,
                                          'nid' => $node->nid,
                                          'teaser' => isset($node->field_small_teaser[$lng][0]['value']) ? $node->field_teaser[$lng][0]['value'] : '',
                                          'image' => isset($node->field_featured_image[$lng][0]['uri'])? $node->field_featured_image[$lng][0]['uri'] : '',
                                         ));

    $y = $node->field_year[$lng][0]['value'];
    if($year <> $y){
      $year = $y;
      $output .= "<div class='clear'></div><h2 class='lower'>$year</h2>\n";
      $output .= "<div class='list-group'>$item";
    }else{
      $output .= $item;
    }
  }
  $output .= '</div>';
  return $output;
}

/**
 * Date Offered Sort: Organize classes by semester (Fall 2015, etc.).
 * This is default view!
 *
 * @param $qry
 * @return string
 * @throws Exception
 */
function csc_class_lists_semester_render($qry) {
  // watchdog('csc class list > semester_render', "Query: $qry");
  $r = db_query($qry);
  $ourres = array();
  $output = ''; $semester = '';
  // Figure out current semester to make sure a heading is printed for it
  $today = date('Ymd');
  $current_semester = csc_class_list_calculate_semester($today, $today);
  // Only set current heading not printed if it is a Spring or Fall semester
  $curr_is_printed = (preg_match('/Spring|Fall/', $current_semester)) ? FALSE : TRUE;

  // Filter out never ending drop-in classes. Fill array with their markup to append to output
  $nerows = array();  // not ending or ongoing rows
  $regrows = array(); // regular rows

  // Iterate through results and separate the two
  foreach ($r as $row) {
      $node = node_load($row->nid);
      $lng = ($node) ? $node->language : 'und';
      if ($node && !empty($node->field_date[$lng][0]['rrule']) && strstr($node->field_date[$lng][0]['rrule'], 'NEVER=1')) {
        $ntease = isset($node->field_small_teaser[$lng][0]['value']) ? $node->field_teaser[$lng][0]['value'] : '';
        $nimg = isset($node->field_featured_image[$lng][0]['uri']) ? $node->field_featured_image[$lng][0]['uri'] : '';
        $nerows[$node->title] = theme('csc_class_lists_item', array('title' => $node->title,
          'nid' => $node->nid,
          'teaser' => $ntease,
          'image' => $nimg,
        ));
      } else {
        $regrows[] = $row;
      }
  }

  // Create the on-going (not-ending = ne) rows
  if (count($nerows) > 0) {
      ksort($nerows);
      $output .= "<div class='clear'></div><h2 class='lower'>" . t('Ongoing') . "</h2><div class='list-group'>\n";
      foreach($nerows as $rowhtml) {
           $output .= $rowhtml;
      }
      $output .= '</div>';
  }

  // Process regular rows into $output
  foreach ($regrows as $rowindex => $row) {
    $node = node_load($row->nid);
    if ($node) {
      $lng = $node->language;
      $item = theme('csc_class_lists_item', array('title' => $node->title,
        'nid' => $node->nid,
        'teaser' => isset($node->field_small_teaser[$lng][0]['value']) ? $node->field_teaser[$lng][0]['value'] : '',
        'image' => isset($node->field_featured_image[$lng][0]['uri']) ? $node->field_featured_image[$lng][0]['uri'] : '',
      ));

      $mysemester = csc_class_list_calculate_semester($row->dfv, $row->maxdfv);
      if ($mysemester <> $semester) {
        // If current semester heading is not printed, check to make sure first class is in current semester
        if ($mysemester == $current_semester) {
          $curr_is_printed = TRUE;
        }
        // If not, there are no classes yet for current semester
        // So print a header for current semester with "To Be Announced".
        $is_prior = _class_semester_prior_to($mysemester, $current_semester);
        //dpm($is_prior, 'is prior');
        if (!$curr_is_printed && $is_prior) {
          $output .= "<div class='clear'></div><h2 class='lower'>$current_semester</h2>\n";
          $output .= "<p class=\"tbap\">To Be Announced!</p>"; // class p.tbap called in csc-class-lists.js to add class type
          $curr_is_printed = TRUE;
        }
        $semester = $mysemester;
        $output .= "<div class='clear'></div><h2 class='lower'>$semester</h2>\n";
        $output .= "<div class='list-group'>$item";
      } else {
        $output .= $item;
      }
    } else {
       // watchdog('csc_class_list > semester_render', "No node for row {$rowindex}: " . json_encode($row));
    }
  }
  $output .= '</div>';
  // $wdout = str_replace('<', '&lt;', str_replace('>', '&gt;', $output));
  // watchdog('csc class lists', "returning: " . $wdout);
  return $output;
}


/**
 * Parses two semester headers e.g. "Spring 2018" and returns whether the first is prior to the second
 *
 * @param $sem1
 * @param $sem2
 * @return bool
 */
function _class_semester_prior_to($sem1, $sem2) {
    $sem1 = explode(' ', $sem1);
    $sem1[0] = strtolower($sem1[0]);
    $sem2 = explode(' ', $sem2);
    $sem2[0] = strtolower($sem2[0]);

    // Check year
    if ($sem1[1] < $sem2[1]) { return TRUE; } // if sem1 year is lesser, then 1 is prior to 2
    if ($sem1[1] > $sem2[1]) { return FALSE; } // if sem1 year is greater, then 1 is not prior to 2

    // If the year is the same check the semester
    switch ($sem1[0]) {
        case 'fall':  // if sem1 is in fall, nothing is greater so it must be lesser
            return FALSE;
            break;

        case 'j-term':
            return TRUE;
            break;

        case 'spring':
            if ($sem2[0] == 'summer' || $sem2[0] == 'fall') { return TRUE;}
            return FALSE;
            break;

        case 'summer':
            if ($sem2[0] == 'fall') { return TRUE;}
            return FALSE;
            break;
    }
}

function csc_class_list_calculate_semester($start, $end) {
	$dt = date_parse($start);
    $enddt = date_parse($end);
	$year = $dt['year'];
	$month = $dt['month'];
    $endmonth = $enddt['month'];
	$day = $dt['day'];
	$term = t('Spring');
	if ($month == 1 && $day < 13) { $term = t('J-Term'); } //else if ($month < 3 && $endmonth < 3) { $term = t('Winter');}
	if ($month > 5 && $month < 8) { $term = t('Summer'); }
	if ($month > 7) { $term = t('Fall'); }
	return "$term $year";
}

/**
 * Render to show classes by school at university
 *
 * @param $qry
 * @return string
 * @throws Exception
 */
function csc_class_lists_school_render($qry){
  $r = db_query($qry);
  $output = ''; $school = '';
  foreach($r as $row){
    $node = node_load($row->nid);
    $lng = $node->language;
    $item = theme('csc_class_lists_item', array('title' => $node->title,
                                          'nid' => $node->nid,
                                          'teaser' => isset($node->field_small_teaser[$lng][0]['value']) ? $node->field_teaser[$lng][0]['value'] : '',
                                          'image' => isset($node->field_featured_image[$lng][0]['uri'])? $node->field_featured_image[$lng][0]['uri'] : '',
                                         ));

    $s = $row->rtitle;
    if($school <> $s){
      $school = $s;
      $output .= "<div class='clear'></div><h2 class='lower'>$school</h2>\n";
      $output .= "<div class='list-group'>$item";
    }else{
      $output .= $item;
    }
  }
  $output .= '</div>';
  return $output;
}

/**
 * May not be used? Replaced by csc_class_lists_semester_render()
 *
 * @param $qry
 * @return string
 * @throws Exception
 */
function csc_class_lists_offered_render($qry){
  $r = db_query($qry);

  $now = time();
  $output = $up = $on = $past = '';
  foreach($r as $row){
    $node = node_load($row->nid);
    $lng = $node->language;
    $item = theme('csc_class_lists_item', array('title' => $node->title,
                                          'nid' => $node->nid,
                                          'teaser' => isset($node->field_small_teaser[$lng][0]['value']) ? $node->field_teaser[$lng][0]['value'] : '',
                                          'image' => isset($node->field_featured_image[$lng][0]['uri'])? $node->field_featured_image[$lng][0]['uri'] : '',
                                         ));

    if($row->end_date < $now)
      $past .= $item;
    //elseif( ($row->start_date < $now and $row->end_date > $now) or ($row->start_date < $now and $row->end_date == $row->start_date) )
      //$on .= $item;
    else
      $up .= $item;
  }

  if($up){
    $output .= "<div class='clear'></div><h2 class='lower'>Highlights</h2>\n";
    $output .= "<div class='list-group'>$up</div>";
  }
  if($on){
    $output .= "<div class='clear'></div><h2>Ongoing</h2>\n";
    $output .= $on;
  }
  if($past){
    $output .= "<div class='clear'></div><h2 class='lower'>All</h2>\n";
    $output .= "<div class='list-group'>$past</div>";
  }

  return $output;
}

/**
 * Not sure what this is? Not sure if used?
 *
 * @param $qry
 * @return string
 * @throws Exception
 */
function csc_class_lists_consolidate_render($qry){
  $r = db_query($qry);

  $now = time();
  $output = $con = $past = '';
  foreach($r as $row){
    $node = node_load($row->nid);
    $lng = $node->language;
    $item = theme('csc_class_lists_item', array('title' => $node->title,
                                          'nid' => $node->nid,
                                          'teaser' => isset($node->field_small_teaser[$lng][0]['value']) ? $node->field_teaser[$lng][0]['value'] : '',
                                          'image' => isset($node->field_featured_image[$lng][0]['uri'])? $node->field_featured_image[$lng][0]['uri'] : '',
                                         ));

    if($row->start_date > $now)
      $con .= $item;
    elseif( ($row->start_date < $now and $row->end_date > $now) or ($row->start_date < $now and $row->end_date == $row->start_date) )
      $con .= $item;
    else
      $past .= $item;
  }

  if($con){
    //$output .= "<h2>Future</h2>\n";
    $output .= $con;
  }
  if($past){
    $output .= "<h2>Past</h2>\n";
    $output .= $past;
  }

  return $output;
}
