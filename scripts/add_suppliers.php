<?php

/**
 * This is a quick & dirty script to load in the Suppliers from a .csv file.
 *
 * File assumes the following columns:
 * Supplier Remit
 * Supplier Name
 * SRM
 *
 * Will check if supplier already exists, will create a new supplier if not.
 *
 * To have SRMs assigned to the groups, SRMs must already have been added as users.
 */

// Insert countries
if (($handle = fopen('../scripts/suppliers.csv', 'r')) !== FALSE) {
  $c = 0;
  while (($data = fgetcsv($handle, 10000, ",")) !== FALSE) {
    $c++;
    // if ($c > 2) {break;}

    if (empty($data[0]) || empty($data[1])) {
      continue;
    }

    // Check if the remit number already exists.
    $query = db_select('node', 'n');
    $query->fields('n', array('nid'));
    $query->join('field_data_field_remit_number', 'r', 'r.entity_id = n.nid AND r.bundle = n.type');
    $query->condition('r.field_remit_number_value', $data[0]);
    $result = $query->execute();
    if ($result->fetchField()) {
      print('REMIT FOUND - SKIPPING: ' . $data[1] . "\r\n");
      continue;
    }

    // Create the node, use admin user.
    $node = new stdClass();
    $node->type = 'supplier';
    $node->status = 1;
    $node->uid = 1;
    $node->language = 'und';
    $node->title = trim($data[1]);
    $node->promote = 0;
    $node->sticky = 0;
    $node->field_remit_number['und'][0]['value'] = $data[0];
    node_save($node);

    print('CREATED: ' .$node->nid . ' | ' . $data[1] . "\r\n");

    // Find the SRM assigned to the supplier and assign as member to supplier group.
    list($fname, $lname) = explode(' ', $data[2]);
    $query = db_select('users', 'u');
    $query->fields('u', array('uid'));
    $query->join('field_data_field_first_name', 'f', "f.entity_id = u.uid AND f.bundle = 'user'");
    $query->join('field_data_field_last_name', 'l', "l.entity_id = u.uid AND l.bundle = 'user'");
    $query->condition('f.field_first_name_value', $fname);
    $query->condition('l.field_last_name_value', $lname);
    $result = $query->execute()->fetchAssoc();
    if (!empty($result)) {
      $insert = db_insert('og_membership');
      $insert->fields(array(
        'type' => 'og_membership_type_default',
        'etid' => $result['uid'],
        'entity_type' => 'user',
        'gid' => $node->nid,
        'group_type' => 'node',
        'state' => 1,
        'field_name' => 'og_user_node',
        'language' => 'en',
      ));
      $insert->execute();

    }
    else {
      print('COULD NOT ASSIGN SRM: ' . $data[1] . "\r\n");
    }

  }

  print($c . ' ROWS PROCESSED');
  fclose($handle);
}
