<?php
/**
 * @file
 * unfi_supplier_group_update_workflow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unfi_supplier_group_update_workflow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function unfi_supplier_group_update_workflow_node_info() {
  $items = array(
    'spoils' => array(
      'name' => t('Spoils'),
      'base' => 'node_content',
      'description' => t('Choose either reclamation or allowance, if allowance is selected then spoils allowance field becomes required.  Approval workflow required for making changes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'terms' => array(
      'name' => t('Terms'),
      'base' => 'node_content',
      'description' => t('Discount / day / net # day Terms apply to supplier number not remit  Legally must show that the supplier has accepted any changes.  Approval workflow required for making changes.'),
      'has_title' => '1',
      'title_label' => t('Terms'),
      'help' => '',
    ),
  );
  return $items;
}
