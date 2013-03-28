<?php
/**
 * @file
 * feature_leadership.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_leadership_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_leadership_node_info() {
  $items = array(
    'library_managers' => array(
      'name' => t('Library Managers'),
      'base' => 'node_content',
      'description' => t('Library managers for Leadership & Mission page.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'smt_member' => array(
      'name' => t('SMT Member'),
      'base' => 'node_content',
      'description' => t('SMT members for Leadership and Mission page.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
