<?php
/**
 * @file
 * pro_101_specialties_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function pro_101_specialties_feature_default_rules_configuration() {
  $items = array();
  $items['rules_add_specialty_to_taxonomy'] = entity_import('rules_config', '{ "rules_add_specialty_to_taxonomy" : {
      "LABEL" : "Add specialty to taxonomy",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "specialty" : "specialty" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "taxonomy_term",
              "param_name" : "[node:title]",
              "param_vocabulary" : "2"
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        }
      ]
    }
  }');
  return $items;
}
