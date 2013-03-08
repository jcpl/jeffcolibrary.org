<?php
/**
 * @file
 * feature_kids_parents_teachers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_kids_parents_teachers_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_kids_parents_teachers_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_kids_parents_teachers_node_info() {
  $items = array(
    'early_literacy_handout' => array(
      'name' => t('Early Literacy Handout'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Handout Title'),
      'help' => '',
    ),
    'parent_teacher_guide' => array(
      'name' => t('Parent & Teacher Guide'),
      'base' => 'node_content',
      'description' => t('Guides for the Kids Parents & Teachers page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
