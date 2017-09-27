<?php
function stanford_framework_preprocess_page(&$vars) {
  // theme option variables
  $vars['logo_image_style_classes'] = theme_get_setting('logo_image_style_classes');
  $vars['site_title_first_line'] = theme_get_setting('site_title_first_line');
  $vars['site_title_second_line'] = theme_get_setting('site_title_second_line'); 
  $vars['site_title_style_classes'] = theme_get_setting('site_title_style_classes'); 
  $vars['site_title_position_classes'] = theme_get_setting('site_title_position_classes');
  $vars['my_site_title'] = variable_get('site_name');
}