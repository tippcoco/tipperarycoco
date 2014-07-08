<?php
/**
 * @file
 * login_area.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function login_area_user_default_roles() {
  $roles = array();

  // Exported role: Councillor.
  $roles['Councillor'] = array(
    'name' => 'Councillor',
    'weight' => 6,
  );

  return $roles;
}
