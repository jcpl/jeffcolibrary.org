<?php
/**
 * @file
 * jcplfeedsimporter.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function jcplfeedsimporter_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'jcpl_sable';
  $feeds_importer->config = array(
    'name' => 'JCPL sable',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '3600',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'url',
            'target' => 'field_sable_catalog_url:url',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jcplfeeds_title_truncated',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jcplfeeds_title_byline',
            'target' => 'field_catalog_byline',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jcplfeeds_description_description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'jcplfeeds_description_image',
            'target' => 'field_catalog_image_url:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'jcpl_sable_feed',
      ),
    ),
    'content_type' => 'jcpl_sable_feed',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['jcpl_sable'] = $feeds_importer;

  return $export;
}
