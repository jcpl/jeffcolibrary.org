<?php
/**
 * @file
 * kids_parents_teachers_booklists_handouts.features.inc
 */

/**
 * Implements hook_views_api().
 */
function kids_parents_teachers_booklists_handouts_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function kids_parents_teachers_booklists_handouts_node_info() {
  $items = array(
    'parents_booklist_category' => array(
      'name' => t('Parents & Teachers Booklist category'),
      'base' => 'node_content',
      'description' => t('The Booklist categories on Kids, Parents & Teachers.'),
      'has_title' => '1',
      'title_label' => t('Category'),
      'help' => '',
    ),
  );
  return $items;
}
