<?php
/**
 * @file
 * content_type.names.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'names',
  'name' => 'Names',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.node_options_names' => 'variable.node_options_names',
  'variable.node_preview_names' => 'variable.node_preview_names',
  'variable.node_submitted_names' => 'variable.node_submitted_names',
  'variable.comment_default_per_page_names' => 'variable.comment_default_per_page_names',
  'variable.comment_form_location_names' => 'variable.comment_form_location_names',
  'variable.comment_preview_names' => 'variable.comment_preview_names',
  'variable.comment_subject_field_names' => 'variable.comment_subject_field_names',
);

$optional = array(
  'field.node.body.names' => 'field.node.body.names',
  'permission.create_names_content' => 'permission.create_names_content',
  'permission.edit_own_names_content' => 'permission.edit_own_names_content',
  'permission.edit_any_names_content' => 'permission.edit_any_names_content',
  'permission.delete_own_names_content' => 'permission.delete_own_names_content',
  'permission.delete_any_names_content' => 'permission.delete_any_names_content',
);

$modules = array(
  0 => 'node',
);
