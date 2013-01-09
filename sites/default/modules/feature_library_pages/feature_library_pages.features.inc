<?php
/**
 * @file
 * feature_library_pages.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_library_pages_node_info() {
  $items = array(
    'library_page' => array(
      'name' => t('Library Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
