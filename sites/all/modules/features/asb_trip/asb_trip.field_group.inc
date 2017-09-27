<?php
/**
 * @file
 * asb_trip.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function asb_trip_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_apppro_settings|node|app_process|default';
  $field_group->group_name = 'group_apppro_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'app_process';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'App Process Settings',
    'weight' => '0',
    'children' => array(
      0 => 'field_apppro_status',
      1 => 'field_apppro_num_ranked',
      2 => 'field_apppro_waitlist_size',
      3 => 'field_apppro_trips_visible',
      4 => 'field_apppro_status_visible',
      5 => 'field_apppro_max_tripapps',
      6 => 'field_apppro_rosters_visible',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'App Process Settings',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_apppro_settings|node|app_process|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_apppro_settings|node|app_process|form';
  $field_group->group_name = 'group_apppro_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'app_process';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'App Process Settings',
    'weight' => '-3',
    'children' => array(
      0 => 'field_apppro_accept_msg',
      1 => 'field_apppro_common_webform',
      2 => 'field_apppro_max_tripapps',
      3 => 'field_apppro_num_ranked',
      4 => 'field_apppro_reject_msg',
      5 => 'field_apppro_rosters_visible',
      6 => 'field_apppro_status',
      7 => 'field_apppro_status_visible',
      8 => 'field_apppro_trips_visible',
      9 => 'field_apppro_waitlist_msg',
      10 => 'field_apppro_waitlist_size',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(),
    ),
  );
  $export['group_apppro_settings|node|app_process|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_apppro_settings|node|app_process|teaser';
  $field_group->group_name = 'group_apppro_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'app_process';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'App Process Settings',
    'weight' => '-3',
    'children' => array(
      0 => 'field_apppro_accept_msg',
      1 => 'field_apppro_common_webform',
      2 => 'field_apppro_max_tripapps',
      3 => 'field_apppro_num_ranked',
      4 => 'field_apppro_reject_msg',
      5 => 'field_apppro_rosters_visible',
      6 => 'field_apppro_status',
      7 => 'field_apppro_status_visible',
      8 => 'field_apppro_trips_visible',
      9 => 'field_apppro_waitlist_msg',
      10 => 'field_apppro_waitlist_size',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(),
    ),
  );
  $export['group_apppro_settings|node|app_process|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_trip_basic_info|node|trip|default';
  $field_group->group_name = 'group_trip_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'trip';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_trip_num_participants',
      1 => 'field_trip_air_travel',
      2 => 'field_trip_description',
      3 => 'field_trip_name',
      4 => 'field_trip_location',
      5 => 'field_trip_apppro',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Basic Information',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_trip_basic_info|node|trip|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_trip_basic_info|node|trip|form';
  $field_group->group_name = 'group_trip_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'trip';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_trip_num_participants',
      1 => 'field_trip_air_travel',
      2 => 'field_trip_description',
      3 => 'field_trip_name',
      4 => 'field_trip_location',
      5 => 'field_trip_apppro',
      6 => 'field_trip_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(),
    ),
  );
  $export['group_trip_basic_info|node|trip|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_trip_basic_info|node|trip|teaser';
  $field_group->group_name = 'group_trip_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'trip';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '-4',
    'children' => array(
      0 => 'field_trip_air_travel',
      1 => 'field_trip_apppro',
      2 => 'field_trip_description',
      3 => 'field_trip_location',
      4 => 'field_trip_name',
      5 => 'field_trip_num_participants',
      6 => 'field_trip_questions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(),
    ),
  );
  $export['group_trip_basic_info|node|trip|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_trip_leaders|node|trip|default';
  $field_group->group_name = 'group_trip_leaders';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'trip';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Trip Leaders',
    'weight' => '3',
    'children' => array(
      0 => 'field_trip_leaders',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(),
    ),
  );
  $export['group_trip_leaders|node|trip|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_trip_leaders|node|trip|form';
  $field_group->group_name = 'group_trip_leaders';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'trip';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Trip Leaders',
    'weight' => '4',
    'children' => array(
      0 => 'field_trip_leaders',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(),
    ),
  );
  $export['group_trip_leaders|node|trip|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_trip_leaders|node|trip|teaser';
  $field_group->group_name = 'group_trip_leaders';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'trip';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Trip Leaders',
    'weight' => '-3',
    'children' => array(
      0 => 'field_trip_leaders',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(),
    ),
  );
  $export['group_trip_leaders|node|trip|teaser'] = $field_group;

  return $export;
}
