<?php
/**
 * @file
 * unfi_dashboard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unfi_dashboard_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function unfi_dashboard_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function unfi_dashboard_flag_default_flags() {
  $flags = array();
  // Exported flag: "Lock request".
  $flags['lock_request'] = array(
    'entity_type' => 'node',
    'title' => 'Lock request',
    'global' => 1,
    'types' => array(
      0 => 'request_form',
    ),
    'flag_short' => 'Lock request',
    'flag_long' => 'Lock request',
    'flag_message' => '',
    'unflag_short' => 'Unlock request',
    'unflag_long' => 'Unlock request',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'unfi_dashboard',
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
function unfi_dashboard_node_info() {
  $items = array(
    'welcome_slides' => array(
      'name' => t('Welcome Slides'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
