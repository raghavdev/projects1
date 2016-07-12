<?php

/**
 * Implements hook_views_plugins().
 */
function unfi_workflow_views_plugins() {
  return array(
    'argument default' => array(
      'unfi_workflow_inbox' => array(
        'title' => t('Workflow states for the current logged in user'),
        'handler' => 'unfi_workflow_plugin_argument',
      ),
    ),
  );
}
