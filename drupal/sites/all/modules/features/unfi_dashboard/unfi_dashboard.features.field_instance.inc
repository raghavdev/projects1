<?php
/**
 * @file
 * unfi_dashboard.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function unfi_dashboard_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-welcome_slides-field_welcome_slides'
  $field_instances['node-welcome_slides-field_welcome_slides'] = array(
    'bundle' => 'welcome_slides',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_welcome_slides',
    'label' => 'Welcome Slides',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '1024x340',
      'required_by_role' => array(),
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'welcome_slides',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Welcome Slides');

  return $field_instances;
}
