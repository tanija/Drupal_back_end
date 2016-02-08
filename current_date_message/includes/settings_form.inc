<?php

/*
 * implements hook_form
 */
    
    function current_date_message_settings_form($form, $form_state){
     $form['current_date_message_enable_message'] = array(
       '#type' => 'checkbox',
       '#title' => t('Enable current date message.'),
       '#default_value' => variable_get('current_date_message_enable_message', 0),
     );
     
     $form['current_date_message_select'] = array(
       '#type' => 'select',
       '#title' => t('Message type'),
       '#options' => array(
       'status' => t('Status'),
       'warning' => t('Warning'),
       'error' => t('Error'),
       ),
       '#default_value' => variable_get('current_date_message_select', 'status'),
   );
     return system_settings_form($form);    
}

function current_date_message_settings_advanced_form($form, $form_state){
     $form['current_date_message_enable_anonymous_users'] = array(
       '#type' => 'checkbox',
       '#title' => t('Show for anonymous users.'),
       '#default_value' => variable_get('current_date_message_enable_anonymous_users',0),
     );
     
     return system_settings_form($form);    
}

