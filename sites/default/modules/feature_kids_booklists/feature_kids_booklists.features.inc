<?php
/**
 * @file
 * feature_kids_booklists.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_kids_booklists_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_kids_booklists_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_kids_booklists_node_info() {
  $items = array(
    'booklist_kids' => array(
      'name' => t('Booklist - Kids'),
      'base' => 'node_content',
      'description' => t('Booklist PDFs for the Staff Picks section of Books & Reading.'),
      'has_title' => '1',
      'title_label' => t('Booklist Name'),
      'help' => '',
    ),
    'booklist_teen' => array(
      'name' => t('Booklist - Teen'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Booklist Name'),
      'help' => '',
    ),
  );
  return $items;
}
