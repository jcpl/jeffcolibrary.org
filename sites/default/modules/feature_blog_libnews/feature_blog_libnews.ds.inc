<?php
/**
 * @file
 * feature_blog_libnews.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_blog_libnews_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_news|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_news';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_blog',
    ),
  );
  $export['node|library_news|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_news|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_news';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_blog',
    ),
  );
  $export['node|library_news|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_blog_libnews_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_news|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_news';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'post_date',
        1 => 'field_blog_author',
        2 => 'field_blog_post',
        3 => 'links',
      ),
    ),
    'fields' => array(
      'post_date' => 'ds_content',
      'field_blog_author' => 'ds_content',
      'field_blog_post' => 'ds_content',
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
  $export['node|library_news|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_news|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_news';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'field_blog_author',
        3 => 'field_blog_post',
        4 => 'field_library_news_tag',
        5 => 'field_locations_tag',
        6 => 'field_events_tag',
        7 => 'links',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'field_blog_author' => 'ds_content',
      'field_blog_post' => 'ds_content',
      'field_library_news_tag' => 'ds_content',
      'field_locations_tag' => 'ds_content',
      'field_events_tag' => 'ds_content',
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
  $export['node|library_news|teaser'] = $ds_layout;

  return $export;
}
