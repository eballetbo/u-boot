/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Configuration header file for K3 J784S4 EVM
 *
 * Copyright (C) 2022 Texas Instruments Incorporated - https://www.ti.com/
 *	Hari Nagalla <hnagalla@ti.com>
 */

#ifndef __CONFIG_J784S4_EVM_H
#define __CONFIG_J784S4_EVM_H

#include <linux/sizes.h>
#include <config_distro_bootcmd.h>
#include <env/ti/mmc.h>

/* DDR Configuration */
#define CFG_SYS_SDRAM_BASE1		0x880000000

#ifdef CONFIG_CMD_MMC
#define DISTRO_BOOT_DEV_MMC(func) func(MMC, mmc, 0) func(MMC, mmc, 1)
#else
#define DISTRO_BOOT_DEV_MMC(func)
#endif

#ifdef CONFIG_CMD_PXE
#define DISTRO_BOOT_DEV_PXE(func) func(PXE, pxe, na)
#else
#define DISTRO_BOOT_DEV_PXE(func)
#endif

#ifdef CONFIG_CMD_DHCP
#define DISTRO_BOOT_DEV_DHCP(func) func(DHCP, dhcp, na)
#else
#define DISTRO_BOOT_DEV_DHCP(func)
#endif

#define BOOT_TARGET_DEVICES(func) \
	DISTRO_BOOT_DEV_MMC(func) \
	DISTRO_BOOT_DEV_PXE(func) \
	DISTRO_BOOT_DEV_DHCP(func)

/* Incorporate settings into the U-Boot environment */
#define CFG_EXTRA_ENV_SETTINGS					\
	BOOTENV

/* Now for the remaining common defines */
#include <configs/ti_armv7_common.h>

#endif /* __CONFIG_J784S4_EVM_H */
