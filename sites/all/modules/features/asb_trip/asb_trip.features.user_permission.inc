<?php
/**
 * @file
 * asb_trip.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function asb_trip_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'trip leader' => 'trip leader',
    ),
    'module' => 'draggableviews',
  );

  return $permissions;
}
