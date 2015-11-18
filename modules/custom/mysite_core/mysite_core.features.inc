<?php
/**
 * @file
 * mysite_core.features.inc
 */

/**
 * Implements hook_views_api().
 */
function mysite_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mysite_core_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('It\'s a page Jim.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('JIM IT\'S A PAGE.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
