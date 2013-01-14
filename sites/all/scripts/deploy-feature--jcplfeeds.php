<?php

if (PHP_SAPI == 'cli') {
  // Disable old block.
  db_update('block')
    ->fields(array(
      'status' => 0
    ))
    ->condition('delta', 'new_arrivals_homepage-block')
    ->condition('module', 'views')
    ->condition('theme', 'precipice')
    ->execute();

  // Enable new block.
  db_update('block')
    ->fields(array(
      'status' => 1,
      'region' => 'hpbookjackets',
      'pages' => '<front>',
      'visibility' => 1,
    ))
    ->condition('delta', 'new_arrivals-block_1')
    ->condition('module', 'views')
    ->condition('theme', 'precipice')
    ->execute();

  // Add each feed item, added by root.
  $acct = user_load(1);
  foreach (array(
    array(
      'Recent Arrivals - Adult Books',
      'http://sable.jefferson.lib.co.us/feeds/adultbooks.xml',
    )
    array(
      'Recent Arrivals - Feature Films',
      'http://sable.jefferson.lib.co.us/feeds/featurefilm.xml',
    )
    array(
      'Recent Arrivals - Music',
      'http://sable.jefferson.lib.co.us/feeds/allmusic.xml',
    )
    array(
      'Recent Arrivals - Young Adult Books',
      'http://sable.jefferson.lib.co.us/feeds/yabooks.xml',
    )
    array(
      'Recent Arrivals - Things That Go',
      'http://sable.jefferson.lib.co.us/feeds/jthingsthatgo.xml'
    )
  ) as $feed) {
    list($title, $feed_url) = $feed;
    // Add some feeds.
    $node = (object) array(
      'uid' => $acct->uid,
      'title' => $title,
      'name' => (isset($acct->name) ? $acct->name : ''),
      'type' => 'jcpl_sable_feed',
      'language' => LANGUAGE_NONE,
      'feeds' => array(
        'FeedsHTTPFetcher' => array(
          'source' => $feed_url
        )
      )
    );
    node_save($node);
    drupal_set_message(t('@feed_url maps to node !nid', array('@feed_url' => $feed_url, '!nid' => $node->nid)));
  }

}
