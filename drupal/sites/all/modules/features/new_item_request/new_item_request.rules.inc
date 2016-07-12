<?php

/**
 * Rules used in New Item Request for state transitions.
 */

/**
 * Implements hook_rules_action_info()
 */
function new_item_request_rules_action_info() {
    $actions = array(
        'new_item_request_action_switch_to_admin_user' => array(
          'label' => t('Switch to admin user'),
          'group' => t('Change user'),
        ),
        'new_item_request_action_switch_back_from_admin_user' => array(
          'label' => t('Switch back from admin user'),
          'group' => t('Change user'),
        ),
    );

    return $actions;
}

/**
 * The action function for 'new_item_request_action_switch_to_admin_user'
 */
function new_item_request_action_switch_to_admin_user() {
    global $user,$original_user,$old_state;
    $original_user = $user;
    $old_state = drupal_save_session();
    drupal_save_session(FALSE);
    // uid = 1 is an administrator role account with permission
    // in the workflow to transition from Open Review to Final Review.
    $user = user_load(1);
}

/**
 * The action function for 'new_item_request_action_switch_back_from_admin_user'
 */
function new_item_request_action_switch_back_from_admin_user() {
    global $user,$original_user,$old_state;
    $user = $original_user;
    drupal_save_session($old_state);
}
