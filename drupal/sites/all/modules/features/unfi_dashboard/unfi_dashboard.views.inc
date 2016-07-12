<?php

/**
 * Implements hook_views_plugins().
 */
function unfi_dashboard_views_plugins() {
  return array(
    'argument default' => array(
      'unfi_dashboard_inbox_workflow' => array(
        'title'   => t('UNFI Dashboard: inbox Workflow states for the current logged in user'),
        'handler' => 'unfi_dashboard_workflow_states_plugin_argument',
      ),
    ),
  );
}
