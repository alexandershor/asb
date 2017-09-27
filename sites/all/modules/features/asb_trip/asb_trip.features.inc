<?php
/**
 * @file
 * asb_trip.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function asb_trip_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function asb_trip_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function asb_trip_node_info() {
  $items = array(
    'app_process' => array(
      'name' => t('Application Process'),
      'base' => 'node_content',
      'description' => t('Use this content type to create a new application process.'),
      'has_title' => '1',
      'title_label' => t('Application Process Name'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => t('ASB testimonial to appear on the testimonials page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'trip' => array(
      'name' => t('Trip'),
      'base' => 'node_content',
      'description' => t('Use this content type to create a trip.'),
      'has_title' => '1',
      'title_label' => t('Process Trip Name'),
      'help' => '',
    ),
    'trip_application' => array(
      'name' => t('Trip Application'),
      'base' => 'node_content',
      'description' => t('Applicants create an application for a specific trip using this content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
