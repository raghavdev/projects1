<?php
/**
 * @file
 * supplier_group.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function supplier_group_default_rules_configuration() {
  $items = array();
  $items['rules_primary_contact_flagged'] = entity_import('rules_config', '{ "rules_primary_contact_flagged" : {
      "LABEL" : "primary contact flagged",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "unfi" ],
      "REQUIRES" : [ "flag" ],
      "ON" : { "flag_flagged_primary_contact" : [] },
      "DO" : [
        { "flag_trim" : {
            "flag" : "primary_contact",
            "flagging_user" : [ "flagging_user" ],
            "cutoff_size" : "1",
            "trim_newest" : 0,
            "permission_check" : 0
          }
        }
      ]
    }
  }');
  return $items;
}
