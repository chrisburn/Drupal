<?php
/**
 * @file
 * permission.create_family_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create family content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.family' => 'content_type.family',
);

$optional = array();

$modules = array(
  0 => 'node',
);
