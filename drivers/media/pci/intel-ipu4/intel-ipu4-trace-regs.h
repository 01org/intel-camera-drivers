/*
 * Copyright (c) 2014--2016 Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 */

#ifndef INTEL_IPU4_TRACE_REGS_H
#define INTEL_IPU4_TRACE_REGS_H

#define TRACE_REG_MAX_ISYS_OFFSET	0x0fffff
#define TRACE_REG_MAX_PSYS_OFFSET	0xffffff
#define TRACE_REG_MAX_BLOCK_SIZE	0x0fff

#define TRACE_REG_END_MARK 0xffff

#define TRACE_REG_CMD_TYPE_D64		0x0
#define TRACE_REG_CMD_TYPE_D64M		0x1
#define TRACE_REG_CMD_TYPE_D64TS	0x2
#define TRACE_REG_CMD_TYPE_D64MTS	0x3

/* Trace unit register offsets */
#define TRACE_REG_TUN_DDR_ENABLE        0x000
#define TRACE_REG_TUN_NPK_ENABLE	0x004
#define TRACE_REG_TUN_DDR_INFO_VAL	0x008
#define TRACE_REG_TUN_NPK_ADDR		0x00C
#define TRACE_REG_TUN_DRAM_BASE_ADDR	0x010
#define TRACE_REG_TUN_DRAM_END_ADDR	0x014
#define TRACE_REG_TUN_LOCAL_TIMER0	0x018
#define TRACE_REG_TUN_LOCAL_TIMER1	0x01C
#define TRACE_REG_TUN_WR_PTR		0x020
#define TRACE_REG_TUN_RD_PTR		0x024

#define TRACE_REG_CREATE_TUN_REGISTER_LIST {	\
	TRACE_REG_TUN_DDR_ENABLE,		\
	TRACE_REG_TUN_NPK_ENABLE,		\
	TRACE_REG_TUN_DDR_INFO_VAL,	        \
	TRACE_REG_TUN_NPK_ADDR,			\
	TRACE_REG_END_MARK			\
}
/*
 * Following registers are left out on purpose:
 * TUN_LOCAL_TIMER0, TUN_LOCAL_TIMER1, TUN_DRAM_BASE_ADDR
 * TUN_DRAM_END_ADDR, TUN_WR_PTR, TUN_RD_PTR
 */

/* Trace monitor register offsets */
#define TRACE_REG_TM_TRACE_ADDR_A		0x0900
#define TRACE_REG_TM_TRACE_ADDR_B		0x0904
#define TRACE_REG_TM_TRACE_ADDR_C		0x0908
#define TRACE_REG_TM_TRACE_ADDR_D		0x090c
#define TRACE_REG_TM_TRACE_ENABLE_NPK		0x0910
#define TRACE_REG_TM_TRACE_ENABLE_DDR		0x0914
#define TRACE_REG_TM_TRACE_PER_PC		0x0918
#define TRACE_REG_TM_TRACE_PER_BRANCH		0x091c
#define TRACE_REG_TM_TRACE_HEADER		0x0920
#define TRACE_REG_TM_TRACE_CFG			0x0924
#define TRACE_REG_TM_TRACE_LOST_PACKETS		0x0928
#define TRACE_REG_TM_TRACE_LP_CLEAR		0x092c
#define TRACE_REG_TM_TRACE_LMRUN_MASK		0x0930
#define TRACE_REG_TM_TRACE_LMRUN_PC_LOW		0x0934
#define TRACE_REG_TM_TRACE_LMRUN_PC_HIGH	0x0938
#define TRACE_REG_TM_TRACE_MMIO_SEL		0x093c
#define TRACE_REG_TM_TRACE_MMIO_WP0_LOW		0x0940
#define TRACE_REG_TM_TRACE_MMIO_WP1_LOW		0x0944
#define TRACE_REG_TM_TRACE_MMIO_WP2_LOW		0x0948
#define TRACE_REG_TM_TRACE_MMIO_WP3_LOW		0x094c
#define TRACE_REG_TM_TRACE_MMIO_WP0_HIGH	0x0950
#define TRACE_REG_TM_TRACE_MMIO_WP1_HIGH	0x0954
#define TRACE_REG_TM_TRACE_MMIO_WP2_HIGH	0x0958
#define TRACE_REG_TM_TRACE_MMIO_WP3_HIGH	0x095c
#define TRACE_REG_TM_FWTRACE_FIRST		0x0A00
#define TRACE_REG_TM_FWTRACE_MIDDLE		0x0A04
#define TRACE_REG_TM_FWTRACE_LAST		0x0A08

