<?php

/**
 * Implements hook_views_plugins().
 */
function unfi_custom_views_plugins() {
  return array(
    'argument default' => array(
      'unfi_custom_group_ref' => array(
        'title' => t('UNFI Custom: Group ID for the current node or user\'s group(s)'),
        'handler' => 'unfi_custom_plugin_argument',
      ),
    ),
  );
}

/**
 * Implementation of hook_views_data()
 */
function unfi_custom_views_data() {
  $data['views']['add_new_content_link'] = array(
    'title' => t('Add new content link'),
    'help'  => t('Add new content link.'),
    'area'  => array(
      'handler' => 'add_new_content_link_area_handler',
    ),
  );
  return $data;
}
