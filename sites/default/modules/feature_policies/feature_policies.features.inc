<?php
/**
 * @file
 * feature_policies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_policies_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_policies_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_policies_node_info() {
  $items = array(
    'policies' => array(
      'name' => t('Policies'),
      'base' => 'node_content',
      'description' => t('Library Policies linked in footer content under About Us.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
