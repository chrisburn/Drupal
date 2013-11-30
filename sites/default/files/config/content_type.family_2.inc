<?php
/**
 * @file
 * content_type.family_2.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'family_2',
  'name' => 'Family-2',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.node_options_family_2' => 'variable.node_options_family_2',
  'variable.node_preview_family_2' => 'variable.node_preview_family_2',
  'variable.node_submitted_family_2' => 'variable.node_submitted_family_2',
  'variable.comment_default_per_page_family_2' => 'variable.comment_default_per_page_family_2',
  'variable.comment_form_location_family_2' => 'variable.comment_form_location_family_2',
  'variable.comment_preview_family_2' => 'variable.comment_preview_family_2',
  'variable.comment_subject_field_family_2' => 'variable.comment_subject_field_family_2',
);

$optional = array(
  'field.node.body.family_2' => 'field.node.body.family_2',
  'permission.create_family_2_content' => 'permission.create_family_2_content',
  'permission.edit_own_family_2_content' => 'permission.edit_own_family_2_content',
  'permission.edit_any_family_2_content' => 'permission.edit_any_family_2_content',
  'permission.delete_own_family_2_content' => 'permission.delete_own_family_2_content',
  'permission.delete_any_family_2_content' => 'permission.delete_any_family_2_content',
);

$modules = array(
  0 => 'node',
);
