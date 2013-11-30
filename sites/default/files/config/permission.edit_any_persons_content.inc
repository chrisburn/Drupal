<?php
/**
 * @file
 * permission.edit_any_persons_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any persons content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.persons' => 'content_type.persons',
);

$optional = array();

$modules = array(
  0 => 'node',
);
