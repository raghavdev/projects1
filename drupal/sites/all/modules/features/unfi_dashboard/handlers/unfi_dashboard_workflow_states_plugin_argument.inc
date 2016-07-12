<?php

class unfi_dashboard_workflow_states_plugin_argument extends views_plugin_argument_default {

  /**
   * List the options relevant for this plugin.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['glue'] = array('default' => '+');

    return $options;
  }

  /**
   * Provide the default form for setting options.
   */
  function options_form(&$form, &$form_state) {
    $form['glue'] = array(
      '#type'          => 'select',
      '#title'         => t('Concatenator'),
      '#options'       => array('+' => '+', ',' => ','),
      '#default_value' => $this->options['glue'],
      '#description'   => t('Select the concatenator used to merge multiple state IDs.<BR />'.
        'Remember to turn on the "Allow multiple values" option in the "more" settings for this contextual filter.'),
    );
  }

  /**
   * Returns the list of state IDs (sid) that the current user can transition from.
   */
  function get_argument() {
    global $user;
    $states = array();
    $workflows = array();
    // Build a list of state IDs based on administrative options selected
    $inbox_settings = variable_get('unfi_dashboard_inbox', array());
    // Loop through each of the user's roles, most likely will be just one
    foreach (array_keys($user->roles) as $rid) {
      // If there are workflow states selected for this role
      if (!empty($inbox_settings[$rid]['states'])) {
        // Loop through each of the workflows with states
        foreach ($inbox_settings[$rid]['states'] as $wid => $selected) {
          // Log that the workflow has been handled by admin options
          if (!isset($workflows[$wid])) {
            $workflows[$wid] = $wid;
          }
          // Add each state that has been selected to be shown in the inbox
          foreach ($selected as $sid) {
            $states[$sid] = $sid;
          }
        }
      }
    }
    // Since the administrative options have been restricted to the New Item Request workflow
    // and that it will be desired to show other items in the inbox,
    // (also since some roles like 'administrator' and 'programmer' don't have options selected)
    // continue to add states of other workflows that the user has viewing AND editing access
    $query = db_select('workflow_access', 'wa');
    $query->fields('wa', array('sid'));
    if (!empty($workflows)) {
      // Join the states table to filter out workflow IDs already processed in the options
      $query->leftJoin('workflow_states', 'ws', 'wa.sid=ws.sid');
      $query->condition('ws.wid', $workflows, 'NOT IN');
    }
    $query->condition('wa.rid', array_keys($user->roles));
    $query->condition('wa.grant_view', 1, '>=');
    $query->condition('wa.grant_update', 1, '>=');
    // Execute query
    $result = $query->execute();
    // Store IDs in a fashion that doesn't duplicated state IDs
    while (($sid = $result->fetchField())) {
      $states[$sid] = $sid;
    }
    // If empty, return 0 so that nothing is shown, otherwise concatenate the list 
    return empty($states) ? 0 : implode($this->options['glue'], $states);
  }
}
