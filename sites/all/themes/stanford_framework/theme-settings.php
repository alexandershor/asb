<?php
function stanford_framework_form_system_theme_settings_alter(&$form, &$form_state) {
 
  // Header Text
  $form['header_container'] = array(
    '#type' => 'fieldset',
    '#title' => t('Header'),
    '#description' => t('Use these settings to adjust the header logo image and text display.'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  
  $form['header_container']['logo_image_style_classes'] = array(
    '#type'          => 'radios',
    '#title'         => t('Logo image style'),
    '#default_value' => theme_get_setting('logo_image_style_classes'),
    '#options'       => array(
      '' => t('Hide logo image in mobile - <strong><em>Default</em></strong>'),
	  'logo-mobile ' => t('Show logo image in mobile'),
    ),
  );
  
  $form['header_container']['site_title_first_line'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Site title (1st line) - <strong><em>Default is blank</em></strong>'),
    '#default_value' => theme_get_setting('site_title_first_line'),
    '#description'   => t('This will replace the Drupal default site title'),
  );
  
  $form['header_container']['site_title_second_line'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Site title (2nd line) - <strong><em>Default is blank</em></strong>'),
    '#default_value' => theme_get_setting('site_title_second_line'),
    '#description'   => t('This will replace the Drupal default site title'),
  );
    
  $form['header_container']['site_title_style_classes'] = array(
    '#type'          => 'radios',
    '#title'         => t('Site title style'),
    '#default_value' => theme_get_setting('site_title_style_classes'),
    '#options'       => array(
      '' => t('Display in title case - <strong><em>Default</em></strong>'),
	  'site-title-uppercase ' => t('Display 1st line in bold and uppercase (reserved for schools)'),
    ),
  );
  
  $form['header_container']['site_title_position_classes'] = array(
    '#type'          => 'radios',
    '#title'         => t('Site title (2nd line) position'),
    '#default_value' => theme_get_setting('site_title_position_classes'),
    '#options'       => array(
      '' => t('Display below site title - <strong><em>Default</em></strong>'),
	  'site-title-underneath ' => t('Display below site logo image'),
    ),
  );
}