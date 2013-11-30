<?php
/**
 * @file
 * content_type.persons.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'persons',
  'name' => 'Persons',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.node_options_persons' => 'variable.node_options_persons',
  'variable.node_preview_persons' => 'variable.node_preview_persons',
  'variable.node_submitted_persons' => 'variable.node_submitted_persons',
  'variable.comment_default_per_page_persons' => 'variable.comment_default_per_page_persons',
  'variable.comment_form_location_persons' => 'variable.comment_form_location_persons',
  'variable.comment_preview_persons' => 'variable.comment_preview_persons',
  'variable.comment_subject_field_persons' => 'variable.comment_subject_field_persons',
);

$optional = array(
  'field.node.body.persons' => 'field.node.body.persons',
  'permission.create_persons_content' => 'permission.create_persons_content',
  'permission.edit_own_persons_content' => 'permission.edit_own_persons_content',
  'permission.edit_any_persons_content' => 'permission.edit_any_persons_content',
  'permission.delete_own_persons_content' => 'permission.delete_own_persons_content',
  'permission.delete_any_persons_content' => 'permission.delete_any_persons_content',
);

$modules = array(
  0 => 'node',
);
