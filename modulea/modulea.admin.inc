<?php

/**
 * @file
 * Administration functions and forms for the Modulea module.
 */

/**
 * Form constructor for the modulea settings form.
 *
 * @ingroup forms
 * @see system_settings_form().
 */
function modulea_admin_settings($form, &$form_state) {   
   $result = '';
   foreach (module_implements("modulea_config") as $module) {
        $result .= "<h3>Module name: <b>"
        . $module . "</b></h3>";
        if (gettype(module_invoke($module, "modulea_config"))=='string') {
            $result .= module_invoke($module, "modulea_config");
        }
       
        }  
 
  $form['modulea_config_text'] = array(
    '#markup' => $result,
  );

  return system_settings_form($form);
}
