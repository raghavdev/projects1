<?php
/**
 * @file
 * supplier_group.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function supplier_group_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function supplier_group_flag_default_flags() {
  $flags = array();
  // Exported flag: "primary contact".
  $flags['primary_contact'] = array(
    'entity_type' => 'field_collection_item',
    'title' => 'primary contact',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Flag this item',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unflag this item',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => 'Please select a new primary contact.',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'supplier_group',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function supplier_group_node_info() {
  $items = array(
    'brand' => array(
      'name' => t('Brand'),
      'base' => 'node_content',
      'description' => t('A name or term that identifies one seller\'s goods as distinct from those of other seller\'s.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'region' => array(
      'name' => t('Region'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'supplier' => array(
      'name' => t('Supplier'),
      'base' => 'node_content',
      'description' => t('A type of Vendor who supply UNFI with items that we resell to our customers.'),
      'has_title' => '1',
      'title_label' => t('Supplier Name'),
      'help' => '',
    ),
    'supplier_contact' => array(
      'name' => t('Supplier Contact'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Contact Name'),
      'help' => '',
    ),
  );
  return $items;
}
