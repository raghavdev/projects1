<?php
/**
 * @file
 * supplier_details.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function supplier_details_default_rules_configuration() {
  $items = array();
  $items['supplier_details_pick_up_location_created'] = entity_import('rules_config', '{ "supplier_details_pick_up_location_created" : {
      "LABEL" : "Vendor Warehouse Location Created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "flag", "og", "rules" ],
      "ON" : { "node_insert--pick_up_location" : { "bundle" : "pick_up_location" } },
      "DO" : [
        { "flag_flagnode" : {
            "flag" : "notify_srm_of_changes",
            "node" : [ "node" ],
            "flagging_user" : [ "site:current-user" ],
            "permission_check" : 1
          }
        },
        { "og_get_members" : {
            "USING" : {
              "group_content" : [ "node" ],
              "states" : { "value" : [] },
              "not_states" : 0,
              "roles" : { "value" : [] },
              "not_roles" : 0,
              "user_roles" : { "value" : { "8" : "8" } },
              "not_user_roles" : 0
            },
            "PROVIDE" : { "group_members" : { "group_members" : "List of group members" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-members" ] },
            "ITEM" : { "group_member" : "Current group member" },
            "DO" : [
              { "mail" : {
                  "to" : [ "group-member:mail" ],
                  "subject" : "The [node:content-type], [node:title], for [node:og-group-ref] has been created.",
                  "message" : "Hello [group-member:name],\\r\\n\\r\\nOn [site:current-date:long], [site:current-user] created [node:title] a [node:content-type] for [node:og-group-ref].\\r\\nClick to view: [node:url]\\r\\n\\r\\nContact:\\r\\n[node:field_contact]\\r\\n\\r\\nAddress:\\r\\n[node:field-address:thoroughfare]\\r\\n[node:field-address:premise]\\r\\n[node:field-address:locality], [node:field-address:administrative_area] [node:field-address:postal_code]\\r\\n[node:field-address:country]\\r\\n\\r\\nHours:\\r\\n[node:field-hours]\\r\\n\\r\\nAppointment Required:\\r\\n[node:field-appointment-required]\\r\\n\\r\\nSpecial Instructions:\\r\\n[node:field-special-instructions]\\r\\n\\r\\nVendor Account Number - East:\\r\\n[node:field-supplier-id-east]\\r\\n\\r\\nVendor Account Number - West:\\r\\n[node:field-supplier-id-west]\\r\\n\\r\\nFreight Form:\\r\\n[node:field-freight-form:file]\\r\\n\\r\\n[site:name]\\r\\n",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['supplier_details_pick_up_location_deleted'] = entity_import('rules_config', '{ "supplier_details_pick_up_location_deleted" : {
      "LABEL" : "Vendor Warehouse Location Deleted",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "og", "rules" ],
      "ON" : { "node_delete--pick_up_location" : { "bundle" : "pick_up_location" } },
      "DO" : [
        { "og_get_members" : {
            "USING" : {
              "group_content" : [ "node" ],
              "states" : { "value" : [] },
              "not_states" : 0,
              "roles" : { "value" : [] },
              "not_roles" : 0,
              "user_roles" : { "value" : { "8" : "8" } },
              "not_user_roles" : 0
            },
            "PROVIDE" : { "group_members" : { "group_members" : "List of group members" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-members" ] },
            "ITEM" : { "group_member" : "Current group member" },
            "DO" : [
              { "mail" : {
                  "to" : [ "group-member:mail" ],
                  "subject" : "The [node:content-type], [node:title], for [node:og-group-ref] has been deleted.",
                  "message" : "Hello [group-member:name],\\r\\n\\r\\nOn [site:current-date:long], [site:current-user] deleted [node:title] a [node:content-type] for [node:og-group-ref].\\r\\n\\r\\nContact:\\r\\n[node:field_contact]\\r\\n\\r\\nAddress:\\r\\n[node:field-address:thoroughfare]\\r\\n[node:field-address:premise]\\r\\n[node:field-address:locality], [node:field-address:administrative_area] [node:field-address:postal_code]\\r\\n[node:field-address:country]\\r\\n\\r\\nHours:\\r\\n[node:field-hours]\\r\\n\\r\\nAppointment Required:\\r\\n[node:field-appointment-required]\\r\\n\\r\\nSpecial Instructions:\\r\\n[node:field-special-instructions]\\r\\n\\r\\nVendor Account Number - East:\\r\\n[node:field-supplier-id-east]\\r\\n\\r\\nVendor Account Number - West:\\r\\n[node:field-supplier-id-west]\\r\\n\\r\\nFreight Form:\\r\\n[node:field-freight-form:file]\\r\\n\\r\\n[site:name]\\r\\n",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['supplier_details_pick_up_location_updated'] = entity_import('rules_config', '{ "supplier_details_pick_up_location_updated" : {
      "LABEL" : "Vendor Warehouse Location Updated",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "flag", "og", "rules" ],
      "ON" : { "node_update--pick_up_location" : { "bundle" : "pick_up_location" } },
      "IF" : [
        { "NOT flag_flagged_node" : {
            "flag" : "notify_srm_of_changes",
            "node" : [ "node" ],
            "flagging_user" : [ "site:current-user" ]
          }
        }
      ],
      "DO" : [
        { "flag_flagnode" : {
            "flag" : "notify_srm_of_changes",
            "node" : [ "node" ],
            "flagging_user" : [ "site:current-user" ],
            "permission_check" : 1
          }
        },
        { "og_get_members" : {
            "USING" : {
              "group_content" : [ "node" ],
              "states" : { "value" : [] },
              "not_states" : 0,
              "roles" : { "value" : [] },
              "not_roles" : 0,
              "user_roles" : { "value" : { "8" : "8" } },
              "not_user_roles" : 0
            },
            "PROVIDE" : { "group_members" : { "group_members" : "List of group members" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-members" ] },
            "ITEM" : { "group_member" : "Current group member" },
            "DO" : [
              { "mail" : {
                  "to" : [ "group-member:mail" ],
                  "subject" : "The [node:content-type], [node:title], for [node:og-group-ref] has been updated.",
                  "message" : "Hello [group-member:name],\\r\\n\\r\\nOn [site:current-date:long], [site:current-user] updated [node:title] a [node:content-type] for [node:og-group-ref].\\r\\nClick to view: [node:url]\\r\\n\\r\\n====NEW====\\r\\n\\r\\nContact:\\r\\n[node:field_contact]\\r\\n\\r\\nAddress:\\r\\n[node:field-address:thoroughfare]\\r\\n[node:field-address:premise]\\r\\n[node:field-address:locality], [node:field-address:administrative_area] [node:field-address:postal_code]\\r\\n[node:field-address:country]\\r\\n\\r\\nHours:\\r\\n[node:field-hours]\\r\\n\\r\\nAppointment Required:\\r\\n[node:field-appointment-required]\\r\\n\\r\\nSpecial Instructions:\\r\\n[node:field-special-instructions]\\r\\n\\r\\nVendor Account Number - East:\\r\\n[node:field-supplier-id-east]\\r\\n\\r\\nVendor Account Number - West:\\r\\n[node:field-supplier-id-west]\\r\\n\\r\\nFreight Form:\\r\\n[node:field-freight-form:file]\\r\\n\\r\\n====OLD====\\r\\n\\r\\nContact:\\r\\n[node-unchanged:field_contact]\\r\\n\\r\\nAddress:\\r\\n[node-unchanged:field-address:thoroughfare]\\r\\n[node-unchanged:field-address:premise]\\r\\n[node-unchanged:field-address:locality], [node-unchanged:field-address:administrative_area] [node-unchanged:field-address:postal_code]\\r\\n[node-unchanged:field-address:country]\\r\\n\\r\\nHours:\\r\\n[node-unchanged:field-hours]\\r\\n\\r\\nAppointment Required:\\r\\n[node-unchanged:field-appointment-required]\\r\\n\\r\\nSpecial Instructions:\\r\\n[node-unchanged:field-special-instructions]\\r\\n\\r\\nVendor Account Number - East:\\r\\n[node-unchanged:field-supplier-id-east]\\r\\n\\r\\nVendor Account Number - West:\\r\\n[node-unchanged:field-supplier-id-west]\\r\\n\\r\\nFreight Form:\\r\\n[node-unchanged:field-freight-form:file]\\r\\n\\r\\n[site:name]\\r\\n",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
