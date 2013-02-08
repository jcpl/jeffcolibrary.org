<?php
/**
 * @file
 * feature_blog_booksandbeyond.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_blog_booksandbeyond_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|booksandbeyond|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'booksandbeyond';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'field_blog_author',
        3 => 'field_blog_post',
        4 => 'field_books_beyond_tag',
        5 => 'field_format_tag',
        6 => 'field_locations_tag',
        7 => 'field_events_tag',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'field_blog_author' => 'ds_content',
      'field_blog_post' => 'ds_content',
      'field_books_beyond_tag' => 'ds_content',
      'field_format_tag' => 'ds_content',
      'field_locations_tag' => 'ds_content',
      'field_events_tag' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|booksandbeyond|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|booksandbeyond|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'booksandbeyond';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_blog_author',
        2 => 'field_blog_post',
        3 => 'field_blog_image',
        4 => 'field_books_beyond_tag',
        5 => 'field_format_tag',
        6 => 'field_locations_tag',
        7 => 'path',
        8 => 'field_events_tag',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_blog_author' => 'ds_content',
      'field_blog_post' => 'ds_content',
      'field_blog_image' => 'ds_content',
      'field_books_beyond_tag' => 'ds_content',
      'field_format_tag' => 'ds_content',
      'field_locations_tag' => 'ds_content',
      'path' => 'ds_content',
      'field_events_tag' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => FALSE,
  );
  $export['node|booksandbeyond|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|booksandbeyond|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'booksandbeyond';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'field_blog_author',
        3 => 'field_blog_post',
        4 => 'field_books_beyond_tag',
        5 => 'field_locations_tag',
        6 => 'field_format_tag',
        7 => 'field_events_tag',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'field_blog_author' => 'ds_content',
      'field_blog_post' => 'ds_content',
      'field_books_beyond_tag' => 'ds_content',
      'field_locations_tag' => 'ds_content',
      'field_format_tag' => 'ds_content',
      'field_events_tag' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|booksandbeyond|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|books_and_beyond|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'books_and_beyond';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['taxonomy_term|books_and_beyond|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|books_and_beyond|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'books_and_beyond';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'description',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'description' => 'ds_content',
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['taxonomy_term|books_and_beyond|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function feature_blog_booksandbeyond_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'blog_fit_width';
  $ds_view_mode->label = 'Fit the width of blog';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['blog_fit_width'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bookjacket_horizontal';
  $ds_view_mode->label = 'Bookjacket - Horizontal';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['bookjacket_horizontal'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bookjacket_vertical';
  $ds_view_mode->label = 'Bookjacket - Vertical';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['bookjacket_vertical'] = $ds_view_mode;

  return $export;
}
