<?php
/**
 * @file
 * feature_press_room.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_press_room_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
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
function feature_press_room_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_press_room_node_info() {
  $items = array(
    'fact_sheet' => array(
      'name' => t('Fact Sheet'),
      'base' => 'node_content',
      'description' => t('Fact sheets for the Media in the Press Room.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'jcpl_in_the_news' => array(
      'name' => t('JCPL in the News item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Admin Title'),
      'help' => '',
    ),
    'press_release' => array(
      'name' => t('Press Release'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