#define TRACE_REG_CREATE_TM_REGISTER_LIST {	\
	TRACE_REG_TM_TRACE_ADDR_A,		\
	TRACE_REG_TM_TRACE_ADDR_B,		\
	TRACE_REG_TM_TRACE_ADDR_C,		\
	TRACE_REG_TM_TRACE_ADDR_D,		\
	TRACE_REG_TM_TRACE_ENABLE_NPK,		\
	TRACE_REG_TM_TRACE_ENABLE_DDR,		\
	TRACE_REG_TM_TRACE_PER_PC,		\
	TRACE_REG_TM_TRACE_PER_BRANCH,		\
	TRACE_REG_TM_TRACE_HEADER,		\
	TRACE_REG_TM_TRACE_CFG,			\
	TRACE_REG_TM_TRACE_LOST_PACKETS,	\
	TRACE_REG_TM_TRACE_LP_CLEAR,		\
	TRACE_REG_TM_TRACE_LMRUN_MASK,		\
	TRACE_REG_TM_TRACE_LMRUN_PC_LOW,	\
	TRACE_REG_TM_TRACE_LMRUN_PC_HIGH,	\
	TRACE_REG_TM_TRACE_MMIO_SEL,		\
	TRACE_REG_TM_TRACE_MMIO_WP0_LOW,	\
	TRACE_REG_TM_TRACE_MMIO_WP1_LOW,	\
	TRACE_REG_TM_TRACE_MMIO_WP2_LOW,	\
	TRACE_REG_TM_TRACE_MMIO_WP3_LOW,	\
	TRACE_REG_TM_TRACE_MMIO_WP0_HIGH,	\
	TRACE_REG_TM_TRACE_MMIO_WP1_HIGH,	\
	TRACE_REG_TM_TRACE_MMIO_WP2_HIGH,	\
	TRACE_REG_TM_TRACE_MMIO_WP3_HIGH,	\
	TRACE_REG_END_MARK			\
}

/*
 * Following exists only in (I)SP address space:
 * TM_FWTRACE_FIRST, TM_FWTRACE_MIDDLE, TM_FWTRACE_LAST
 */

#define TRACE_REG_GPC_RESET			0x000
#define TRACE_REG_GPC_OVERALL_ENABLE		0x004
#define TRACE_REG_GPC_TRACE_HEADER		0x008
#define TRACE_REG_GPC_TRACE_ADDRESS		0x00C
#define TRACE_REG_GPC_TRACE_NPK_EN		0x010
#define TRACE_REG_GPC_TRACE_DDR_EN		0x014
#define TRACE_REG_GPC_TRACE_LPKT_CLEAR		0x018
#define TRACE_REG_GPC_TRACE_LPKT		0x01C

#define TRACE_REG_GPC_ENABLE_ID0		0x020
#define TRACE_REG_GPC_ENABLE_ID1		0x024
#define TRACE_REG_GPC_ENABLE_ID2		0x028
#define TRACE_REG_GPC_ENABLE_ID3		0x02c

#define TRACE_REG_GPC_VALUE_ID0			0x030
#define TRACE_REG_GPC_VALUE_ID1			0x034
#define TRACE_REG_GPC_VALUE_ID2			0x038
#define TRACE_REG_GPC_VALUE_ID3			0x03c

#define TRACE_REG_GPC_CNT_INPUT_SELECT_ID0	0x040
#define TRACE_REG_GPC_CNT_INPUT_SELECT_ID1	0x044
#define TRACE_REG_GPC_CNT_INPUT_SELECT_ID2	0x048
#define TRACE_REG_GPC_CNT_INPUT_SELECT_ID3	0x04c

#define TRACE_REG_GPC_CNT_START_SELECT_ID0	0x050
#define TRACE_REG_GPC_CNT_START_SELECT_ID1	0x054
#define TRACE_REG_GPC_CNT_START_SELECT_ID2	0x058
#define TRACE_REG_GPC_CNT_START_SELECT_ID3	0x05c

