<?php
/**
 * @file
 * feature_kids_hw_help_az.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_kids_hw_help_az_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_kids_hw_help_az_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_kids_hw_help_az_node_info() {
  $items = array(
    'kids_homework_help' => array(
      'name' => t('Homework Help A - Z category'),
      'base' => 'node_content',
      'description' => t('Categorized lists of linked resources (mostly databases) for Kids.'),
      'has_title' => '1',
      'title_label' => t('Category'),
      'help' => '',
    ),
  );
  return $items;
}
