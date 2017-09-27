<?php
/**
 * @file
 * asb_trip.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function asb_trip_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'applications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    9 => '9',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'draggableviews' => 'draggableviews',
    'nid' => 'nid',
    'created' => 'created',
    'field_tripapp_pref' => 'field_tripapp_pref',
    'field_tripapp_status' => 'field_tripapp_status',
    'field_answer' => 'field_answer',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tripapp_pref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tripapp_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_answer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results were found';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'trip_application::field_tripapp_status' => 'trip_application::field_tripapp_status',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Preference */
  $handler->display->display_options['fields']['field_tripapp_pref']['id'] = 'field_tripapp_pref';
  $handler->display->display_options['fields']['field_tripapp_pref']['table'] = 'field_data_field_tripapp_pref';
  $handler->display->display_options['fields']['field_tripapp_pref']['field'] = 'field_tripapp_pref';
  $handler->display->display_options['fields']['field_tripapp_pref']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Trip Application Status */
  $handler->display->display_options['fields']['field_tripapp_status']['id'] = 'field_tripapp_status';
  $handler->display->display_options['fields']['field_tripapp_status']['table'] = 'field_data_field_tripapp_status';
  $handler->display->display_options['fields']['field_tripapp_status']['field'] = 'field_tripapp_status';
  $handler->display->display_options['fields']['field_tripapp_status']['type'] = 'editable';
  $handler->display->display_options['fields']['field_tripapp_status']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Application';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nid_1']['link_to_node'] = TRUE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'applications:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Preference (field_tripapp_pref) */
  $handler->display->display_options['sorts']['field_tripapp_pref_value']['id'] = 'field_tripapp_pref_value';
  $handler->display->display_options['sorts']['field_tripapp_pref_value']['table'] = 'field_data_field_tripapp_pref';
  $handler->display->display_options['sorts']['field_tripapp_pref_value']['field'] = 'field_tripapp_pref_value';
  /* Contextual filter: Content: Trip to Apply For (field_tripapp_trip) */
  $handler->display->display_options['arguments']['field_tripapp_trip_target_id']['id'] = 'field_tripapp_trip_target_id';
  $handler->display->display_options['arguments']['field_tripapp_trip_target_id']['table'] = 'field_data_field_tripapp_trip';
  $handler->display->display_options['arguments']['field_tripapp_trip_target_id']['field'] = 'field_tripapp_trip_target_id';
  $handler->display->display_options['arguments']['field_tripapp_trip_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_tripapp_trip_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tripapp_trip_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tripapp_trip_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tripapp_trip_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_tripapp_trip_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_tripapp_trip_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_tripapp_trip_target_id']['validate_options']['types'] = array(
    'trip' => 'trip',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'trip_application' => 'trip_application',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'node/%/trip_applications';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Applications';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['applications'] = $view;

  $view = new view();
  $view->name = 'questions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Questions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Questions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'status_1' => 'status_1',
    'title_1' => 'title_1',
    'status' => 'status',
    'created' => 'created',
    'webform_submission_count_node' => 'webform_submission_count_node',
    'webform_results' => 'webform_results',
    'edit_node' => 'webform_results',
    'delete_node' => 'webform_results',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'webform_submission_count_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'webform_results' => array(
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_trip_questions_node']['id'] = 'reverse_field_trip_questions_node';
  $handler->display->display_options['relationships']['reverse_field_trip_questions_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_trip_questions_node']['field'] = 'reverse_field_trip_questions_node';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Question';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status_1']['id'] = 'status_1';
  $handler->display->display_options['fields']['status_1']['table'] = 'node';
  $handler->display->display_options['fields']['status_1']['field'] = 'status';
  $handler->display->display_options['fields']['status_1']['not'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_trip_questions_node';
  $handler->display->display_options['fields']['title_1']['label'] = 'Trip';
  /* Field: Webform: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'webform';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Webform: Webform submission count */
  $handler->display->display_options['fields']['webform_submission_count_node']['id'] = 'webform_submission_count_node';
  $handler->display->display_options['fields']['webform_submission_count_node']['table'] = 'node';
  $handler->display->display_options['fields']['webform_submission_count_node']['field'] = 'webform_submission_count_node';
  $handler->display->display_options['fields']['webform_submission_count_node']['label'] = 'Submissions';
  /* Field: Webform: Webform results link */
  $handler->display->display_options['fields']['webform_results']['id'] = 'webform_results';
  $handler->display->display_options['fields']['webform_results']['table'] = 'node';
  $handler->display->display_options['fields']['webform_results']['field'] = 'webform_results';
  $handler->display->display_options['fields']['webform_results']['label'] = 'Actions';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => 2,
    1 => 0,
    3 => 0,
    16 => 0,
    15 => 0,
    14 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
    11 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Question';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => 2,
    1 => 0,
    3 => 0,
    16 => 0,
    15 => 0,
    14 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
    11 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'webform' => 'webform',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'reverse_field_trip_questions_node';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Trip';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => 2,
    1 => 0,
    3 => 0,
    16 => 0,
    15 => 0,
    14 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
    11 => 0,
    13 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/questions';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Questions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['questions'] = $view;

  $view = new view();
  $view->name = 'sasb_confirmed_appications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'webform_submissions';
  $view->human_name = 'Confirmed applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    9 => '9',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'draggableviews' => 'draggableviews',
    'nothing' => 'nothing',
    'sid' => 'sid',
    'submitted' => 'submitted',
    'webform_all_fields' => 'webform_all_fields',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'draggableviews' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'submitted' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'webform_all_fields' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Total applications: @total';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There are no submissions for this form. <a href="/node/!1">View this form</a>.';
  $handler->display->display_options['empty']['area_text_custom']['tokenize'] = TRUE;
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'ID';
  $handler->display->display_options['fields']['sid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['path'] = 'node/!1/applications/[sid]';
  $handler->display->display_options['fields']['sid']['separator'] = '';
  /* Field: Webform submissions: Submitted */
  $handler->display->display_options['fields']['submitted']['id'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['date_format'] = 'custom';
  $handler->display->display_options['fields']['submitted']['custom_date_format'] = 'm/d/Y';
  $handler->display->display_options['fields']['submitted']['second_date_format'] = 'long';
  /* Field: Webform submission data: All values */
  $handler->display->display_options['fields']['webform_all_fields']['id'] = 'webform_all_fields';
  $handler->display->display_options['fields']['webform_all_fields']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['webform_all_fields']['field'] = 'webform_all_fields';
  $handler->display->display_options['fields']['webform_all_fields']['label'] = '';
  /* Contextual filter: Webform submissions: Node */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'webform_submissions';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $export['sasb_confirmed_appications'] = $view;

  $view = new view();
  $view->name = 'trip_applications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'webform_submissions';
  $view->human_name = 'trip_applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    9 => '9',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'draggableviews' => 'draggableviews',
    'nothing' => 'nothing',
    'sid' => 'sid',
    'submitted' => 'submitted',
    'webform_all_fields' => 'webform_all_fields',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'draggableviews' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'submitted' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'webform_all_fields' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Total applications: @total';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There are no submissions for this form. <a href="/node/!1">View this form</a>.';
  $handler->display->display_options['empty']['area_text_custom']['tokenize'] = TRUE;
  /* Relationship: Webform submissions: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Draggableviews: Webform submissions */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'ID';
  $handler->display->display_options['fields']['sid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['path'] = 'node/!1/applications/[sid]';
  $handler->display->display_options['fields']['sid']['separator'] = '';
  /* Field: Webform submissions: Submitted */
  $handler->display->display_options['fields']['submitted']['id'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['date_format'] = 'custom';
  $handler->display->display_options['fields']['submitted']['custom_date_format'] = 'm/d/Y';
  $handler->display->display_options['fields']['submitted']['second_date_format'] = 'long';
  /* Field: Webform submission data: All values */
  $handler->display->display_options['fields']['webform_all_fields']['id'] = 'webform_all_fields';
  $handler->display->display_options['fields']['webform_all_fields']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['webform_all_fields']['field'] = 'webform_all_fields';
  $handler->display->display_options['fields']['webform_all_fields']['label'] = '';
  /* Field: Webform submissions: Edit link */
  $handler->display->display_options['fields']['edit_submission']['id'] = 'edit_submission';
  $handler->display->display_options['fields']['edit_submission']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['edit_submission']['field'] = 'edit_submission';
  $handler->display->display_options['fields']['edit_submission']['access_check'] = 1;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Contextual filter: Webform submissions: Node */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'webform_submissions';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';

  /* Display: Application info */
  $handler = $view->new_display('page', 'Application info', 'page_application_info');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Application information';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/stanford-asb/node/!1/submission/!2/edit">Edit</a>
';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Webform submissions: Submitted */
  $handler->display->display_options['fields']['submitted']['id'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['date_format'] = 'short';
  $handler->display->display_options['fields']['submitted']['second_date_format'] = 'long';
  /* Field: Webform submission data: All values */
  $handler->display->display_options['fields']['webform_all_fields']['id'] = 'webform_all_fields';
  $handler->display->display_options['fields']['webform_all_fields']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['webform_all_fields']['field'] = 'webform_all_fields';
  $handler->display->display_options['fields']['webform_all_fields']['label'] = '';
  /* Field: Field: What motivates you to participate in public service? */
  $handler->display->display_options['fields']['field_question_1']['id'] = 'field_question_1';
  $handler->display->display_options['fields']['field_question_1']['table'] = 'field_data_field_question_1';
  $handler->display->display_options['fields']['field_question_1']['field'] = 'field_question_1';
  $handler->display->display_options['fields']['field_question_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_question_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_question_1']['hide_empty'] = TRUE;
  /* Field: Field: If you could have any superpower what would it be and why? */
  $handler->display->display_options['fields']['field_question_2']['id'] = 'field_question_2';
  $handler->display->display_options['fields']['field_question_2']['table'] = 'field_data_field_question_2';
  $handler->display->display_options['fields']['field_question_2']['field'] = 'field_question_2';
  $handler->display->display_options['fields']['field_question_2']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_question_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_question_2']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Webform submissions: Node */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'webform_submissions';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  /* Contextual filter: Webform submissions: Sid */
  $handler->display->display_options['arguments']['sid']['id'] = 'sid';
  $handler->display->display_options['arguments']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['arguments']['sid']['field'] = 'sid';
  $handler->display->display_options['arguments']['sid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['sid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['sid']['title'] = 'Application #%2';
  $handler->display->display_options['arguments']['sid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['sid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['sid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['sid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'node/%/applications/%';
  $export['trip_applications'] = $view;

  $view = new view();
  $view->name = 'trips_for_asb';
  $view->description = 'Displays a list of all visible trips.';
  $view->tag = 'trips';
  $view->base_table = 'node';
  $view->human_name = 'trips for ASB';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Alternative Spring Break';
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Trip Name */
  $handler->display->display_options['fields']['field_trip_name']['id'] = 'field_trip_name';
  $handler->display->display_options['fields']['field_trip_name']['table'] = 'field_data_field_trip_name';
  $handler->display->display_options['fields']['field_trip_name']['field'] = 'field_trip_name';
  $handler->display->display_options['fields']['field_trip_name']['label'] = '';
  $handler->display->display_options['fields']['field_trip_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_trip_name']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_trip_name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_trip_name']['element_label_colon'] = FALSE;
  /* Field: Content: Trip Location */
  $handler->display->display_options['fields']['field_trip_location']['id'] = 'field_trip_location';
  $handler->display->display_options['fields']['field_trip_location']['table'] = 'field_data_field_trip_location';
  $handler->display->display_options['fields']['field_trip_location']['field'] = 'field_trip_location';
  $handler->display->display_options['fields']['field_trip_location']['label'] = '';
  $handler->display->display_options['fields']['field_trip_location']['element_label_colon'] = FALSE;
  /* Field: Content: Trip Description */
  $handler->display->display_options['fields']['field_trip_description']['id'] = 'field_trip_description';
  $handler->display->display_options['fields']['field_trip_description']['table'] = 'field_data_field_trip_description';
  $handler->display->display_options['fields']['field_trip_description']['field'] = 'field_trip_description';
  $handler->display->display_options['fields']['field_trip_description']['label'] = '';
  $handler->display->display_options['fields']['field_trip_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trip_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_trip_description']['settings'] = array(
    'trim_length' => '300',
  );
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'trip' => 'trip',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_apppro_trips_visible_value_many_to_one']['id'] = 'field_apppro_trips_visible_value_many_to_one';
  $handler->display->display_options['filters']['field_apppro_trips_visible_value_many_to_one']['table'] = 'node_data_field_apppro_trips_visible';
  $handler->display->display_options['filters']['field_apppro_trips_visible_value_many_to_one']['field'] = 'field_apppro_trips_visible_value_many_to_one';
  $handler->display->display_options['filters']['field_apppro_trips_visible_value_many_to_one']['relationship'] = 'field_trip_apppro_nid';
  $handler->display->display_options['filters']['field_apppro_trips_visible_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_apppro_trips_visible_value_many_to_one']['value'] = array(
    'Yes' => 'Yes',
  );
  $handler->display->display_options['filters']['field_apppro_trips_visible_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_apppro_trips_visible_value_many_to_one']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_trip_apppro_nid']['id'] = 'field_trip_apppro_nid';
  $handler->display->display_options['filters']['field_trip_apppro_nid']['table'] = 'node_data_field_trip_apppro';
  $handler->display->display_options['filters']['field_trip_apppro_nid']['field'] = 'field_trip_apppro_nid';
  $handler->display->display_options['filters']['field_trip_apppro_nid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_trip_apppro_nid']['value'] = array();
  $handler->display->display_options['filters']['field_trip_apppro_nid']['group'] = '0';
  $handler->display->display_options['filters']['field_trip_apppro_nid']['expose']['label'] = 'Application Process';
  $handler->display->display_options['filters']['field_trip_apppro_nid']['expose']['operator'] = 'field_trip_apppro_nid_op';
  $handler->display->display_options['filters']['field_trip_apppro_nid']['expose']['identifier'] = 'field_trip_apppro_nid';

  /* Display: ASB Trip Listing */
  $handler = $view->new_display('block', 'ASB Trip Listing', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Listing of ASB trips and descriptions';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'program span6';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Trip Name */
  $handler->display->display_options['fields']['field_trip_name']['id'] = 'field_trip_name';
  $handler->display->display_options['fields']['field_trip_name']['table'] = 'field_data_field_trip_name';
  $handler->display->display_options['fields']['field_trip_name']['field'] = 'field_trip_name';
  $handler->display->display_options['fields']['field_trip_name']['label'] = '';
  $handler->display->display_options['fields']['field_trip_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_trip_name']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_trip_name']['alter']['max_length'] = '68';
  $handler->display->display_options['fields']['field_trip_name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_trip_name']['element_label_colon'] = FALSE;
  /* Field: Content: Trip Location */
  $handler->display->display_options['fields']['field_trip_location']['id'] = 'field_trip_location';
  $handler->display->display_options['fields']['field_trip_location']['table'] = 'field_data_field_trip_location';
  $handler->display->display_options['fields']['field_trip_location']['field'] = 'field_trip_location';
  $handler->display->display_options['fields']['field_trip_location']['label'] = '';
  $handler->display->display_options['fields']['field_trip_location']['element_label_colon'] = FALSE;
  /* Field: Content: Trip Description */
  $handler->display->display_options['fields']['field_trip_description']['id'] = 'field_trip_description';
  $handler->display->display_options['fields']['field_trip_description']['table'] = 'field_data_field_trip_description';
  $handler->display->display_options['fields']['field_trip_description']['field'] = 'field_trip_description';
  $handler->display->display_options['fields']['field_trip_description']['label'] = '';
  $handler->display->display_options['fields']['field_trip_description']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_trip_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_trip_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trip_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_trip_description']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_trip_description']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'trip' => 'trip',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Application Process (field_trip_apppro) */
  $handler->display->display_options['filters']['field_trip_apppro_target_id']['id'] = 'field_trip_apppro_target_id';
  $handler->display->display_options['filters']['field_trip_apppro_target_id']['table'] = 'field_data_field_trip_apppro';
  $handler->display->display_options['filters']['field_trip_apppro_target_id']['field'] = 'field_trip_apppro_target_id';
  $handler->display->display_options['filters']['field_trip_apppro_target_id']['value']['value'] = '20169';

  /* Display: Header Image */
  $handler = $view->new_display('block', 'Header Image', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span12';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_header_image']['id'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['table'] = 'field_data_field_header_image';
  $handler->display->display_options['fields']['field_header_image']['field'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_image']['settings'] = array(
    'image_style' => 'program_banner',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '23292';
  $export['trips_for_asb'] = $view;

  $view = new view();
  $view->name = 'trips_for_tgb';
  $view->description = 'Displays a list of all visible trips.';
  $view->tag = 'trips';
  $view->base_table = 'node';
  $view->human_name = 'trips for tgb';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Alternative Spring Break';
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Trip Name */
  $handler->display->display_options['fields']['field_trip_name']['id'] = 'field_trip_name';
  $handler->display->display_options['fields']['field_trip_name']['table'] = 'field_data_field_trip_name';
  $handler->display->display_options['fields']['field_trip_name']['field'] = 'field_trip_name';
  $handler->display->display_options['fields']['field_trip_name']['label'] = '';
  $handler->display->display_options['fields']['field_trip_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_trip_name']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_trip_name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_trip_name']['element_label_colon'] = FALSE;
  /* Field: Content: Trip Location */
  $handler->display->display_options['fields']['field_trip_location']['id'] = 'field_trip_location';
  $handler->display->display_options['fields']['field_trip_location']['table'] = 'field_data_field_trip_location';
  $handler->display->display_options['fields']['field_trip_location']['field'] = 'field_trip_location';
  $handler->display->display_options['fields']['field_trip_location']['label'] = '';
  $handler->display->display_options['fields']['field_trip_location']['element_label_colon'] = FALSE;
  /* Field: Content: Trip Description */
  $handler->display->display_options['fields']['field_trip_description']['id'] = 'field_trip_description';
  $handler->display->display_options['fields']['field_trip_description']['table'] = 'field_data_field_trip_description';
  $handler->display->display_options['fields']['field_trip_description']['field'] = 'field_trip_description';
  $handler->display->display_options['fields']['field_trip_description']['label'] = '';
  $handler->display->display_options['fields']['field_trip_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trip_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_trip_description']['settings'] = array(
    'trim_length' => '300',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'trip' => 'trip',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_apppro_trips_visible_value_many_to_one']['id'] = 'field_apppro_trips_visible_value_many_to_one';
  $handler->display->display_options['filters']['field_apppro_trips_visible_value_many_to_one']['table'] = 'node_data_field_apppro_trips_visible';
  $handler->display->display_options['filters']['field_apppro_trips_visible_value_many_to_one']['field'] = 'field_apppro_trips_visible_value_many_to_one';
  $handler->display->display_options['filters']['field_apppro_trips_visible_value_many_to_one']['relationship'] = 'field_trip_apppro_nid';
  $handler->display->display_options['filters']['field_apppro_trips_visible_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_apppro_trips_visible_value_many_to_one']['value'] = array(
    'Yes' => 'Yes',
  );
  $handler->display->display_options['filters']['field_apppro_trips_visible_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_apppro_trips_visible_value_many_to_one']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_trip_apppro_nid']['id'] = 'field_trip_apppro_nid';
  $handler->display->display_options['filters']['field_trip_apppro_nid']['table'] = 'node_data_field_trip_apppro';
  $handler->display->display_options['filters']['field_trip_apppro_nid']['field'] = 'field_trip_apppro_nid';
  $handler->display->display_options['filters']['field_trip_apppro_nid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_trip_apppro_nid']['value'] = array();
  $handler->display->display_options['filters']['field_trip_apppro_nid']['group'] = '0';
  $handler->display->display_options['filters']['field_trip_apppro_nid']['expose']['label'] = 'Application Process';
  $handler->display->display_options['filters']['field_trip_apppro_nid']['expose']['operator'] = 'field_trip_apppro_nid_op';
  $handler->display->display_options['filters']['field_trip_apppro_nid']['expose']['identifier'] = 'field_trip_apppro_nid';

  /* Display: TGB Trip Listing */
  $handler = $view->new_display('block', 'TGB Trip Listing', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Listing of TGB trips and descriptions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'program span6';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Trip Name */
  $handler->display->display_options['fields']['field_trip_name']['id'] = 'field_trip_name';
  $handler->display->display_options['fields']['field_trip_name']['table'] = 'field_data_field_trip_name';
  $handler->display->display_options['fields']['field_trip_name']['field'] = 'field_trip_name';
  $handler->display->display_options['fields']['field_trip_name']['label'] = '';
  $handler->display->display_options['fields']['field_trip_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_trip_name']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_trip_name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_trip_name']['element_label_colon'] = FALSE;
  /* Field: Content: Trip Location */
  $handler->display->display_options['fields']['field_trip_location']['id'] = 'field_trip_location';
  $handler->display->display_options['fields']['field_trip_location']['table'] = 'field_data_field_trip_location';
  $handler->display->display_options['fields']['field_trip_location']['field'] = 'field_trip_location';
  $handler->display->display_options['fields']['field_trip_location']['label'] = '';
  $handler->display->display_options['fields']['field_trip_location']['element_label_colon'] = FALSE;
  /* Field: Content: Trip Description */
  $handler->display->display_options['fields']['field_trip_description']['id'] = 'field_trip_description';
  $handler->display->display_options['fields']['field_trip_description']['table'] = 'field_data_field_trip_description';
  $handler->display->display_options['fields']['field_trip_description']['field'] = 'field_trip_description';
  $handler->display->display_options['fields']['field_trip_description']['label'] = '';
  $handler->display->display_options['fields']['field_trip_description']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_trip_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_trip_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trip_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_trip_description']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_trip_description']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'trip' => 'trip',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Application Process (field_trip_apppro) */
  $handler->display->display_options['filters']['field_trip_apppro_target_id']['id'] = 'field_trip_apppro_target_id';
  $handler->display->display_options['filters']['field_trip_apppro_target_id']['table'] = 'field_data_field_trip_apppro';
  $handler->display->display_options['filters']['field_trip_apppro_target_id']['field'] = 'field_trip_apppro_target_id';
  $handler->display->display_options['filters']['field_trip_apppro_target_id']['value']['value'] = '20167';

  /* Display: Header Image */
  $handler = $view->new_display('block', 'Header Image', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span12';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_header_image']['id'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['table'] = 'field_data_field_header_image';
  $handler->display->display_options['fields']['field_header_image']['field'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_image']['settings'] = array(
    'image_style' => 'program_banner',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '23293';
  $export['trips_for_tgb'] = $view;

  return $export;
}
