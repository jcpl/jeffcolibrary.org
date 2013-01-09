<?php
/**
 * @file
 * feature_openlayers.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_openlayers_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|location|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'location';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_address',
        1 => 'field_geofield',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_address' => 'ds_content',
      'field_geofield' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|location|default'] = $ds_layout;

  return $export;
}
