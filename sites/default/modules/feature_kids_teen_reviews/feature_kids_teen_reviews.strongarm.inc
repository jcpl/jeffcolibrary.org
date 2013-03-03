<?php
/**
 * @file
 * feature_kids_teen_reviews.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_kids_teen_reviews_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_kids_reviews';
  $strongarm->value = 0;
  $export['comment_anonymous_kids_reviews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_kids_reviews';
  $strongarm->value = 1;
  $export['comment_default_mode_kids_reviews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_kids_reviews';
  $strongarm->value = '50';
  $export['comment_default_per_page_kids_reviews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_kids_reviews';
  $strongarm->value = 1;
  $export['comment_form_location_kids_reviews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_kids_reviews';
  $strongarm->value = '1';
  $export['comment_kids_reviews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_kids_reviews';
  $strongarm->value = '1';
  $export['comment_preview_kids_reviews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_kids_reviews';
  $strongarm->value = 1;
  $export['comment_subject_field_kids_reviews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_kids_reviews';
  $strongarm->value = array();
  $export['menu_options_kids_reviews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_kids_reviews';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_kids_reviews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_kids_reviews';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_kids_reviews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_kids_reviews';
  $strongarm->value = '1';
  $export['node_preview_kids_reviews'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_kids_reviews';
  $strongarm->value = 1;
  $export['node_submitted_kids_reviews'] = $strongarm;

  return $export;
}
