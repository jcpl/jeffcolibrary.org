<?php
/**
 * @file
 * feature_volunteer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_volunteer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_volunteer_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_volunteer_node_info() {
  $items = array(
    'volunteer_of_month' => array(
      'name' => t('Volunteer of the Month'),
      'base' => 'node_content',
      'description' => t('Volunteer of the month.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
