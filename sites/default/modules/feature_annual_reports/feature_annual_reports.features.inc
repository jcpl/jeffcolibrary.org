<?php
/**
 * @file
 * feature_annual_reports.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_annual_reports_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_annual_reports_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_annual_reports_node_info() {
  $items = array(
    'annual_budgets' => array(
      'name' => t('Annual Budgets'),
      'base' => 'node_content',
      'description' => t('Annual budget reports for Planning & Budget page.'),
      'has_title' => '1',
      'title_label' => t('Year'),
      'help' => '',
    ),
    'annual_reports' => array(
      'name' => t('Annual Reports'),
      'base' => 'node_content',
      'description' => t('Annual reports for Planning & Budget page.'),
      'has_title' => '1',
      'title_label' => t('Year'),
      'help' => '',
    ),
    'annual_strategy' => array(
      'name' => t('Annual Strategy'),
      'base' => 'node_content',
      'description' => t('Annual strategy reports for Planning & Budget page'),
      'has_title' => '1',
      'title_label' => t('Year'),
      'help' => '',
    ),
  );
  return $items;
}
