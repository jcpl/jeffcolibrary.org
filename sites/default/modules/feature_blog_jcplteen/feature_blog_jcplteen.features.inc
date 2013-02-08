<?php
/**
 * @file
 * feature_blog_jcplteen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_blog_jcplteen_ctools_plugin_api() {
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
function feature_blog_jcplteen_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_blog_jcplteen_node_info() {
  $items = array(
    'jcpl_teens' => array(
      'name' => t('Blog Post - JCPL Teens'),
      'base' => 'node_content',
      'description' => t('Content for Crazy Readerz blog which appears on Teen page.'),
      'has_title' => '1',
      'title_label' => t('JCPL Teens blog post title'),
      'help' => '',
    ),
  );
  return $items;
}
