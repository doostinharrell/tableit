<?php

/**
 * Form builder; Form for module settings.
 */
function tableit_form_settings() {
  $form = array();

  $form['settings']['tableit_selectors'] = array(
    '#type' => 'textarea',
    '#title' => t('CSS Selectors'),
    '#description' => t('Use this field to specify css selectors to apply tableit styles too. (ie: table, .content .view table, etc.)'),
    '#default_value' => variable_get('tableit_selectors', 'table'),
  );

  $form['settings']['tableit_commerce'] = array(
    '#type' => 'checkbox',
    '#title' => t('Commerce Tableit'),
    '#description' => t('Note: Enabling this feature will override CSS styles provided by Drupal Commerce for improved mobile styles. It is recommended that you preface tables with additional css selectors as commerce nests tables which can cause unexpected results. Recommended selectors are: .node table, .page-checkout table.views-table, .page-cart table.views-table.'),
    '#default_value' => variable_get('tableit_commerce', 0),
  );

  $form['settings']['tableit_calendar'] = array(
    '#type' => 'checkbox',
    '#title' => t('Calendar Tableit'),
    '#description' => t('Note: Enabling this feature will implement css styles to improve mobile styles for the calendar module.'),
    '#default_value' => variable_get('tableit_calendar', 0),
  );

  return system_settings_form($form);
}

/**
 * Submit handler for the module settings.
 */
function tableit_form_settings_submit($form, &$form_state) {
  // Do nothing for now
}
