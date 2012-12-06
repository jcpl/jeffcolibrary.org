<?php
/**
 * @file
 * feature_bookjackets_carousel.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_bookjackets_carousel_user_default_permissions() {
  $permissions = array();

  // Exported permission: access news feeds.
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(),
    'module' => 'aggregator',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer news feeds.
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(),
    'module' => 'aggregator',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  return $permissions;
}
