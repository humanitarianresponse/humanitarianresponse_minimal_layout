<?php
/**
 * @file
 * humanitarianresponse_minimal_layout.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function humanitarianresponse_minimal_layout_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_menu_1';
  $strongarm->value = 'main-menu:0';
  $export['superfish_menu_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_shadow_1';
  $strongarm->value = 0;
  $export['superfish_shadow_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_style_1';
  $strongarm->value = 'none';
  $export['superfish_style_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touch_1';
  $strongarm->value = 1;
  $export['superfish_touch_1'] = $strongarm;

  return $export;
}
