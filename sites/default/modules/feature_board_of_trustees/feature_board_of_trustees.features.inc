<?php
/**
 * @file
 * feature_board_of_trustees.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_board_of_trustees_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_board_of_trustees_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_board_of_trustees_node_info() {
  $items = array(
    'board_meeting' => array(
      'name' => t('Board Meeting'),
      'base' => 'node_content',
      'description' => t('Meetings and study sessions of the JCPL Board of Trustees.'),
      'has_title' => '1',
      'title_label' => t('Meeting Name'),
      'help' => '',
    ),
    'board_member' => array(
      'name' => t('Board Member'),
      'base' => 'node_content',
      'description' => t('Board members for Board of Trustees page.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('First name, last name.'),
    ),
  );
  return $items;
}
