<?php
/**
 * @file
 * unfi_request_form.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function unfi_request_form_default_rules_configuration() {
  $items = array();
  $items['rules_begin_final_review'] = entity_import('rules_config', '{ "rules_begin_final_review" : {
      "LABEL" : "begin New Item request final review",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "unfi" ],
      "REQUIRES" : [ "flag", "workflow_rules" ],
      "ON" : {
        "flag_flagged_ibl_has_seen_new_item_request" : [],
        "flag_flagged_rcm_has_seen_new_item_request" : []
      },
      "IF" : [
        { "AND" : [
            { "flag_threshold_node" : {
                "flag" : "rcm_has_seen_new_item_request",
                "node" : [ "flagged-node" ],
                "number" : "1"
              }
            },
            { "flag_threshold_node" : {
                "flag" : "ibl_has_seen_new_item_request",
                "node" : [ "flagged-node" ],
                "number" : "1"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "new_item_request_action_switch_to_admin_user" : [] },
        { "workflow_rules_set_state" : {
            "node" : [ "flagged-node" ],
            "workflow_state" : { "value" : { "5" : "5" } },
            "workflow_comment" : "Open review complete."
          }
        },
        { "new_item_request_action_switch_back_from_admin_user" : [] }
      ]
    }
  }');
  return $items;
}
