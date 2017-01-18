/*
 * Copyright (c) 2013--2016 Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef INTEL_IPU4_ISYS_CSI2_REG_H
#define INTEL_IPU4_ISYS_CSI2_REG_H

#define CSI2_REG_CSI_RX_ENABLE				0x00
#define CSI2_CSI_RX_ENABLE_ENABLE			0x01
/* Enabled lanes - 1 */
#define CSI2_REG_CSI_RX_NOF_ENABLED_LANES		0x04
#define CSI2_REG_CSI_RX_CONFIG				0x08
#define CSI2_CSI_RX_CONFIG_RELEASE_LP11			0x1
#define CSI2_CSI_RX_CONFIG_DISABLE_BYTE_CLK_GATING	0x2
#define CSI2_CSI_RX_CONFIG_SKEWCAL_ENABLE		0x4
#define CSI2_REG_CSI_RX_HBP_TESTMODE_ENABLE		0x0c
#define CSI2_REG_CSI_RX_ERROR_HANDLING			0x10
#define CSI2_REG_CSI_RX_SYNC_COUNTER_SEL		0x14
#define CSI2_RX_SYNC_COUNTER_INTERNAL			0
#define CSI2_RX_SYNC_COUNTER_EXTERNAL			3
#define CSI2_REG_CSI_RX_SP_IF_CONFIG			0x18
#define CSI2_REG_CSI_RX_LP_IF_CONFIG			0x1C
#define CSI2_REG_CSI_RX_STATUS				0x20
#define CSI2_CSI_RX_STATUS_BUSY				0x01
#define CSI2_REG_CSI_RX_STATUS_DLANE_HS			0x24
#define CSI2_REG_CSI_RX_STATUS_DLANE_LP			0x28
#define CSI2_REG_CSI_RX_DLY_CNT_TERMEN_CLANE		0x2c
#define CSI2_REG_CSI_RX_DLY_CNT_SETTLE_CLANE		0x30
/* 0..3 */
#define CSI2_REG_CSI_RX_DLY_CNT_TERMEN_DLANE(n)		(0x34 + (n) * 8)
#define CSI2_REG_CSI_RX_DLY_CNT_SETTLE_DLANE(n)		(0x38 + (n) * 8)

/* IRQ-related registers specific to each of the four CSI receivers */
#define CSI2_REG_CSI2PART_IRQ_EDGE			0x400
#define CSI2_REG_CSI2PART_IRQ_MASK			0x404
#define CSI2_REG_CSI2PART_IRQ_STATUS			0x408
#define CSI2_REG_CSI2PART_IRQ_CLEAR			0x40c
#define CSI2_REG_CSI2PART_IRQ_ENABLE			0x410
#define CSI2_REG_CSI2PART_IRQ_LEVEL_NOT_PULSE		0x414
#define CSI2_CSI2PART_IRQ_CSIRX_B0			0x10000
#define CSI2_CSI2PART_IRQ_CSI2S2M_B0			0x20000

