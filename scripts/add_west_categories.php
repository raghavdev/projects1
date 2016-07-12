<?php

/**
 * This is a quick & dirty script to load in the West Categories from a .csv file.
 *
 * File assumes the following columns:
 * Type
 * Cat #
 * Category
 * Sub #
 * Subgroup
 * Final Code
 * Notes/Examples
 *
 * Will check if category already exists, will create a new category if not.
 */

$vocab = taxonomy_vocabulary_machine_name_load('west_category');

// Insert categories
if (($handle = fopen('../scripts/west_categories.csv', 'r')) !== FALSE) {
  $c = 0;
  while (($data = fgetcsv($handle, 10000, ",")) !== FALSE) {
    $c++;
//    if ($c > 2) {break;}

    // Skip the header row and any invalid rows.
    if (empty($data[0]) || empty($data[1]) || !is_numeric($data[1]) || empty($data[3]) || !is_numeric($data[3])) {
      continue;
    }

    $row = array(
      'type' => strtoupper(trim($data[0])),
      'category_number' => trim($data[1]),
      'category' => strtoupper(trim($data[2])),
      'subgroup_number' => trim($data[3]),
      'subgroup' => strtoupper(trim($data[4])),
      'final_code' => strtoupper(trim($data[5])),
    );

    // Clean up the category and subgroup numbers.
    $row['category_number'] = preg_replace("/[^0-9]/",'',$row['category_number']);
    $row['category_number'] = str_pad($row['category_number'], 2, '0', STR_PAD_LEFT);

    $row['subgroup_number'] = preg_replace("/[^0-9]/",'',$row['subgroup_number']);
    $row['subgroup_number'] = str_pad($row['subgroup_number'], 2, '0', STR_PAD_LEFT);

    // Determine all sid's for the row.
    $sid = $row['type'];
    $category_sid = $sid . '|' . $row['category_number'];
    $subgroup_sid = $category_sid . '|' . $row['subgroup_number'];

    // If not category name provided, check for previous entries with that category number.
    if (empty($row['category'])) {
      $cat = fetch_tid_by_sid($category_sid, $vocab->vid);

      if (!empty($cat['name'])) {
        $row['category'] = $cat['name'];
      }
    }

    $parent_tid = process_category(0, $category_sid, $row, $vocab->vid);
    if (!empty($row['subgroup_number']) && is_numeric($row['subgroup_number'])) {
      $parent_tid = process_category(1, $subgroup_sid, $row, $vocab->vid, $parent_tid);
    }
  }

  fclose($handle);

}

function process_category($level, $sid, $row, $vid, $parent_tid=0) {
  // Check if a record already exists, if so update it.
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

  $term->name = ($level == 1) ? $row['subgroup'] : $row['category'];
  $term->parent = array($parent_tid);

  // Add the other fields as needed based on location in the hierarchy.
  $term->field_type = array(LANGUAGE_NONE => array(0 => array('value' => $row['type'])));
  $term->field_west_category_number = array(LANGUAGE_NONE => array(0 => array('value' => $row['category_number'])));
  $term->field_category = array(LANGUAGE_NONE => array(0 => array('value' => $row['category'])));
  if ($level > 0) {
    $term->field_subgroup_number = array(LANGUAGE_NONE => array(0 => array('value' => $row['subgroup_number'])));
    $term->field_subgroup = array(LANGUAGE_NONE => array(0 => array('value' => $row['subgroup'])));
  }
  $term->field_west_code = array(LANGUAGE_NONE => array(0 => array('value' => $row['final_code'])));

  taxonomy_term_save($term);

  if (empty($term->tid)) {
    $action = 'FAILED';
  }
  print($action . ': ' . $sid . ' ' . $row['category']);
  if ($level > 0) {
    print(' / ' . $row['subgroup']);
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

  return 0;
}
