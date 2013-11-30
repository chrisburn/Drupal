<?php
/**
 * @file
 * permission.create_names_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create names content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.names' => 'content_type.names',
);

$optional = array();

$modules = array(
  0 => 'node',
);
