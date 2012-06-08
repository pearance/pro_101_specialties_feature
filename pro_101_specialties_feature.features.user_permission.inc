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

  // Exported permission: create specialty content.
  $permissions['create specialty content'] = array(
    'name' => 'create specialty content',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any specialty content.
  $permissions['delete any specialty content'] = array(
    'name' => 'delete any specialty content',
    'roles' => array(
      0 => 'developer',
      1 => 'professional',
      2 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own specialty content.
  $permissions['delete own specialty content'] = array(
    'name' => 'delete own specialty content',
    'roles' => array(
      0 => 'developer',
      1 => 'professional',
      2 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any specialty content.
  $permissions['edit any specialty content'] = array(
    'name' => 'edit any specialty content',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own specialty content.
  $permissions['edit own specialty content'] = array(
    'name' => 'edit own specialty content',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'node',
  );

  return $permissions;
}