#define TRACE_REG_GPC_CNT_STOP_SELECT_ID0	0x060
#define TRACE_REG_GPC_CNT_STOP_SELECT_ID1	0x064
#define TRACE_REG_GPC_CNT_STOP_SELECT_ID2	0x068
#define TRACE_REG_GPC_CNT_STOP_SELECT_ID3	0x06c

#define TRACE_REG_GPC_CNT_MSG_SELECT_ID0	0x070
#define TRACE_REG_GPC_CNT_MSG_SELECT_ID1	0x074
#define TRACE_REG_GPC_CNT_MSG_SELECT_ID2	0x078
#define TRACE_REG_GPC_CNT_MSG_SELECT_ID3	0x07c

#define TRACE_REG_GPC_CNT_MSG_PLOAD_SELECT_ID0	0x080
#define TRACE_REG_GPC_CNT_MSG_PLOAD_SELECT_ID1	0x084
#define TRACE_REG_GPC_CNT_MSG_PLOAD_SELECT_ID2	0x088
#define TRACE_REG_GPC_CNT_MSG_PLOAD_SELECT_ID3	0x08c

#define TRACE_REG_GPC_IRQ_TRIGGER_VALUE_ID0	0x090
#define TRACE_REG_GPC_IRQ_TRIGGER_VALUE_ID1	0x094
#define TRACE_REG_GPC_IRQ_TRIGGER_VALUE_ID2	0x098
#define TRACE_REG_GPC_IRQ_TRIGGER_VALUE_ID3	0x09c

#define TRACE_REG_GPC_IRQ_TIMER_SELECT_ID0	0x0a0
#define TRACE_REG_GPC_IRQ_TIMER_SELECT_ID1	0x0a4
#define TRACE_REG_GPC_IRQ_TIMER_SELECT_ID2	0x0a8
#define TRACE_REG_GPC_IRQ_TIMER_SELECT_ID3	0x0ac

#define TRACE_REG_GPC_IRQ_ENABLE_ID0		0x0b0
#define TRACE_REG_GPC_IRQ_ENABLE_ID1		0x0b4
#define TRACE_REG_GPC_IRQ_ENABLE_ID2		0x0b8
#define TRACE_REG_GPC_IRQ_ENABLE_ID3		0x0bc

