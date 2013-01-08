<?php
/**
 * @file
 * feature_kids_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_kids_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_kids_page_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_kids_page_node_info() {
  $items = array(
    'basic_page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
