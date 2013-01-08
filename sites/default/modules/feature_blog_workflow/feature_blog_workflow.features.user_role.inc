<?php
/**
 * @file
 * feature_blog_workflow.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_blog_workflow_user_default_roles() {
  $roles = array();

  // Exported role: contributor_adult.
  $roles['contributor_adult'] = array(
    'name' => 'contributor_adult',
    'weight' => '1',
  );

  // Exported role: contributor_kids.
  $roles['contributor_kids'] = array(
    'name' => 'contributor_kids',
    'weight' => '2',
  );

  // Exported role: contributor_teen.
  $roles['contributor_teen'] = array(
    'name' => 'contributor_teen',
    'weight' => '3',
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '9',
  );

  // Exported role: lead_adult.
  $roles['lead_adult'] = array(
    'name' => 'lead_adult',
    'weight' => '4',
  );

  // Exported role: lead_kids.
  $roles['lead_kids'] = array(
    'name' => 'lead_kids',
    'weight' => '5',
  );

  // Exported role: lead_teen.
  $roles['lead_teen'] = array(
    'name' => 'lead_teen',
    'weight' => '6',
  );

  return $roles;
}
