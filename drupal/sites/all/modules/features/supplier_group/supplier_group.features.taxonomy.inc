<?php
/**
 * @file
 * supplier_group.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function supplier_group_taxonomy_default_vocabularies() {
  return array(
    'contact_type' => array(
      'name' => 'Contact Type',
      'machine_name' => 'contact_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'states_prov' => array(
      'name' => 'States/Provinces',
      'machine_name' => 'states_prov',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