#define TRACE_REG_CREATE_GPC_REGISTER_LIST {	\
	TRACE_REG_GPC_RESET,			\
	TRACE_REG_GPC_OVERALL_ENABLE,		\
	TRACE_REG_GPC_TRACE_HEADER,		\
	TRACE_REG_GPC_TRACE_ADDRESS,		\
	TRACE_REG_GPC_TRACE_NPK_EN,		\
	TRACE_REG_GPC_TRACE_DDR_EN,		\
	TRACE_REG_GPC_TRACE_LPKT_CLEAR,		\
	TRACE_REG_GPC_TRACE_LPKT,		\
	TRACE_REG_GPC_ENABLE_ID0,		\
	TRACE_REG_GPC_ENABLE_ID1,		\
	TRACE_REG_GPC_ENABLE_ID2,		\
	TRACE_REG_GPC_ENABLE_ID3,		\
	TRACE_REG_GPC_VALUE_ID0,		\
	TRACE_REG_GPC_VALUE_ID1,		\
	TRACE_REG_GPC_VALUE_ID2,		\
	TRACE_REG_GPC_VALUE_ID3,		\
	TRACE_REG_GPC_CNT_INPUT_SELECT_ID0,	\
	TRACE_REG_GPC_CNT_INPUT_SELECT_ID1,	\
	TRACE_REG_GPC_CNT_INPUT_SELECT_ID2,	\
	TRACE_REG_GPC_CNT_INPUT_SELECT_ID3,	\
	TRACE_REG_GPC_CNT_START_SELECT_ID0,	\
	TRACE_REG_GPC_CNT_START_SELECT_ID1,	\
	TRACE_REG_GPC_CNT_START_SELECT_ID2,	\
	TRACE_REG_GPC_CNT_START_SELECT_ID3,	\
	TRACE_REG_GPC_CNT_STOP_SELECT_ID0,	\
	TRACE_REG_GPC_CNT_STOP_SELECT_ID1,	\
	TRACE_REG_GPC_CNT_STOP_SELECT_ID2,	\
	TRACE_REG_GPC_CNT_STOP_SELECT_ID3,	\
	TRACE_REG_GPC_CNT_MSG_SELECT_ID0,	\
	TRACE_REG_GPC_CNT_MSG_SELECT_ID1,	\
	TRACE_REG_GPC_CNT_MSG_SELECT_ID2,	\
	TRACE_REG_GPC_CNT_MSG_SELECT_ID3,	\
	TRACE_REG_GPC_CNT_MSG_PLOAD_SELECT_ID0,	\
	TRACE_REG_GPC_CNT_MSG_PLOAD_SELECT_ID1,	\
	TRACE_REG_GPC_CNT_MSG_PLOAD_SELECT_ID2,	\
	TRACE_REG_GPC_CNT_MSG_PLOAD_SELECT_ID3,	\
	TRACE_REG_GPC_IRQ_TRIGGER_VALUE_ID0,	\
	TRACE_REG_GPC_IRQ_TRIGGER_VALUE_ID1,	\
	TRACE_REG_GPC_IRQ_TRIGGER_VALUE_ID2,	\
	TRACE_REG_GPC_IRQ_TRIGGER_VALUE_ID3,	\
	TRACE_REG_GPC_IRQ_TIMER_SELECT_ID0,	\
	TRACE_REG_GPC_IRQ_TIMER_SELECT_ID1,	\
	TRACE_REG_GPC_IRQ_TIMER_SELECT_ID2,	\
	TRACE_REG_GPC_IRQ_TIMER_SELECT_ID3,	\
	TRACE_REG_GPC_IRQ_ENABLE_ID0,		\
	TRACE_REG_GPC_IRQ_ENABLE_ID1,		\
	TRACE_REG_GPC_IRQ_ENABLE_ID2,		\
	TRACE_REG_GPC_IRQ_ENABLE_ID3,		\
	TRACE_REG_END_MARK			\
}

/* CSI2 legacy receiver trace registers */
#define TRACE_REG_CSI2_TM_RESET_REG_IDX			   0x0000
#define TRACE_REG_CSI2_TM_OVERALL_ENABLE_REG_IDX	   0x0004
#define TRACE_REG_CSI2_TM_TRACE_HEADER_REG_IDX		   0x0008
#define TRACE_REG_CSI2_TM_TRACE_ADDRESS_REG_IDX		   0x000c
#define TRACE_REG_CSI2_TM_TRACE_HEADER_VAL		   0xf
#define TRACE_REG_CSI2_TM_TRACE_ADDRESS_VAL		   0x100218
#define TRACE_REG_CSI2_TM_MONITOR_ID			   0x8

/* 0 <= n <= 3 */
#define TRACE_REG_CSI2_TM_TRACE_NPK_EN_REG_IDX_Pn(n)	   (0x0010 + (n) * 4)
#define TRACE_REG_CSI2_TM_TRACE_DDR_EN_REG_IDX_Pn(n)	   (0x0020 + (n) * 4)
#define TRACE_CSI2_TM_EVENT_FE(vc)			   (BIT(0) << (vc * 6))
#define TRACE_CSI2_TM_EVENT_FS(vc)			   (BIT(1) << (vc * 6))
#define TRACE_CSI2_TM_EVENT_PE(vc)			   (BIT(2) << (vc * 6))
#define TRACE_CSI2_TM_EVENT_PS(vc)			   (BIT(3) << (vc * 6))
#define TRACE_CSI2_TM_EVENT_LE(vc)			   (BIT(4) << (vc * 6))
#define TRACE_CSI2_TM_EVENT_LS(vc)			   (BIT(5) << (vc * 6))

#define TRACE_REG_CSI2_TM_TRACE_LPKT_CLEAR_REG_IDX	   0x0030
#define TRACE_REG_CSI2_TM_TRACE_LPKT_REG_IDX		   0x0034

