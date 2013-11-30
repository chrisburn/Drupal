<?php
/**
 * @file
 * content_type.money.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'money',
  'name' => 'Money',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.node_options_money' => 'variable.node_options_money',
  'variable.node_preview_money' => 'variable.node_preview_money',
  'variable.node_submitted_money' => 'variable.node_submitted_money',
  'variable.comment_default_per_page_money' => 'variable.comment_default_per_page_money',
  'variable.comment_form_location_money' => 'variable.comment_form_location_money',
  'variable.comment_preview_money' => 'variable.comment_preview_money',
  'variable.comment_subject_field_money' => 'variable.comment_subject_field_money',
);

$optional = array(
  'field.node.body.money' => 'field.node.body.money',
  'permission.create_money_content' => 'permission.create_money_content',
  'permission.edit_own_money_content' => 'permission.edit_own_money_content',
  'permission.edit_any_money_content' => 'permission.edit_any_money_content',
  'permission.delete_own_money_content' => 'permission.delete_own_money_content',
  'permission.delete_any_money_content' => 'permission.delete_any_money_content',
);

$modules = array(
  0 => 'node',
);
