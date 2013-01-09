<?php
/**
 * @file
 * feature_openlayers.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function feature_openlayers_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'jcpl_geofield_widget_map';
  $openlayers_maps->title = 'Libraries Geofield Widget Map';
  $openlayers_maps->description = 'A Map Used for Geofield Input';
  $openlayers_maps->data = array(
    'width' => '620px',
    'height' => '750px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-105.20507633985594, 39.724088011556866',
        'zoom' => '10',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geofield' => array(
        'feature_types' => array(
          'point' => 'point',
          'path' => 'path',
          'polygon' => 'polygon',
        ),
        'allow_edit' => 1,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_tooltip' => array(
        'layers' => array(),
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'google_normal' => 0,
        ),
        'point_zoom_level' => '11',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'google_normal' => 'google_normal',
    ),
    'layer_weight' => array(
      'map_libraries_openlayers_1' => '0',
      'custom_overlay_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'custom_overlay_openlayers_1' => '0',
      'map_libraries_openlayers_1' => '0',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'custom_overlay_openlayers_1' => '0',
      'map_libraries_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'custom_overlay_openlayers_1' => 0,
      'map_libraries_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'custom_overlay_openlayers_1' => 0,
      'map_libraries_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default_marker_red',
      'select' => 'default_marker_red',
      'temporary' => 'default',
    ),
  );
  $export['jcpl_geofield_widget_map'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'libraries_map';
  $openlayers_maps->title = 'Libraries Map';
  $openlayers_maps->description = 'A Map Used for JCPL Geofield Input';
  $openlayers_maps->data = array(
    'width' => '620px',
    'height' => '750px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-105.1679974830703, 39.709299057740274',
        'zoom' => '10',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geofield' => array(
        'feature_types' => array(
          'point' => 'point',
          'path' => 'path',
          'polygon' => 'polygon',
        ),
        'allow_edit' => 1,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'map_libraries_openlayers_1' => 'map_libraries_openlayers_1',
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'google_normal' => 'google_normal',
          'map_libraries_openlayers_1' => 'map_libraries_openlayers_1',
        ),
        'point_zoom_level' => '5',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'google_normal' => 'google_normal',
      'map_libraries_openlayers_1' => 'map_libraries_openlayers_1',
    ),
    'layer_weight' => array(
      'map_libraries_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'map_libraries_openlayers_1' => 'default_marker_black',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'map_libraries_openlayers_1' => 'default_marker_black',
    ),
    'layer_activated' => array(
      'map_libraries_openlayers_1' => 'map_libraries_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'map_libraries_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default_marker_black',
      'select' => 'default_marker_black',
      'temporary' => 'default_marker_black',
    ),
  );
  $export['libraries_map'] = $openlayers_maps;

  return $export;
}
