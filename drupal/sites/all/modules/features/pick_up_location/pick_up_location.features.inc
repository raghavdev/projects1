<?php
/**
 * @file
 * pick_up_location.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pick_up_location_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pick_up_location_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pick_up_location_node_info() {
  $items = array(
    'pick_up_location' => array(
      'name' => t('Vendor Warehouse Location'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Vendor Warehouse Location Name'),
      'help' => '',
    ),
  );
  return $items;
}
