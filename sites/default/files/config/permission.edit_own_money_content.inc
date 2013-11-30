<?php
/**
 * @file
 * permission.edit_own_money_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own money content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.money' => 'content_type.money',
);

$optional = array();

$modules = array(
  0 => 'node',
);
