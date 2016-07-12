<?php
/**
 * @file
 * new_item_request.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function new_item_request_ctools_plugin_api($module = NULL, $api = NULL) {
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
function new_item_request_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function new_item_request_flag_default_flags() {
  $flags = array();
  // Exported flag: "ibl_has_seen_new_item_request".
  $flags['ibl_has_seen_new_item_request'] = array(
    'entity_type' => 'node',
    'title' => 'ibl_has_seen_new_item_request',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'IBL approval requested',
    'flag_long' => '',
    'flag_message' => 'IBL has seen this new item request',
    'unflag_short' => 'Unflag this item',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => 'This new item request has already been flagged by an IBL.',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'new_item_request',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "rcm_has_seen_new_item_request".
  $flags['rcm_has_seen_new_item_request'] = array(
    'entity_type' => 'node',
    'title' => 'rcm_has_seen_new_item_request',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'RCM approval requested',
    'flag_long' => '',
    'flag_message' => 'RCM has seen this new item request',
    'unflag_short' => 'Unflag this item',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => 'This new item request has already been flagged by an RCM.',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'new_item_request',
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
function new_item_request_node_info() {
  $items = array(
    'new_item_request' => array(
      'name' => t('New Item Request'),
      'base' => 'node_content',
      'description' => t('The base request used when a supplier wants to request that new items be added to UNFI systems.'),
      'has_title' => '1',
      'title_label' => t('New request title'),
      'help' => '',
    ),
    'request_item' => array(
      'name' => t('Request Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Product Description'),
      'help' => '',
    ),
  );
  return $items;
}
