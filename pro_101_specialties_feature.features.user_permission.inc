<?php
/**
 * @file
 * pro_101_specialties_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_specialties_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer specialties vocabulary terms.
  $permissions['administer specialties vocabulary terms'] = array(
    'name' => 'administer specialties vocabulary terms',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'vppr',
  );

  // Exported permission: create specialty content.
  $permissions['create specialty content'] = array(
    'name' => 'create specialty content',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any specialty content.
  $permissions['delete any specialty content'] = array(
    'name' => 'delete any specialty content',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own specialty content.
  $permissions['delete own specialty content'] = array(
    'name' => 'delete own specialty content',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in specialties.
  $permissions['delete terms in specialties'] = array(
    'name' => 'delete terms in specialties',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any specialty content.
  $permissions['edit any specialty content'] = array(
    'name' => 'edit any specialty content',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own specialty content.
  $permissions['edit own specialty content'] = array(
    'name' => 'edit own specialty content',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in specialties.
  $permissions['edit terms in specialties'] = array(
    'name' => 'edit terms in specialties',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: enter specialty revision log entry.
  $permissions['enter specialty revision log entry'] = array(
    'name' => 'enter specialty revision log entry',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override specialty authored by option.
  $permissions['override specialty authored by option'] = array(
    'name' => 'override specialty authored by option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override specialty authored on option.
  $permissions['override specialty authored on option'] = array(
    'name' => 'override specialty authored on option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override specialty promote to front page option.
  $permissions['override specialty promote to front page option'] = array(
    'name' => 'override specialty promote to front page option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override specialty published option.
  $permissions['override specialty published option'] = array(
    'name' => 'override specialty published option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override specialty revision option.
  $permissions['override specialty revision option'] = array(
    'name' => 'override specialty revision option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override specialty sticky option.
  $permissions['override specialty sticky option'] = array(
    'name' => 'override specialty sticky option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
