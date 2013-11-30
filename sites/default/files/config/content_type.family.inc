<?php
/**
 * @file
 * content_type.family.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'family',
  'name' => 'Family',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.node_options_family' => 'variable.node_options_family',
  'variable.node_preview_family' => 'variable.node_preview_family',
  'variable.node_submitted_family' => 'variable.node_submitted_family',
  'variable.comment_default_per_page_family' => 'variable.comment_default_per_page_family',
  'variable.comment_form_location_family' => 'variable.comment_form_location_family',
  'variable.comment_preview_family' => 'variable.comment_preview_family',
  'variable.comment_subject_field_family' => 'variable.comment_subject_field_family',
);

$optional = array(
  'field.node.body.family' => 'field.node.body.family',
  'permission.create_family_content' => 'permission.create_family_content',
  'permission.edit_own_family_content' => 'permission.edit_own_family_content',
  'permission.edit_any_family_content' => 'permission.edit_any_family_content',
  'permission.delete_own_family_content' => 'permission.delete_own_family_content',
  'permission.delete_any_family_content' => 'permission.delete_any_family_content',
);

$modules = array(
  0 => 'node',
);
