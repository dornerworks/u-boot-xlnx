/*
 * Configuration for Avnet Ultrazed IOCC
 *
 * (C) Copyright 2017 Andreas Galauner <andreas@galauner.de>
 *
 * SPDX-License-Identifier: GPL-2.0+
 */

#ifndef __CONFIG_ZYNQMP_ULTRAZED_IOCC_H
#define __CONFIG_ZYNQMP_ULTRAZED_IOCC_H

#define CONFIG_ZYNQ_SDHCI0
#define CONFIG_ZYNQ_SDHCI1
#define CONFIG_ZYNQ_I2C1
#define CONFIG_SYS_I2C_MAX_HOPS     1
#define CONFIG_SYS_NUM_I2C_BUSES    3
#define CONFIG_SYS_I2C_BUSES    { \
                {0, {I2C_NULL_HOP} }, \
                {0, {{I2C_MUX_PCA9544, 0x70, 0} } }, \
                {0, {{I2C_MUX_PCA9544, 0x70, 1} } }, \
                }

#define CONFIG_SYS_I2C_ZYNQ
#define CONFIG_PCA953X
#define CONFIG_CMD_PCA953X
#define CONFIG_CMD_PCA953X_INFO

#define CONFIG_SYS_I2C_EEPROM_ADDR_LEN  1
#define CONFIG_CMD_EEPROM
#define CONFIG_ZYNQ_EEPROM_BUS      2
#define CONFIG_ZYNQ_GEM_EEPROM_ADDR 0x51
#define CONFIG_ZYNQ_GEM_I2C_MAC_OFFSET  0xFA

#include <configs/xilinx_zynqmp.h>

#endif /* __CONFIG_ZYNQMP_ULTRAZED_IOCC_H */

