<?php
/**
 * @file
 * feature_blog_workflow.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_blog_workflow_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create booksandbeyond content.
  $permissions['create booksandbeyond content'] = array(
    'name' => 'create booksandbeyond content',
    'roles' => array(
      0 => 'contributor_adult',
      1 => 'editor',
      2 => 'lead_adult',
    ),
    'module' => 'node',
  );

  // Exported permission: create jcpl_kids content.
  $permissions['create jcpl_kids content'] = array(
    'name' => 'create jcpl_kids content',
    'roles' => array(
      0 => 'contributor_kids',
      1 => 'editor',
      2 => 'lead_kids',
    ),
    'module' => 'node',
  );

  // Exported permission: create jcpl_teens content.
  $permissions['create jcpl_teens content'] = array(
    'name' => 'create jcpl_teens content',
    'roles' => array(
      0 => 'contributor_teen',
      1 => 'editor',
      2 => 'lead_teen',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any booksandbeyond content.
  $permissions['delete any booksandbeyond content'] = array(
    'name' => 'delete any booksandbeyond content',
    'roles' => array(
      0 => 'editor',
      1 => 'lead_adult',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any jcpl_kids content.
  $permissions['delete any jcpl_kids content'] = array(
    'name' => 'delete any jcpl_kids content',
    'roles' => array(
      0 => 'editor',
      1 => 'lead_kids',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any jcpl_teens content.
  $permissions['delete any jcpl_teens content'] = array(
    'name' => 'delete any jcpl_teens content',
    'roles' => array(
      0 => 'editor',
      1 => 'lead_teen',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own booksandbeyond content.
  $permissions['delete own booksandbeyond content'] = array(
    'name' => 'delete own booksandbeyond content',
    'roles' => array(
      0 => 'contributor_adult',
      1 => 'editor',
      2 => 'lead_adult',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own jcpl_kids content.
  $permissions['delete own jcpl_kids content'] = array(
    'name' => 'delete own jcpl_kids content',
    'roles' => array(
      0 => 'contributor_kids',
      1 => 'editor',
      2 => 'lead_kids',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own jcpl_teens content.
  $permissions['delete own jcpl_teens content'] = array(
    'name' => 'delete own jcpl_teens content',
    'roles' => array(
      0 => 'contributor_teen',
      1 => 'editor',
      2 => 'lead_teen',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any booksandbeyond content.
  $permissions['edit any booksandbeyond content'] = array(
    'name' => 'edit any booksandbeyond content',
    'roles' => array(
      0 => 'contributor_adult',
      1 => 'editor',
      2 => 'lead_adult',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any jcpl_kids content.
  $permissions['edit any jcpl_kids content'] = array(
    'name' => 'edit any jcpl_kids content',
    'roles' => array(
      0 => 'contributor_kids',
      1 => 'editor',
      2 => 'lead_kids',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any jcpl_teens content.
  $permissions['edit any jcpl_teens content'] = array(
    'name' => 'edit any jcpl_teens content',
    'roles' => array(
      0 => 'contributor_teen',
      1 => 'editor',
      2 => 'lead_teen',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own booksandbeyond content.
  $permissions['edit own booksandbeyond content'] = array(
    'name' => 'edit own booksandbeyond content',
    'roles' => array(
      0 => 'contributor_adult',
      1 => 'editor',
      2 => 'lead_adult',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own jcpl_kids content.
  $permissions['edit own jcpl_kids content'] = array(
    'name' => 'edit own jcpl_kids content',
    'roles' => array(
      0 => 'contributor_kids',
      1 => 'editor',
      2 => 'lead_kids',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own jcpl_teens content.
  $permissions['edit own jcpl_teens content'] = array(
    'name' => 'edit own jcpl_teens content',
    'roles' => array(
      0 => 'contributor_teen',
      1 => 'editor',
      2 => 'lead_teen',
    ),
    'module' => 'node',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'lead_adult',
      2 => 'lead_kids',
      3 => 'lead_teen',
    ),
    'module' => 'node',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor_adult',
      2 => 'contributor_kids',
      3 => 'contributor_teen',
      4 => 'editor',
      5 => 'lead_adult',
      6 => 'lead_kids',
      7 => 'lead_teen',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor_adult',
      2 => 'contributor_kids',
      3 => 'contributor_teen',
      4 => 'editor',
      5 => 'lead_adult',
      6 => 'lead_kids',
      7 => 'lead_teen',
    ),
    'module' => 'node',
  );

  return $permissions;
}
