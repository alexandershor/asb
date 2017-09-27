<?php
/**
 * @file
 * Template functions.
 */

/**
 * Implements hook_preprocess_node().
 */
function stanford_asb_preprocess_node(&$variables, $hook) {
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }

  $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];
}

/**
 * Implements hook_preprocess_views_view_field().
 */
function stanford_asb_preprocess_views_view_field(&$vars) {

  // Make the trip answer collapsible.
  if ($vars['view']->name == 'trip_applications' && $vars['view']->current_display == 'default' && $vars['field']->field == 'value') {

    if ($vars['field']->options['label'] != 'Accepted') {
      $value = array(
        '#type' => 'fieldset',
        '#title' => truncate_utf8($vars['output'], 80, TRUE, TRUE),
        '#attributes' => array('class' => array('collapsed', 'collapsible')),
        // theme_fieldset() does not handle '#collapsible', '#collapsed' arguments as claimed.
        // @see https://www.drupal.org/node/1099132
        '#attached' => array(
          'js' => array(
            'misc/form.js',
            'misc/collapse.js',
          ),
        ),
        '#value' => $vars['output'],
      );

      $vars['output'] = render($value);
    }

  }

}

/**
 * Implements hook_preprocess_field().
 */
function stanford_asb_preprocess_field(&$vars) {
  // Changes Application Questions link into Apply button on Trips page.
  if($vars['element']['#field_name'] == 'field_trip_questions') {
     $nid = $vars['element']['#object']->nid;
     $app = $vars['element']['#object']->field_trip_apppro['und'][0]['target_id'];
     $questions_id = $vars['element']['#object']->field_trip_questions['und'][0]['target_id'];
     $link = l(t('Apply'), 'node/add/trip-application', array('attributes' => array('class' => 'btn'), 'query' => array('field_tripapp_trip' => $nid, 'field_tripapp_appro' => $app)));
     $vars['items'][0]['#markup'] = $link;
  }
}


