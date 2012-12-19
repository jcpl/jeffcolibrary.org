<?php
/**
 * @file
 * feature_kids_page.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_kids_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|jcpl_kids|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'jcpl_kids';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_blog_post',
      ),
    ),
    'fields' => array(
      'field_blog_post' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => FALSE,
  );
  $export['node|jcpl_kids|teaser'] = $ds_layout;

  return $export;
}
