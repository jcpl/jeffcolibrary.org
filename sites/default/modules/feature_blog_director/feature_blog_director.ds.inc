<?php
/**
 * @file
 * feature_blog_director.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_blog_director_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog_post_directors_blog|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog_post_directors_blog';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_blog',
    ),
  );
  $export['node|blog_post_directors_blog|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog_post_directors_blog|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog_post_directors_blog';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_blog',
    ),
  );
  $export['node|blog_post_directors_blog|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_blog_director_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog_post_directors_blog|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog_post_directors_blog';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'field_blog_author',
        3 => 'field_blog_post',
        4 => 'field_directors_blog_tag',
        5 => 'links',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'field_blog_author' => 'ds_content',
      'field_blog_post' => 'ds_content',
      'field_directors_blog_tag' => 'ds_content',
      'links' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|blog_post_directors_blog|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog_post_directors_blog|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog_post_directors_blog';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_blog_author',
        2 => 'body',
        3 => 'field_blog_post',
        4 => 'field_blog_image',
        5 => 'field_directors_blog_tag',
        6 => 'path',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_blog_author' => 'ds_content',
      'body' => 'ds_content',
      'field_blog_post' => 'ds_content',
      'field_blog_image' => 'ds_content',
      'field_directors_blog_tag' => 'ds_content',
      'path' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => FALSE,
  );
  $export['node|blog_post_directors_blog|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog_post_directors_blog|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog_post_directors_blog';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'field_blog_author',
        3 => 'field_blog_post',
        4 => 'field_directors_blog_tag',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'field_blog_author' => 'ds_content',
      'field_blog_post' => 'ds_content',
      'field_directors_blog_tag' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|blog_post_directors_blog|teaser'] = $ds_layout;

  return $export;
}
