<?php
/**
 * @file
 * asb_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function asb_frontpage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function asb_frontpage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function asb_frontpage_image_default_styles() {
  $styles = array();

  // Exported image style: frontpage_slideshow.
  $styles['frontpage_slideshow'] = array(
    'name' => 'frontpage_slideshow',
    'label' => 'frontpage_slideshow',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1170,
          'height' => 425,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function asb_frontpage_node_info() {
  $items = array(
    'front_page_image' => array(
      'name' => t('Front Page Image'),
      'base' => 'node_content',
      'description' => t('A frontpage slideshow items.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('Front Page News Item'),
      'base' => 'node_content',
      'description' => t('An item submitted here will appear on the front page in the "News" section.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
