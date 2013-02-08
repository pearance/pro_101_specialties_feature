<?php
/**
 * @file
 * pro_101_specialties_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pro_101_specialties_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'specialties';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'specialties' => 'specialties',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['specialties'] = $context;

  return $export;
}
