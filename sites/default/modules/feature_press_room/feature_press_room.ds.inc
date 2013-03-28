<?php
/**
 * @file
 * feature_press_room.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function feature_press_room_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'full_content_w_title';
  $ds_view_mode->label = 'Full Content w/ Title';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['full_content_w_title'] = $ds_view_mode;

  return $export;
}
