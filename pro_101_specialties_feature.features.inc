<?php
/**
 * @file
 * pro_101_specialties_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pro_101_specialties_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pro_101_specialties_feature_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pro_101_specialties_feature_node_info() {
  $items = array(
    'specialty' => array(
      'name' => t('Specialty'),
      'base' => 'node_content',
      'description' => t('Use <em>Specialty</em> to define areas of professional expertise.'),
      'has_title' => '1',
      'title_label' => t('Specialty'),
      'help' => '',
    ),
  );
  return $items;
}
