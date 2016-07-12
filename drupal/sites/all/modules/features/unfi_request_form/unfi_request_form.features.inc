<?php
/**
 * @file
 * unfi_request_form.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unfi_request_form_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function unfi_request_form_node_info() {
  $items = array(
    'request_form' => array(
      'name' => t('Request form'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
