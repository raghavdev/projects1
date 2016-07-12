<?php
/**
 * @file
 * unfi_warehouses.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unfi_warehouses_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function unfi_warehouses_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function unfi_warehouses_node_info() {
  $items = array(
    'warehouse' => array(
      'name' => t('Warehouse'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Warehouse name'),
      'help' => '',
    ),
  );
  return $items;
}
