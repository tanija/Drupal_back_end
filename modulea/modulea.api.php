<?php

/**
 * @file
 * Hooks provided by the Modulea module.
 */

/**
 * @defgroup mobulea_api_hooks Moduleb API Hooks
 * @{
 * Functions to define and modify something.
 *
 * Functions to allow doing something.
 *
 * Here is a list of the hooks that are invoked during some operations:
 * - Configuring something:
 *   - hook_modulea_config()
 * @}
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * Does something.
 *
 * This hook enables the functionality to do something.
 The third param.
 *
 * @return
 *   Return string.
 */
function hook_modulea_config() {
    return 'Some string';
}

/**
 * @} End of "addtogroup hooks".
 */
