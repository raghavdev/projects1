<?php

/**
 * This is a quick & dirty script to load in the RCM Categories from a .csv file.
 *
 * File assumes the following columns:
 * RetailCatLinkSid
 * DataextrctSid
 * RetailDeptNm
 * RetailCatNm
 * RetailSegmentNm
 * RetailSubSegmentNm
 * CatProfileNm
 * ChangeInd
 * JobExecSid
 *
 * Will check if category already exists, will create a new category if not.
 */

$vocab = taxonomy_vocabulary_machine_name_load('rcm_category');

// Insert categories
if (($handle = fopen('../scripts/rcm_categories.csv', 'r')) !== FALSE) {
  $c = 0;
  while (($data = fgetcsv($handle, 10000, ",")) !== FALSE) {
    $c++;
//    if ($c > 2) {break;}

    if (empty($data[0]) || empty($data[2]) || !is_numeric($data[0])) {
      continue;
    }

    $row = array(
      'sid' => trim($data[0]),
      'department' => trim($data[2]),
      'category' => trim($data[3]),
      'segment' => trim($data[4]),
      'subsegment' => trim($data[5]),
    );

    // Determine all sid's for the row.
    $department_sid = $row['department'];
    $category_sid = $department_sid . '|' . $row['category'];
    $segment_sid = $category_sid . '|' . $row['segment'];
    $subsegment_sid = $segment_sid . '|' . $row['subsegment'];

    $parent_tid = process_category($department_sid, $row['department'], $vocab->vid);
    if (!empty($row['category'])) {
      $parent_tid = process_category($category_sid, $row['category'], $vocab->vid, $parent_tid);
    }
    if (!empty($row['segment'])) {
      $parent_tid = process_category($segment_sid, $row['segment'], $vocab->vid, $parent_tid);
    }
    if (!empty($row['subsegment'])) {
      $parent_tid = process_category($subsegment_sid, $row['subsegment'], $vocab->vid, $parent_tid);
    }
  }

  fclose($handle);

}


function process_category($sid, $name, $vid, $parent_tid=0) {
  // Make sure the level exists.
  $tid = fetch_tid_by_sid($sid, $vid);

  if ($tid) {
    return $tid;
  }

  $term = new stdClass();
  $term->name = $name;
  $term->vid = $vid;
  $term->description = '';
  $term->format = 'plain_text';
  $term->parent = array($parent_tid);
  $term->field_rcm_sid = array(LANGUAGE_NONE => array(0 => array('value' => $sid)));
  taxonomy_term_save($term);

  if (!empty($term->tid)) {
    print('ADDED: ' . $sid .  "\r\n");
    return $term->tid;
  }
  else {
    print('FAILED TO ADD: ' . $sid .  "\r\n");
  }

  return 0;
}

function fetch_tid_by_sid($sid, $vid) {
  $query = db_select('taxonomy_term_data', 'td');
  $query->fields('td', array('tid'));
  $query->join('taxonomy_vocabulary', 'v', 'v.vid = td.vid');
  $query->join('field_data_field_rcm_sid', 'r', 'r.entity_id = td.tid AND r.bundle = v.machine_name');
  $query->condition('r.field_rcm_sid_value', $sid);
  $query->condition('td.vid', $vid);
  $result = $query->execute()->fetchAssoc();

  if (!empty($result['tid'])) {
    return $result['tid'];
  }

  return 0;
}
