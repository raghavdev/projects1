<?php
/**
 * @file
 * pack_change.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pack_change_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pack_change_node_info() {
  $items = array(
    'pack_change' => array(
      'name' => t('Pack change'),
      'base' => 'node_content',
      'description' => t('Enter a title to help you locate the request later.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
