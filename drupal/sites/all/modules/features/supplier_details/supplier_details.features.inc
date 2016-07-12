<?php
/**
 * @file
 * supplier_details.features.inc
 */

/**
 * Implements hook_views_api().
 */
function supplier_details_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function supplier_details_flag_default_flags() {
  $flags = array();
  // Exported flag: "Notify SRM of Changes".
  $flags['notify_srm_of_changes'] = array(
    'entity_type' => 'node',
    'title' => 'Notify SRM of Changes',
    'global' => 1,
    'types' => array(
      0 => 'pick_up_location',
    ),
    'flag_short' => 'Notify SRM of changes',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Confirm that SRM has seen changes',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'supplier_details',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
