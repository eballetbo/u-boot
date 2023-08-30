/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Configuration header file for K3 AM625 SoC family
 *
 * Copyright (C) 2020-2022 Texas Instruments Incorporated - https://www.ti.com/
 *	Suman Anna <s-anna@ti.com>
 */

#ifndef __CONFIG_AM625_EVM_H
#define __CONFIG_AM625_EVM_H

#ifdef CONFIG_DISTRO_DEFAULTS
#include <config_distro_bootcmd.h>
#include <env/ti/mmc.h>
#endif

/* Now for the remaining common defines */
#include <configs/ti_armv7_common.h>

#endif /* __CONFIG_AM625_EVM_H */
