<?php
/**
 * @file
 * feature_blog_libnews.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_blog_libnews_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_blog_libnews_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_blog_libnews_node_info() {
  $items = array(
    'library_news' => array(
      'name' => t('Blog Post - Library News'),
      'base' => 'node_content',
      'description' => t('Content for Library News blog which appears on Newsletter page.'),
      'has_title' => '1',
      'title_label' => t('Library News blog post title'),
      'help' => '',
    ),
  );
  return $items;
}
