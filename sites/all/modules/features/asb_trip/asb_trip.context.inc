<?php
/**
 * @file
 * asb_trip.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function asb_trip_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'asb_landing';
  $context->description = '';
  $context->tag = 'ASB';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'trips/asb' => 'trips/asb',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-trips_for_asb-block_3' => array(
          'module' => 'views',
          'delta' => 'trips_for_asb-block_3',
          'region' => 'main_upper',
          'weight' => '-10',
        ),
        'views-news_items-block_2' => array(
          'module' => 'views',
          'delta' => 'news_items-block_2',
          'region' => 'main_upper',
          'weight' => '-9',
        ),
        'block-9' => array(
          'module' => 'block',
          'delta' => '9',
          'region' => 'main_upper',
          'weight' => '-8',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-trips_for_asb-block_2' => array(
          'module' => 'views',
          'delta' => 'trips_for_asb-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('ASB');
  $export['asb_landing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tgb_landing';
  $context->description = '';
  $context->tag = 'TGB';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'trips/tgb' => 'trips/tgb',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-trips_for_tgb-block_3' => array(
          'module' => 'views',
          'delta' => 'trips_for_tgb-block_3',
          'region' => 'main_upper',
          'weight' => '-10',
        ),
        'views-news_items-block_3' => array(
          'module' => 'views',
          'delta' => 'news_items-block_3',
          'region' => 'main_upper',
          'weight' => '-9',
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'main_upper',
          'weight' => '-7',
        ),
        'views-trips_for_tgb-block_2' => array(
          'module' => 'views',
          'delta' => 'trips_for_tgb-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('TGB');
  $export['tgb_landing'] = $context;

  return $export;
}
