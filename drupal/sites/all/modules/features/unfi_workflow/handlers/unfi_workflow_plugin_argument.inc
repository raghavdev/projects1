<?php

class unfi_workflow_plugin_argument extends views_plugin_argument_default {

  /**
   * Returns the list of state IDs (sid) that the current user can view.
   */
  function get_argument() {
    global $user;
    $states = array();

    $query = db_select('workflow_access', 'wa');
    $query->leftJoin('workflow_states', 'ws', 'wa.sid=ws.sid');
    $query->fields('wa', array('sid'));
    $query->condition('wa.rid', array_keys($user->roles));
    $query->condition('wa.grant_view', 1, '>='); // TODO: could be altered to grant_update
    // TODO: also could be reverted back to check if the user can transition from the current state

    $result = $query->execute();

    while (($sid = $result->fetchField())) {
      $states[$sid] = $sid;
    }

    return empty($states) ? 0 : implode(',', $states);
  }
}
