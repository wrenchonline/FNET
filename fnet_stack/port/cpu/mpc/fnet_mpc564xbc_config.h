/**************************************************************************
*
* Copyright 2005-2018 by Andrey Butok. FNET Community.
*
***************************************************************************
*
*  Licensed under the Apache License, Version 2.0 (the "License"); you may
*  not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*  http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
*  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
*
***************************************************************************
*
*  MPC564xBC specific configuration file.
*
***************************************************************************/

/************************************************************************
 * !!!DO NOT MODIFY THIS FILE!!!
 ************************************************************************/

#ifndef _FNET_MPC564XBC_CONFIG_H_

#define _FNET_MPC564XBC_CONFIG_H_

#define FNET_MPC                        (1)

/******************************************************************************
 * Maximum Timer number that is avaiable on the used platform.
 ******************************************************************************/
#define  FNET_CFG_CPU_TIMER_NUMBER_MAX  (7)

#ifndef FNET_CFG_CPU_TIMER_NUMBER
    #define FNET_CFG_CPU_TIMER_NUMBER           (FNET_CFG_CPU_TIMER_NUMBER_MAX)
#endif

/* MPC Flash Module is not supported.*/
#define FNET_CFG_CPU_FLASH              (0)

/* The platform does not have second Ethernet Module.*/
#define FNET_CFG_CPU_ETH1               (0)

/* Default system bus frequency in Hz */
#ifndef FNET_CFG_CPU_CLOCK_HZ
    #define FNET_CFG_CPU_CLOCK_HZ           (120000000)
#endif

/* Defines the maximum number of incoming frames that may
 *           be buffered by the Ethernet module.*/
#ifndef FNET_CFG_CPU_ETH_RX_BUFS_MAX
    #define FNET_CFG_CPU_ETH_RX_BUFS_MAX    (4)
#endif

/* Flash size.*/
#define FNET_CFG_CPU_FLASH_SIZE         (1024 * 512)    /* 512 KB */

#endif /* _FNET_MPC564XBC_CONFIG_H_ */
