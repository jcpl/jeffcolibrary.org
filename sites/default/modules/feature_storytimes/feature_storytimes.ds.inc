<?php
/**
 * @file
 * feature_storytimes.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_storytimes_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|storytimes|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'storytimes';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_blog_image',
      ),
    ),
    'fields' => array(
      'field_blog_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => FALSE,
  );
  $export['node|storytimes|teaser'] = $ds_layout;

  return $export;
}