/* 0 <= n <= 7 */
#define TRACE_REG_CSI2_TM_ENABLE_REG_IDn(n)		   (0x0038 + (n) * 4)
#define TRACE_REG_CSI2_TM_VALUE_REG_IDn(n)		   (0x0058 + (n) * 4)
#define TRACE_REG_CSI2_TM_CNT_INPUT_SELECT_REG_IDn(n)	   (0x0078 + (n) * 4)
#define TRACE_REG_CSI2_TM_CNT_START_SELECT_REG_IDn(n)	   (0x0098 + (n) * 4)
#define TRACE_REG_CSI2_TM_CNT_STOP_SELECT_REG_IDn(n)	   (0x00b8 + (n) * 4)
#define TRACE_REG_CSI2_TM_IRQ_TRIGGER_VALUE_REG_IDn(n)	   (0x00d8 + (n) * 4)
#define TRACE_REG_CSI2_TM_IRQ_TIMER_SELECT_REG_IDn(n)	   (0x00f8 + (n) * 4)
#define TRACE_REG_CSI2_TM_IRQ_ENABLE_REG_IDn(n)		   (0x0118 + (n) * 4)

/* CSI2_3PH combo receiver trace registers */
#define TRACE_REG_CSI2_3PH_TM_RESET_REG_IDX		   0x0000
#define TRACE_REG_CSI2_3PH_TM_OVERALL_ENABLE_REG_IDX	   0x0004
#define TRACE_REG_CSI2_3PH_TM_TRACE_HEADER_REG_IDX	   0x0008
#define TRACE_REG_CSI2_3PH_TM_TRACE_ADDRESS_REG_IDX	   0x000c
#define TRACE_REG_CSI2_3PH_TM_TRACE_ADDRESS_VAL		   0x100258
#define TRACE_REG_CSI2_3PH_TM_MONITOR_ID		   0x9

/* 0 <= n <= 5 */
#define TRACE_REG_CSI2_3PH_TM_TRACE_NPK_EN_REG_IDX_Pn(n)   (0x0010 + (n) * 4)
#define TRACE_REG_CSI2_3PH_TM_TRACE_DDR_EN_REG_IDX_Pn(n)   (0x0028 + (n) * 4)

#define TRACE_REG_CSI2_3PH_TM_TRACE_LPKT_CLEAR_REG_IDX	   0x0040
#define TRACE_REG_CSI2_3PH_TM_TRACE_LPKT_REG_IDX	   0x0044

/* 0 <= n <= 7 */
#define TRACE_REG_CSI2_3PH_TM_ENABLE_REG_IDn(n)		   (0x0048 + (n) * 4)
#define TRACE_REG_CSI2_3PH_TM_VALUE_REG_IDn(n)		   (0x0068 + (n) * 4)
#define TRACE_REG_CSI2_3PH_TM_CNT_INPUT_SELECT_REG_IDn(n)  (0x0088 + (n) * 4)
#define TRACE_REG_CSI2_3PH_TM_CNT_START_SELECT_REG_IDn(n)  (0x00a8 + (n) * 4)
#define TRACE_REG_CSI2_3PH_TM_CNT_STOP_SELECT_REG_IDn(n)   (0x00c8 + (n) * 4)
#define TRACE_REG_CSI2_3PH_TM_IRQ_TRIGGER_VALUE_REG_IDn(n) (0x00e8 + (n) * 4)
#define TRACE_REG_CSI2_3PH_TM_IRQ_TIMER_SELECT_REG_IDn(n)  (0x0108 + (n) * 4)
#define TRACE_REG_CSI2_3PH_TM_IRQ_ENABLE_REG_IDn(n)	   (0x0128 + (n) * 4)

/* SIG2CIO trace monitors */
#define TRACE_REG_SIG2CIO_ADDRESS			   0x0000
#define TRACE_REG_SIG2CIO_WDATA				   0x0004
#define TRACE_REG_SIG2CIO_MASK				   0x0008
#define TRACE_REG_SIG2CIO_GROUP_CFG			   0x000c
#define TRACE_REG_SIG2CIO_STICKY			   0x0010
#define TRACE_REG_SIG2CIO_RST_STICKY			   0x0014
#define TRACE_REG_SIG2CIO_MANUAL_RST_STICKY		   0x0018
#define TRACE_REG_SIG2CIO_STATUS			   0x001c
/* Size of on SIG2CIO block */
#define TRACE_REG_SIG2CIO_SIZE_OF			   0x0020
#endif
