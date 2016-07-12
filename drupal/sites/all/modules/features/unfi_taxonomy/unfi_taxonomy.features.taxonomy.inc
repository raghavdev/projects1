<?php
/**
 * @file
 * unfi_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function unfi_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'account_codes' => array(
      'name' => 'Account Codes',
      'machine_name' => 'account_codes',
      'description' => 'The major accounting codes.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'east_category' => array(
      'name' => 'East Category',
      'machine_name' => 'east_category',
      'description' => 'The East (UBS) Group, Category, & Class',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'west_category' => array(
      'name' => 'West Category',
      'machine_name' => 'west_category',
      'description' => 'The West (WBS) Category & Subgroup',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'west_dept' => array(
      'name' => 'West Dept',
      'machine_name' => 'west_dept',
      'description' => 'The West (WBS) Department & Profile',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'west_subheader_catalog' => array(
      'name' => 'West Subheader Catalog',
      'machine_name' => 'west_subheader_catalog',
      'description' => 'West (WBS) Subheader Catalog',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
