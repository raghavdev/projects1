<?php

/**
 * Implements hook_views_pre_view
 * Adds Group ID of request item to contextual filter for SRM assigned vendor location fields
 */
function pick_up_location_views_pre_view(&$view, &$display_id, &$args) {
  if (($view->name == 'pick_up_location_entity_reference_filter') && ($display_id == 'ven_ware_loc_og_ent_ref')) {

    $nid = arg(1);
    if (is_numeric($nid)) {
      $node = node_load($nid);
      $groups = array();
      if (isset($node->og_group_ref)) {
        foreach ($node->og_group_ref[$node->language] as $key => $gid) {
          $groups[] = (int) $gid['target_id'];
        }
      }
      $args = $groups;
    }
  }
}