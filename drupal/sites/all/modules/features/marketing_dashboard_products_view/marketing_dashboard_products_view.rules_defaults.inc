<?php
/**
 * @file
 * marketing_dashboard_products_view.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function marketing_dashboard_products_view_default_rules_configuration() {
  $items = array();
  $items['rules_moved_out_of_archived_status_email'] = entity_import('rules_config', '{ "rules_moved_out_of_archived_status_email" : {
      "LABEL" : "Moved Out Of Archived Status Email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "workflow_rules" ],
      "ON" : { "workflow_state_changed" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "request_form" : "request_form" } }
          }
        },
        { "workflow_check_transition" : {
            "node" : [ "node" ],
            "old_state" : { "value" : { "7" : "7" } },
            "new_state" : { "value" : { "ANY" : "ANY" } }
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "17" : "17" } },
            "subject" : "UNFI Supplier Portal New Item Request Archive Status Update",
            "message" : "Greetings,\\r\\n \\r\\nThe status of your new item request [node:title] has been changed from archived to [node:workflow-current-state-name]. More details are listed below.\\r\\n \\r\\n[node:unfi_request_items_archived]\\r\\n \\r\\nComments: [node:workflow-current-state-log-entry]\\r\\n\\r\\nIf you have any questions feel free to contact us at SupplierSupport@UNFI.com.\\r\\n \\r\\n-The Supplier Portal Team"
          }
        }
      ]
    }
  }');
  return $items;
}
