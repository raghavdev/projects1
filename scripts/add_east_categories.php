<?php

/**
 * This is a quick & dirty script to load in the East Categories from a .csv file.
 *
 * File assumes the following columns:
 * Prod Group
 * Acct Code
 * Category #
 * Category Description
 * Whse Grp
 * Class #
 * Class Description
 *
 * Will check if category already exists, will create a new category if not.
 */

$vocab = taxonomy_vocabulary_machine_name_load('east_category');

// Insert categories
if (($handle = fopen('../scripts/east_categories.csv', 'r')) !== FALSE) {
  $c = 0;
  while (($data = fgetcsv($handle, 10000, ",")) !== FALSE) {
    $c++;
//    if ($c > 2) {break;}

    // Skip the header row and any invalid rows.
    if (empty($data[0]) || empty($data[2]) || !is_numeric($data[2])) {
      continue;
    }

    $row = array(
      'group' => strtoupper(trim($data[0])),
      'category_number' => trim($data[2]),
      'category' => strtoupper(trim($data[3])),
      'class_number' => trim($data[5]),
      'class' => strtoupper(trim($data[6])),
    );

    // Determine all sid's for the row.
    $group_sid = $row['group'];
    $category_sid = $group_sid . '|' . $row['category_number'];
    $class_sid = $category_sid . '|' . $row['class_number'];

    $parent_tid = process_category(0, $group_sid, $row, $vocab->vid);
    if (!empty($row['category_number']) && is_numeric($row['category_number'])) {
      $parent_tid = process_category(1, $category_sid, $row, $vocab->vid, $parent_tid);
    }
    if (!empty($row['class_number']) && is_numeric($row['class_number']) && ($row['class_number'] != $row['category_number'])) {
      $parent_tid = process_category(2, $class_sid, $row, $vocab->vid, $parent_tid);
    }
  }

  fclose($handle);

}


function process_category($level, $sid, $row, $vid, $parent_tid=0) {
  // Make sure the level exists.
  $cur = fetch_tid_by_sid($sid, $vid);

  if (!empty($cur)) {
    // Load the existing term for updating.
    $term = taxonomy_term_load($cur['tid']);
    $action = 'UPDATED';
  }
  else {
    // Create a new term.
    $term = new stdClass();
    $term->description = '';
    $term->vid = $vid;
    $term->format = 'plain_text';
    // Add the Cat SID field for later use.
    $term->field_cat_sid = array(LANGUAGE_NONE => array(0 => array('value' => $sid)));
    $action = 'ADDED';
  }

  switch ($level) {
    case 1:
      $term->name = $row['category'];
    break;
    case 2:
      $term->name = $row['class'];
    break;
    default:
      $term->name = $row['group'];
    break;
  }

  $term->parent = array($parent_tid);

  // Add the other fields as needed based on location in the hierarchy.
  $term->field_prod_group = array(LANGUAGE_NONE => array(0 => array('value' => $row['group'])));

  if ($level > 0) {
    $term->field_category_number = array(LANGUAGE_NONE => array(0 => array('value' => $row['category_number'])));
    $term->field_category = array(LANGUAGE_NONE => array(0 => array('value' => $row['category'])));
  }
  if ($level > 1) {
    $term->field_class_number = array(LANGUAGE_NONE => array(0 => array('value' => $row['class_number'])));
    $term->field_class = array(LANGUAGE_NONE => array(0 => array('value' => $row['class'])));
  }

  taxonomy_term_save($term);

  if (empty($term->tid)) {
    $action = 'FAILED';
  }
  print($action . ': ' . $sid . ' ' . $row['group']);
  if ($level > 0) {
    print(' / ' . $row['category']);
  }
  if ($level > 1) {
    print(' / ' . $row['class']);
  }
  print("\r\n");

  return empty($term->tid) ? 0 : $term->tid;
}

function fetch_tid_by_sid($sid, $vid) {
  $query = db_select('taxonomy_term_data', 'td');
  $query->fields('td', array('tid', 'name'));
  $query->join('taxonomy_vocabulary', 'v', 'v.vid = td.vid');
  $query->join('field_data_field_cat_sid', 's', 's.entity_id = td.tid AND s.bundle = v.machine_name');
  $query->condition('s.field_cat_sid_value', $sid);
  $query->condition('td.vid', $vid);
  $result = $query->execute()->fetchAssoc();

  if (!empty($result)) {
    return $result;
  }

  return array();
}
