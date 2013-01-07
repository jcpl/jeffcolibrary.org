<?php
/**
 * @file
 * jcplfeedcontenttypes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jcplfeedcontenttypes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function jcplfeedcontenttypes_node_info() {
  $items = array(
    'jcpl_sable_feed' => array(
      'name' => t('JCPL sable feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'jcpl_sable_feed_item' => array(
      'name' => t('JCPL sable feed item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