#define CSI2_REG_CSIRX_IRQ_EDGE				0x500
#define CSI2_REG_CSIRX_IRQ_MASK				0x504
#define CSI2_REG_CSIRX_IRQ_STATUS			0x508
#define CSI2_REG_CSIRX_IRQ_CLEAR			0x50c
#define CSI2_REG_CSIRX_IRQ_ENABLE			0x510
#define CSI2_REG_CSIRX_IRQ_LEVEL_NOT_PULSE		0x514
#define CSI2_CSIRX_HEADER_SINGLE_ERROR_CORRECTED	BIT(0)
#define CSI2_CSIRX_HEADER_MULTIPLE_ERRORS_CORRECTED	BIT(1)
#define CSI2_CSIRX_PAYLOAD_CRC_ERROR			BIT(2)
#define CSI2_CSIRX_FIFO_OVERFLOW			BIT(3)
#define CSI2_CSIRX_RESERVED_SHORT_PACKET_DATA_TYPE	BIT(4)
#define CSI2_CSIRX_RESERVED_LONG_PACKET_DATA_TYPE	BIT(5)
#define CSI2_CSIRX_INCOMPLETE_LONG_PACKET		BIT(6)
#define CSI2_CSIRX_FRAME_SYNC_ERROR			BIT(7)
#define CSI2_CSIRX_LINE_SYNC_ERROR			BIT(8)
#define CSI2_CSIRX_DPHY_RECOVERABLE_SYNC_ERROR		BIT(9)
#define CSI2_CSIRX_DPHY_NONRECOVERABLE_SYNC_ERROR	BIT(10)
#define CSI2_CSIRX_ESCAPE_MODE_ERROR			BIT(11)
#define CSI2_CSIRX_ESCAPE_MODE_TRIGGER_EVENT		BIT(12)
#define CSI2_CSIRX_ESCAPE_MODE_ULTRALOW_POWER_DATA	BIT(13)
#define CSI2_CSIRX_ESCAPE_MODE_ULTRALOW_POWER_EXIT_CLK	BIT(14)
#define CSI2_CSIRX_INTER_FRAME_SHORT_PACKET_DISCARDED	BIT(15)
#define CSI2_CSIRX_INTER_FRAME_LONG_PACKET_DISCARDED	BIT(16)
#define CSI2_CSIRX_NUM_ERRORS				17

#define CSI2_REG_CSI2S2M_IRQ_EDGE			0x600
#define CSI2_REG_CSI2S2M_IRQ_MASK			0x604
#define CSI2_REG_CSI2S2M_IRQ_STATUS			0x608
#define CSI2_REG_CSI2S2M_IRQ_CLEAR			0x60c
#define CSI2_REG_CSI2S2M_IRQ_ENABLE			0x610
#define CSI2_REG_CSI2S2M_IRQ_LEVEL_NOT_PULSE		0x614
#define CSI2_IRQ_FS_VC(chn)				(1 << ((chn) * 4))
#define CSI2_IRQ_FE_VC(chn)				(2 << ((chn) * 4))
#define CSI2_IRQ_LS_VC(chn)				(4 << ((chn) * 4))
#define CSI2_IRQ_LE_VC(chn)				(8 << ((chn) * 4))

/*General purposer registers, offset to gpreg base*/
#define CSI2_REG_CSI_GPREG_SOFT_RESET			0
#define CSI2_REG_CSI_GPREG_SOFT_RESET_SLV		0x4
#define CSI2_REG_CSI_GPREG_HPLL_FREQ			0x8
#define CSI2_REG_CSI_GPREG_ISCLK_RATIO			0xc
#define CSI2_REG_CSI_GPREG_HPLL_FREQ_ISCLK_RATIO_OVERRIDE 0x10
#define CSI2_REG_CSI_GPREG_CR_PORT_CONFIG		0x14
#define CSI2_REG_CSI_GPREG_RCOMP_TIMER_DISABLE		0x18
#define CSI2_REG_CSI_GPREG_RCOMP_TIMER_VALUE		0x1c

/*
 * IPU4 BXT / BXTP:
 * Following is the list of relevant registers and
 * their offset within the legacy PHY endpoint. Accessible only via
 * sideband bus.
 * Register naming is a bit misleading. DPHY / CPHY / LANE0 / LANE1
 * all are required for DPHY configurations.
 * Registers are accessible only via sideband bus.
 */

/* Legacy receiver block */
#define CSI2_SB_CSI_RCOMP_CONTROL_LEGACY			0xb8
#define CSI2_SB_CSI_RCOMP_CONTROL_LEGACY_OVR_ENABLE_PORT4_SHIFT 9
#define CSI2_SB_CSI_RCOMP_CONTROL_LEGACY_OVR_ENABLE_PORT3_SHIFT 8
#define CSI2_SB_CSI_RCOMP_CONTROL_LEGACY_OVR_ENABLE_PORT2_SHIFT 7
#define CSI2_SB_CSI_RCOMP_CONTROL_LEGACY_OVR_ENABLE_PORT1_SHIFT 6
#define CSI2_SB_CSI_RCOMP_CONTROL_LEGACY_OVR_CODE_SHIFT		1
#define CSI2_SB_CSI_RCOMP_CONTROL_LEGACY_OVR_ENABLE_SHIFT	0

