<?php
/**
 * @file
 * unfi_supplier_group_update_workflow.features.workflow_access.inc
 */

/**
 * Implements hook_workflow_access_features_default_settings().
 */
function unfi_supplier_group_update_workflow_workflow_access_features_default_settings() {
  $workflows = array();

  $workflows['supplier_group_data_update'] = array();

  return $workflows;
}
