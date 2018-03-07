<?php
//Get current node id
function csc_related_current_nid(){
  $nodeid = 0;
  if (arg(0) == 'node' && is_numeric(arg(1))) $nodeid = arg(1);

  return $nodeid;
}

//Retrieve nodes of a given content type related to current node (was limit  = 3, but for related classes make default all)
function csc_related_get_nodes($type, $limit=FALSE){
  //Get current node id
  $nodeid = csc_related_current_nid();
  if($nodeid){
    $qry = "SELECT fr.entity_id FROM {field_data_field_related} fr, {node} n WHERE fr.field_related_target_id=$nodeid AND fr.entity_id=n.nid AND n.status = 1 AND bundle='$type' ORDER BY n.created DESC";
    $r = db_query($qry);
    $nids = array();
    foreach($r as $row) $nids[] = $row->entity_id;
    if ($limit) { $nids = array_slice($nids, 0, $limit); }
    return $nids;
  }else{
    return false;
  }  
}