/* Combo receiver block */
#define CSI2_SB_CSI_RCOMP_CONTROL_COMBO				0x08
#define CSI2_SB_CSI_RCOMP_UPDATE_MODE_SHIFT			15
#define CSI2_SB_CSI_RCOMP_OVR_ENABLE_SHIFT			6
#define CSI2_SB_CSI_RCOMP_OVR_CODE_SHIFT			1

#define CSI2_SB_CPHY0_DLL_OVRD					0x18
#define CSI2_SB_CPHY0_DLL_OVRD_CRCDC_FSM_DLANE0_SHIFT		1
#define CSI2_SB_CPHY0_DLL_OVRD_LDEN_CRCDC_FSM_DLANE0	        BIT(0)
#define CSI2_SB_CPHY2_DLL_OVRD					0x60
#define CSI2_SB_CPHY2_DLL_OVRD_CRCDC_FSM_DLANE1_SHIFT		1
#define CSI2_SB_CPHY2_DLL_OVRD_LDEN_CRCDC_FSM_DLANE1	        BIT(0)

#define CSI2_SB_CPHY0_RX_CONTROL1				0x28
#define CSI2_SB_CPHY0_RX_CONTROL1_EQ_LANE0_SHIFT		27
#define CSI2_SB_CPHY2_RX_CONTROL1				0x68
#define CSI2_SB_CPHY2_RX_CONTROL1_EQ_LANE1_SHIFT		27

#define CSI2_SB_DPHY0_DLL_OVRD					0xA4
#define CSI2_SB_DPHY0_DLL_OVRD_LDEN_DRC_FSM_SHIFT		0
#define CSI2_SB_DPHY0_DLL_OVRD_DRC_FSM_OVRD_SHIFT		1
#define CSI2_SB_DPHY1_DLL_OVRD					0xD0
#define CSI2_SB_DPHY1_DLL_OVRD_LDEN_DRC_FSM_SHIFT		0
#define CSI2_SB_DPHY1_DLL_OVRD_DRC_FSM_OVRD_SHIFT		1

#define CSI2_SB_DPHY0_RX_CNTRL					0xB0
#define CSI2_SB_DPHY0_RX_CNTRL_SKEWCAL_CR_SEL_DLANE3_SHIFT	28
#define CSI2_SB_DPHY0_RX_CNTRL_SKEWCAL_CR_SEL_DLANE2_SHIFT	26
#define CSI2_SB_DPHY0_RX_CNTRL_SKEWCAL_CR_SEL_DLANE1_SHIFT	24
#define CSI2_SB_DPHY0_RX_CNTRL_SKEWCAL_CR_SEL_DLANE0_SHIFT	22
#define CSI2_SB_DPHY0_RX_CNTRL_SKEWCAL_CR_SEL_DLANE23_MASK \
	((1 << CSI2_SB_DPHY0_RX_CNTRL_SKEWCAL_CR_SEL_DLANE3_SHIFT) |	\
	 (1 << CSI2_SB_DPHY0_RX_CNTRL_SKEWCAL_CR_SEL_DLANE2_SHIFT))

#define CSI2_SB_DPHY0_RX_CNTRL_SKEWCAL_CR_SEL_DLANE01_MASK \
	((1 << CSI2_SB_DPHY0_RX_CNTRL_SKEWCAL_CR_SEL_DLANE1_SHIFT) |	\
	 (1 << CSI2_SB_DPHY0_RX_CNTRL_SKEWCAL_CR_SEL_DLANE0_SHIFT))

#endif /* INTEL_IPU4_ISYS_CSI2_REG_H */
