<?php
/**
 * @file
 * feature_bmm_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_bmm_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|booksandbeyond|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'booksandbeyond';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_blog',
    ),
  );
  $export['node|booksandbeyond|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_bmm_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|books_movies_music|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'books_movies_music';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => FALSE,
  );
  $export['node|books_movies_music|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|booksandbeyond|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'booksandbeyond';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_blog_image',
      ),
      'right' => array(
        1 => 'field_blog_post',
      ),
    ),
    'fields' => array(
      'field_blog_image' => 'left',
      'field_blog_post' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|booksandbeyond|teaser'] = $ds_layout;

  return $export;
}
