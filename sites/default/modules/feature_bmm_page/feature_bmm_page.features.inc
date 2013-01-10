<?php
/**
 * @file
 * feature_bmm_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_bmm_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_bmm_page_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_bmm_page_node_info() {
  $items = array(
    'books_movies_music' => array(
      'name' => t('Books, Movies & Music'),
      'base' => 'node_content',
      'description' => t('Section titles for Books, Movies & Music page.'),
      'has_title' => '1',
      'title_label' => t('Books, Movies, & Music'),
      'help' => '',
    ),
  );
  return $items;
}
