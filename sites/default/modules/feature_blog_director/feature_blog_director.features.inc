<?php
/**
 * @file
 * feature_blog_director.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_blog_director_ctools_plugin_api() {
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
function feature_blog_director_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_blog_director_node_info() {
  $items = array(
    'blog_post_directors_blog' => array(
      'name' => t('Blog Post - Director\'s Blog'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Director\'s Blog post title'),
      'help' => '',
    ),
  );
  return $items;
}
