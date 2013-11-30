<?php
/**
 * @file
 * permission.edit_own_persons_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own persons content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.persons' => 'content_type.persons',
);

$optional = array();

$modules = array(
  0 => 'node',
);
