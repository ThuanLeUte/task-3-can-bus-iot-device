/**
* @file       sys_aws_provision.h
* @copyright  Copyright (C) 2021 ThuanLe. All rights reserved.
* @license    This project is released under the ThuanLe License.
* @version    01.00.00
* @date       2020-12-17
* @author     Thuan Le
* @brief      System module to handle Amazon Web Services Provision (AWS)
* @note       None
* @example    None
*/

/* Define to prevent recursive inclusion ------------------------------ */
#ifndef __SYS_AWS_PROVISION_H
#define __SYS_AWS_PROVISION_H

/* Includes ----------------------------------------------------------- */
#include "stdbool.h"
#include "stdint.h"

/* Public defines ----------------------------------------------------- */
#define AWS_NOT_PROVISION_STATE         (0)
#define AWS_PROVISION_DONE              (1)

/* Public enumerate/structure ----------------------------------------- */
/* Public macros ------------------------------------------------------ */
/* Public variables --------------------------------------------------- */
extern uint8_t g_aws_provision_state;

/* Public function prototypes ----------------------------------------- */
/**
 * @brief         AWS start provision
 *
 * @param[in]     None
 *
 * @attention     None
 *
 * @return        None
 */
void sys_aws_provision_start(void);

#endif /* __SYS_AWS_PROVISION_H */

/* End of file -------------------------------------------------------- */