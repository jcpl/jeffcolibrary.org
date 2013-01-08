<?php
/**
 * @file
 * feature_kids_fun_games.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_kids_fun_games_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_kids_fun_games_node_info() {
  $items = array(
    'fun_and_games_category' => array(
      'name' => t('Fun and Games category'),
      'base' => 'node_content',
      'description' => t('A category of Fun and Games resources in the Kids section.'),
      'has_title' => '1',
      'title_label' => t('Category'),
      'help' => '',
    ),
  );
  return $items;
}
