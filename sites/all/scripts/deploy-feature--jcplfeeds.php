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
}
