<?php
/**
 * @file
 * unfi_product.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function unfi_product_taxonomy_default_vocabularies() {
  return array(
    'contains_attributes' => array(
      'name' => 'Contains Attributes',
      'machine_name' => 'contains_attributes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'country' => array(
      'name' => 'Countries',
      'machine_name' => 'country',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'dietary_preference_attributes' => array(
      'name' => 'Dietary Preference Attributes',
      'machine_name' => 'dietary_preference_attributes',
      'description' => 'test',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'ethnic' => array(
      'name' => 'Ethnic',
      'machine_name' => 'ethnic',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'fat_content_attributes' => array(
      'name' => 'Fat Content Attributes',
      'machine_name' => 'fat_content_attributes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'free_of_attributes' => array(
      'name' => 'Free Of Attributes',
      'machine_name' => 'free_of_attributes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'kosher_certificates' => array(
      'name' => 'Kosher certificates',
      'machine_name' => 'kosher_certificates',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'major_allergen_attributes' => array(
      'name' => 'Major Allergen Attributes',
      'machine_name' => 'major_allergen_attributes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'other_attributes' => array(
      'name' => 'Other Attributes',
      'machine_name' => 'other_attributes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'processing_attributes' => array(
      'name' => 'Processing Attributes',
      'machine_name' => 'processing_attributes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'rcm_category' => array(
      'name' => 'RCM Category',
      'machine_name' => 'rcm_category',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'salt_content_attributes' => array(
      'name' => 'Salt Content Attributes',
      'machine_name' => 'salt_content_attributes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'sweetener_attributes' => array(
      'name' => 'Sweetener Attributes',
      'machine_name' => 'sweetener_attributes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'third_party_certificates' => array(
      'name' => 'Third Party Certificates',
      'machine_name' => 'third_party_certificates',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'warehouse_groups' => array(
      'name' => 'Warehouse Groups',
      'machine_name' => 'warehouse_groups',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
