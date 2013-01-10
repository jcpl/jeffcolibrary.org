<?php
/**
 * @file
 * feature_wysiwyg_profiles.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function feature_wysiwyg_profiles_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'blog_lg';
  $ds_view_mode->label = 'blog_lg';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['blog_lg'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'blog_med';
  $ds_view_mode->label = 'blog_med';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['blog_med'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'blog_xlg';
  $ds_view_mode->label = 'blog_xlg';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['blog_xlg'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bookjacket_tall_lg';
  $ds_view_mode->label = 'bookjacket_tall_lg';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['bookjacket_tall_lg'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bookjacket_tall_med';
  $ds_view_mode->label = 'bookjacket_tall_med';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['bookjacket_tall_med'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bookjacket_tall_sm';
  $ds_view_mode->label = 'bookjacket_tall_sm';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['bookjacket_tall_sm'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bookjacket_tall_xsm';
  $ds_view_mode->label = 'bookjacket_tall_xsm';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['bookjacket_tall_xsm'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bookjacket_wide_lg';
  $ds_view_mode->label = 'bookjacket_wide_lg';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['bookjacket_wide_lg'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bookjacket_wide_med';
  $ds_view_mode->label = 'bookjacket_wide_med';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['bookjacket_wide_med'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bookjacket_wide_sm';
  $ds_view_mode->label = 'bookjacket_wide_sm';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['bookjacket_wide_sm'] = $ds_view_mode;

  return $export;
}
