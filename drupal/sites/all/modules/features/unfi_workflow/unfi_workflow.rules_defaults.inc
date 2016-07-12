<?php
/**
 * @file
 * unfi_workflow.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function unfi_workflow_default_rules_configuration() {
  $items = array();
  $items['rules_new_item_request_archived'] = entity_import('rules_config', '{ "rules_new_item_request_archived" : {
      "LABEL" : "New Item Request Archived",
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
            "old_state" : { "value" : { "ANY" : "ANY" } },
            "new_state" : { "value" : { "7" : "7" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "UNFI Supplier Portal New Item Request Archived",
            "message" : "Greetings,\\r\\n \\r\\nThe status of your new item request [node:title] has been approved and archived. More details are listed below.\\r\\n \\r\\n[node:unfi_request_items_archived]\\r\\n \\r\\nComments: [node:workflow-current-state-log-entry]\\r\\n\\r\\nIf you have any questions feel free to contact us at SupplierSupport@UNFI.com.\\r\\n \\r\\n-The Supplier Portal Team",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "\\u003Crburson@unfi.com\\u003E,\\u003Cemorgan@unfi.com\\u003E,\\u003Ckevin@metaltoad.com\\u003E",
            "subject" : "UNFI Supplier Portal New Item Request Archived",
            "message" : "Greetings,\\r\\n \\r\\nThe status of your new item request [node:title] has been approved and archived. More details are listed below.\\r\\n \\r\\n[node:unfi_request_items_archived]\\r\\n \\r\\nComments: [node:workflow-current-state-log-entry]\\r\\n\\r\\nIf you have any questions feel free to contact us at SupplierSupport@UNFI.com.\\r\\n \\r\\n-The Supplier Portal Team",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_new_item_request_created'] = entity_import('rules_config', '{ "rules_new_item_request_created" : {
      "LABEL" : "New Item Request Created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "workflow_rules", "rules" ],
      "ON" : { "node_insert--request_form" : { "bundle" : "request_form" } },
      "DO" : [
        { "workflow_rules_set_state" : { "node" : [ "node" ], "workflow_state" : { "value" : { "2" : "2" } } } }
      ]
    }
  }');
  $items['rules_notify_supplier_of_workflow_state_changes_in_their_request'] = entity_import('rules_config', '{ "rules_notify_supplier_of_workflow_state_changes_in_their_request" : {
      "LABEL" : "Notify Supplier of workflow state changes in their requests",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "workflow_rules", "rules" ],
      "ON" : { "workflow_state_changed" : [] },
      "IF" : [
        { "workflow_check_transition" : {
            "node" : [ "node" ],
            "old_state" : { "value" : { "ANY" : "ANY" } },
            "new_state" : { "value" : { "2" : "2", "33" : "33", "3" : "3", "6" : "6" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "UNFI Supplier Portal New Item Request Update",
            "message" : "Greetings,\\r\\n \\r\\nThe status of your new item request [node:title] has changed. It has changed from [node:workflow-old-state-name] to [node:workflow-current-state-name]. More details are listed below.\\r\\n \\r\\n[node:unfi_request_items]\\r\\n \\r\\nComments: [node:workflow-current-state-log-entry]\\r\\n\\r\\nIf you have any questions feel free to contact us at SupplierSupport@UNFI.com.\\r\\n \\r\\n-The Supplier Portal Team",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
