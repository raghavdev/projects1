<?php
/**
 * @file
 * marketing_dashboard_products_view.features.workflow_access.inc
 */

/**
 * Implements hook_workflow_access_features_default_settings().
 */
function marketing_dashboard_products_view_workflow_access_features_default_settings() {
  $workflows = array();

  $workflows['request_workflow'] = array();
  $workflows['request_workflow']['Draft'] = array();
  $workflows['request_workflow']['Draft']['workflow_features_author_name'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Draft']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Draft']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Draft']['Broker'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['request_workflow']['Draft']['IBL'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Draft']['Item Specialist'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['request_workflow']['Draft']['Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['request_workflow']['Draft']['RCM'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Draft']['SRM'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['request_workflow']['Draft']['Supplier'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['request_workflow']['Draft']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['request_workflow']['Draft']['programmer'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['request_workflow']['Draft']['Gatekeeper'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Draft']['Pack Change East Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Draft']['Pack Change West Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Draft']['UBS Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Draft']['WBS Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Draft']['Marketing'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Draft']['Promotion Team Member'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Declined'] = array();
  $workflows['request_workflow']['Declined']['workflow_features_author_name'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Declined']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Declined']['Broker'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['request_workflow']['Declined']['IBL'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Declined']['Item Specialist'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Declined']['Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['request_workflow']['Declined']['RCM'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Declined']['SRM'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Declined']['Supplier'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['request_workflow']['Declined']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['request_workflow']['Declined']['programmer'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['request_workflow']['Declined']['Gatekeeper'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Declined']['Pack Change East Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Declined']['Pack Change West Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Declined']['UBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Declined']['WBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Declined']['Marketing'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Declined']['Promotion Team Member'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review'] = array();
  $workflows['request_workflow']['Item Specialist review']['workflow_features_author_name'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['Broker'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['IBL'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['Item Specialist'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['RCM'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['SRM'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['Supplier'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['programmer'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['Gatekeeper'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['Pack Change East Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['Pack Change West Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['UBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['WBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['Marketing'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Item Specialist review']['Promotion Team Member'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review'] = array();
  $workflows['request_workflow']['SRM Review']['workflow_features_author_name'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['Broker'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['IBL'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['Item Specialist'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['RCM'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['SRM'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['Supplier'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['programmer'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['Gatekeeper'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['Pack Change East Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['Pack Change West Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['UBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['WBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['Marketing'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['SRM Review']['Promotion Team Member'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review'] = array();
  $workflows['request_workflow']['RCM Review']['workflow_features_author_name'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['Broker'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['IBL'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['Item Specialist'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['RCM'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['SRM'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['Supplier'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['programmer'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['Gatekeeper'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['Pack Change East Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['Pack Change West Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['UBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['WBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['Marketing'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['RCM Review']['Promotion Team Member'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review'] = array();
  $workflows['request_workflow']['Final Review']['workflow_features_author_name'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['Broker'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['IBL'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['Item Specialist'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['RCM'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['SRM'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['Supplier'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['programmer'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['Gatekeeper'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['Pack Change East Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['Pack Change West Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['UBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['WBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['Marketing'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Final Review']['Promotion Team Member'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved'] = array();
  $workflows['request_workflow']['Approved']['workflow_features_author_name'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['Broker'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['IBL'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['Item Specialist'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['RCM'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['SRM'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['Supplier'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['programmer'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['Gatekeeper'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['Pack Change East Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['Pack Change West Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['UBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['WBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['Marketing'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Approved']['Promotion Team Member'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input'] = array();
  $workflows['request_workflow']['Pending UBS Systems Input']['workflow_features_author_name'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['Broker'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['IBL'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['Item Specialist'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['RCM'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['SRM'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['Supplier'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['programmer'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['Gatekeeper'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['Pack Change East Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['Pack Change West Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['UBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['WBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['Marketing'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending UBS Systems Input']['Promotion Team Member'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input'] = array();
  $workflows['request_workflow']['Pending WBS Systems Input']['workflow_features_author_name'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['Broker'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['IBL'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['Item Specialist'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['RCM'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['SRM'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['Supplier'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['programmer'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['Gatekeeper'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['Pack Change East Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['Pack Change West Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['UBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['WBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['Marketing'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Pending WBS Systems Input']['Promotion Team Member'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived'] = array();
  $workflows['request_workflow']['Archived']['workflow_features_author_name'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['Broker'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['IBL'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['Item Specialist'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['RCM'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['SRM'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['Supplier'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['programmer'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['Gatekeeper'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['Pack Change East Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['Pack Change West Coder'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['UBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['WBS Coder'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['Marketing'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['request_workflow']['Archived']['Promotion Team Member'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );

  return $workflows;
}
