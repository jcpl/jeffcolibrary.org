<?php
/**
 * @file
 * feature_press_room.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function feature_press_room_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'reporter_resources';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Reporter Resources';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_press_room_fact_sheets-block',
      'hide_title' => 1,
      'title' => 'Fact Sheets',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'nid' => '1246',
      'teaser' => 0,
      'hide_title' => 1,
      'title' => 'Media Guidelines',
      'weight' => '-99',
      'type' => 'node',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Fact Sheets');
  t('Media Guidelines');
  t('Reporter Resources');

  $export['reporter_resources'] = $quicktabs;

  return $export;
}
