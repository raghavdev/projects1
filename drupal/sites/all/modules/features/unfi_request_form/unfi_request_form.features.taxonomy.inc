<?php
/**
 * @file
 * unfi_request_form.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function unfi_request_form_taxonomy_default_vocabularies() {
  return array(
    'channel' => array(
      'name' => 'Channel',
      'machine_name' => 'channel',
      'description' => 'Channels for Item request.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'key_clients' => array(
      'name' => 'Key Customer',
      'machine_name' => 'key_clients',
      'description' => 'Key Customer',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
