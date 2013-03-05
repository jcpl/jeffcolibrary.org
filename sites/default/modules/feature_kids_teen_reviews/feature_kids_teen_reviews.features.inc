<?php
/**
 * @file
 * feature_kids_teen_reviews.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_kids_teen_reviews_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_kids_teen_reviews_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_kids_teen_reviews_node_info() {
  $items = array(
    'kids_reviews' => array(
      'name' => t('Reviews: Kids'),
      'base' => 'node_content',
      'description' => t('Patron contributed reviews for Kids: Books and Reading.'),
      'has_title' => '1',
      'title_label' => t('Work Title'),
      'help' => '',
    ),
    'teen_reviews' => array(
      'name' => t('Reviews: Teen'),
      'base' => 'node_content',
      'description' => t('Patron contributed reviews for Kids: Books and Reading.'),
      'has_title' => '1',
      'title_label' => t('Work Title'),
      'help' => '',
    ),
  );
  return $items;
}
