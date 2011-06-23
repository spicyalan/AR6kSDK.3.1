/*------------------------------------------------------------------------------ */
/* <copyright file="target_reg_table.h" company="Atheros"> */
/*    Copyright (c) 2004-2008 Atheros Corporation.  All rights reserved. */
/*  */
/* This program is free software; you can redistribute it and/or modify */
/* it under the terms of the GNU General Public License version 2 as */
/* published by the Free Software Foundation; */
/* */
/* Software distributed under the License is distributed on an "AS */
/* IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or */
/* implied. See the License for the specific language governing */
/* rights and limitations under the License. */
/* */
/* */
/*------------------------------------------------------------------------------ */
/*============================================================================== */
/* Target register table macros and structure definitions */
/* */
/* Author(s): ="Atheros" */
/*============================================================================== */

#ifndef HOST_REG_TABLE_H_
#define HOST_REG_TABLE_H_

#include "targaddrs.h"
/*** WARNING : Add to the end of the TABLE! do not change the order ****/
typedef struct hostdef_s {
    A_UINT32 d_INT_STATUS_ENABLE_ERROR_LSB;
    A_UINT32 d_INT_STATUS_ENABLE_ERROR_MASK;
    A_UINT32 d_INT_STATUS_ENABLE_CPU_LSB;
    A_UINT32 d_INT_STATUS_ENABLE_CPU_MASK;
    A_UINT32 d_INT_STATUS_ENABLE_COUNTER_LSB;
    A_UINT32 d_INT_STATUS_ENABLE_COUNTER_MASK;
    A_UINT32 d_INT_STATUS_ENABLE_MBOX_DATA_LSB;
    A_UINT32 d_INT_STATUS_ENABLE_MBOX_DATA_MASK;
    A_UINT32 d_ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB;
    A_UINT32 d_ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK;
    A_UINT32 d_ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB;
    A_UINT32 d_ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK;
    A_UINT32 d_COUNTER_INT_STATUS_ENABLE_BIT_LSB;
    A_UINT32 d_COUNTER_INT_STATUS_ENABLE_BIT_MASK;
    A_UINT32 d_INT_STATUS_ENABLE_ADDRESS;                  
    A_UINT32 d_CPU_INT_STATUS_ENABLE_BIT_LSB;
    A_UINT32 d_CPU_INT_STATUS_ENABLE_BIT_MASK;
    A_UINT32 d_HOST_INT_STATUS_ADDRESS;
    A_UINT32 d_CPU_INT_STATUS_ADDRESS;
    A_UINT32 d_ERROR_INT_STATUS_ADDRESS;
    A_UINT32 d_ERROR_INT_STATUS_WAKEUP_MASK;
    A_UINT32 d_ERROR_INT_STATUS_WAKEUP_LSB;
    A_UINT32 d_ERROR_INT_STATUS_RX_UNDERFLOW_MASK;
    A_UINT32 d_ERROR_INT_STATUS_RX_UNDERFLOW_LSB;
    A_UINT32 d_ERROR_INT_STATUS_TX_OVERFLOW_MASK;
    A_UINT32 d_ERROR_INT_STATUS_TX_OVERFLOW_LSB;
    A_UINT32 d_COUNT_DEC_ADDRESS;
    A_UINT32 d_HOST_INT_STATUS_CPU_MASK; 
    A_UINT32 d_HOST_INT_STATUS_CPU_LSB;
    A_UINT32 d_HOST_INT_STATUS_ERROR_MASK;
    A_UINT32 d_HOST_INT_STATUS_ERROR_LSB;
    A_UINT32 d_HOST_INT_STATUS_COUNTER_MASK;
    A_UINT32 d_HOST_INT_STATUS_COUNTER_LSB;
    A_UINT32 d_RX_LOOKAHEAD_VALID_ADDRESS;
    A_UINT32 d_WINDOW_DATA_ADDRESS;
    A_UINT32 d_WINDOW_READ_ADDR_ADDRESS;
    A_UINT32 d_WINDOW_WRITE_ADDR_ADDRESS;
} HOST_REGISTER_TABLE;

#if defined(MY_HOST_DEF) /* { */
#if defined(ATHR_WIN_DEF)
#define ATH_REG_TABLE_DIRECT_ASSIGN
#endif
#ifdef ATH_REG_TABLE_DIRECT_ASSIGN

static struct hostdef_s my_host_def = {
    INT_STATUS_ENABLE_ERROR_LSB,
    INT_STATUS_ENABLE_ERROR_MASK,
    INT_STATUS_ENABLE_CPU_LSB,
    INT_STATUS_ENABLE_CPU_MASK,
    INT_STATUS_ENABLE_COUNTER_LSB,
    INT_STATUS_ENABLE_COUNTER_MASK,
    INT_STATUS_ENABLE_MBOX_DATA_LSB,
    INT_STATUS_ENABLE_MBOX_DATA_MASK,
    ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB,
    ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK,
    ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB,
    ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK,
    COUNTER_INT_STATUS_ENABLE_BIT_LSB,
    COUNTER_INT_STATUS_ENABLE_BIT_MASK,
    INT_STATUS_ENABLE_ADDRESS, 
    CPU_INT_STATUS_ENABLE_BIT_LSB,
    CPU_INT_STATUS_ENABLE_BIT_MASK,
    HOST_INT_STATUS_ADDRESS,
    CPU_INT_STATUS_ADDRESS,
    ERROR_INT_STATUS_ADDRESS,
    ERROR_INT_STATUS_WAKEUP_MASK,
    ERROR_INT_STATUS_WAKEUP_LSB,
    ERROR_INT_STATUS_RX_UNDERFLOW_MASK,
    ERROR_INT_STATUS_RX_UNDERFLOW_LSB,
    ERROR_INT_STATUS_TX_OVERFLOW_MASK,
    ERROR_INT_STATUS_TX_OVERFLOW_LSB,
    COUNT_DEC_ADDRESS,
    HOST_INT_STATUS_CPU_MASK, 
    HOST_INT_STATUS_CPU_LSB,
    HOST_INT_STATUS_ERROR_MASK,
    HOST_INT_STATUS_ERROR_LSB,
    HOST_INT_STATUS_COUNTER_MASK,
    HOST_INT_STATUS_COUNTER_LSB,
    RX_LOOKAHEAD_VALID_ADDRESS,
    WINDOW_DATA_ADDRESS,
    WINDOW_READ_ADDR_ADDRESS,
    WINDOW_WRITE_ADDR_ADDRESS,
};

#else

static struct hostdef_s my_host_def = {
    .d_INT_STATUS_ENABLE_ERROR_LSB = INT_STATUS_ENABLE_ERROR_LSB,
    .d_INT_STATUS_ENABLE_ERROR_MASK = INT_STATUS_ENABLE_ERROR_MASK,
    .d_INT_STATUS_ENABLE_CPU_LSB = INT_STATUS_ENABLE_CPU_LSB,
    .d_INT_STATUS_ENABLE_CPU_MASK = INT_STATUS_ENABLE_CPU_MASK,
    .d_INT_STATUS_ENABLE_COUNTER_LSB = INT_STATUS_ENABLE_COUNTER_LSB,
    .d_INT_STATUS_ENABLE_COUNTER_MASK = INT_STATUS_ENABLE_COUNTER_MASK,
    .d_INT_STATUS_ENABLE_MBOX_DATA_LSB = INT_STATUS_ENABLE_MBOX_DATA_LSB,
    .d_INT_STATUS_ENABLE_MBOX_DATA_MASK = INT_STATUS_ENABLE_MBOX_DATA_MASK,
    .d_ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB = ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB,
    .d_ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK = ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK,
    .d_ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB = ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB,
    .d_ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK = ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK,
    .d_COUNTER_INT_STATUS_ENABLE_BIT_LSB = COUNTER_INT_STATUS_ENABLE_BIT_LSB,
    .d_COUNTER_INT_STATUS_ENABLE_BIT_MASK = COUNTER_INT_STATUS_ENABLE_BIT_MASK,
    .d_INT_STATUS_ENABLE_ADDRESS = INT_STATUS_ENABLE_ADDRESS,             
    .d_CPU_INT_STATUS_ENABLE_BIT_LSB = CPU_INT_STATUS_ENABLE_BIT_LSB,
    .d_CPU_INT_STATUS_ENABLE_BIT_MASK = CPU_INT_STATUS_ENABLE_BIT_MASK,
    .d_HOST_INT_STATUS_ADDRESS = HOST_INT_STATUS_ADDRESS,          
    .d_CPU_INT_STATUS_ADDRESS = CPU_INT_STATUS_ADDRESS,
    .d_ERROR_INT_STATUS_ADDRESS = ERROR_INT_STATUS_ADDRESS,
    .d_ERROR_INT_STATUS_WAKEUP_MASK = ERROR_INT_STATUS_WAKEUP_MASK,
    .d_ERROR_INT_STATUS_WAKEUP_LSB = ERROR_INT_STATUS_WAKEUP_LSB,
    .d_ERROR_INT_STATUS_RX_UNDERFLOW_MASK = ERROR_INT_STATUS_RX_UNDERFLOW_MASK,
    .d_ERROR_INT_STATUS_RX_UNDERFLOW_LSB = ERROR_INT_STATUS_RX_UNDERFLOW_LSB,
    .d_ERROR_INT_STATUS_TX_OVERFLOW_MASK = ERROR_INT_STATUS_TX_OVERFLOW_MASK,
    .d_ERROR_INT_STATUS_TX_OVERFLOW_LSB = ERROR_INT_STATUS_TX_OVERFLOW_LSB,
    .d_COUNT_DEC_ADDRESS = COUNT_DEC_ADDRESS,
    .d_HOST_INT_STATUS_CPU_MASK = HOST_INT_STATUS_CPU_MASK, 
    .d_HOST_INT_STATUS_CPU_LSB = HOST_INT_STATUS_CPU_LSB,
    .d_HOST_INT_STATUS_ERROR_MASK = HOST_INT_STATUS_ERROR_MASK,
    .d_HOST_INT_STATUS_ERROR_LSB = HOST_INT_STATUS_ERROR_LSB,
    .d_HOST_INT_STATUS_COUNTER_MASK = HOST_INT_STATUS_COUNTER_MASK,
    .d_HOST_INT_STATUS_COUNTER_LSB = HOST_INT_STATUS_COUNTER_LSB,
    .d_RX_LOOKAHEAD_VALID_ADDRESS = RX_LOOKAHEAD_VALID_ADDRESS,
    .d_WINDOW_DATA_ADDRESS = WINDOW_DATA_ADDRESS,
    .d_WINDOW_READ_ADDR_ADDRESS = WINDOW_READ_ADDR_ADDRESS,
    .d_WINDOW_WRITE_ADDR_ADDRESS = WINDOW_WRITE_ADDR_ADDRESS,
};

#endif

struct hostdef_s *MY_HOST_DEF = &my_host_def;

#else /* } { */

#define INT_STATUS_ENABLE_ERROR_LSB              (hostdef->d_INT_STATUS_ENABLE_ERROR_LSB)
#define INT_STATUS_ENABLE_ERROR_MASK             (hostdef->d_INT_STATUS_ENABLE_ERROR_MASK)
#define INT_STATUS_ENABLE_CPU_LSB                (hostdef->d_INT_STATUS_ENABLE_CPU_LSB)
#define INT_STATUS_ENABLE_CPU_MASK               (hostdef->d_INT_STATUS_ENABLE_CPU_MASK)
#define INT_STATUS_ENABLE_COUNTER_LSB            (hostdef->d_INT_STATUS_ENABLE_COUNTER_LSB)
#define INT_STATUS_ENABLE_COUNTER_MASK           (hostdef->d_INT_STATUS_ENABLE_COUNTER_MASK)
#define INT_STATUS_ENABLE_MBOX_DATA_LSB          (hostdef->d_INT_STATUS_ENABLE_MBOX_DATA_LSB)
#define INT_STATUS_ENABLE_MBOX_DATA_MASK         (hostdef->d_INT_STATUS_ENABLE_MBOX_DATA_MASK)
#define ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB     (hostdef->d_ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB)
#define ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK    (hostdef->d_ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK)
#define ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB      (hostdef->d_ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB)
#define ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK     (hostdef->d_ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK)
#define COUNTER_INT_STATUS_ENABLE_BIT_LSB        (hostdef->d_COUNTER_INT_STATUS_ENABLE_BIT_LSB)
#define COUNTER_INT_STATUS_ENABLE_BIT_MASK       (hostdef->d_COUNTER_INT_STATUS_ENABLE_BIT_MASK)
#define INT_STATUS_ENABLE_ADDRESS                (hostdef->d_INT_STATUS_ENABLE_ADDRESS)                    
#define CPU_INT_STATUS_ENABLE_BIT_LSB            (hostdef->d_CPU_INT_STATUS_ENABLE_BIT_LSB)
#define CPU_INT_STATUS_ENABLE_BIT_MASK           (hostdef->d_CPU_INT_STATUS_ENABLE_BIT_MASK)
#define HOST_INT_STATUS_ADDRESS                  (hostdef->d_HOST_INT_STATUS_ADDRESS)
#define CPU_INT_STATUS_ADDRESS                   (hostdef->d_CPU_INT_STATUS_ADDRESS)
#define ERROR_INT_STATUS_ADDRESS                 (hostdef->d_ERROR_INT_STATUS_ADDRESS)
#define ERROR_INT_STATUS_WAKEUP_MASK             (hostdef->d_ERROR_INT_STATUS_WAKEUP_MASK)
#define ERROR_INT_STATUS_WAKEUP_LSB              (hostdef->d_ERROR_INT_STATUS_WAKEUP_LSB)
#define ERROR_INT_STATUS_RX_UNDERFLOW_MASK       (hostdef->d_ERROR_INT_STATUS_RX_UNDERFLOW_MASK)
#define ERROR_INT_STATUS_RX_UNDERFLOW_LSB        (hostdef->d_ERROR_INT_STATUS_RX_UNDERFLOW_LSB)
#define ERROR_INT_STATUS_TX_OVERFLOW_MASK        (hostdef->d_ERROR_INT_STATUS_TX_OVERFLOW_MASK)
#define ERROR_INT_STATUS_TX_OVERFLOW_LSB         (hostdef->d_ERROR_INT_STATUS_TX_OVERFLOW_LSB)
#define COUNT_DEC_ADDRESS                        (hostdef->d_COUNT_DEC_ADDRESS)
#define HOST_INT_STATUS_CPU_MASK                 (hostdef->d_HOST_INT_STATUS_CPU_MASK) 
#define HOST_INT_STATUS_CPU_LSB                  (hostdef->d_HOST_INT_STATUS_CPU_LSB)
#define HOST_INT_STATUS_ERROR_MASK               (hostdef->d_HOST_INT_STATUS_ERROR_MASK)
#define HOST_INT_STATUS_ERROR_LSB                (hostdef->d_HOST_INT_STATUS_ERROR_LSB)
#define HOST_INT_STATUS_COUNTER_MASK             (hostdef->d_HOST_INT_STATUS_COUNTER_MASK)
#define HOST_INT_STATUS_COUNTER_LSB              (hostdef->d_HOST_INT_STATUS_COUNTER_LSB)
#define RX_LOOKAHEAD_VALID_ADDRESS               (hostdef->d_RX_LOOKAHEAD_VALID_ADDRESS)
#define WINDOW_DATA_ADDRESS                      (hostdef->d_WINDOW_DATA_ADDRESS)
#define WINDOW_READ_ADDR_ADDRESS                 (hostdef->d_WINDOW_READ_ADDR_ADDRESS)
#define WINDOW_WRITE_ADDR_ADDRESS                (hostdef->d_WINDOW_WRITE_ADDR_ADDRESS)

/* SET macros */
#define INT_STATUS_ENABLE_ERROR_SET(x) (((x) << INT_STATUS_ENABLE_ERROR_LSB) & INT_STATUS_ENABLE_ERROR_MASK)
#define INT_STATUS_ENABLE_CPU_SET(x) (((x) << INT_STATUS_ENABLE_CPU_LSB) & INT_STATUS_ENABLE_CPU_MASK)
#define INT_STATUS_ENABLE_COUNTER_SET(x) (((x) << INT_STATUS_ENABLE_COUNTER_LSB) & INT_STATUS_ENABLE_COUNTER_MASK)
#define INT_STATUS_ENABLE_MBOX_DATA_SET(x) (((x) << INT_STATUS_ENABLE_MBOX_DATA_LSB) & INT_STATUS_ENABLE_MBOX_DATA_MASK)
#define CPU_INT_STATUS_ENABLE_BIT_SET(x) (((x) << CPU_INT_STATUS_ENABLE_BIT_LSB) & CPU_INT_STATUS_ENABLE_BIT_MASK)
#define ERROR_STATUS_ENABLE_RX_UNDERFLOW_SET(x) (((x) << ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB) & ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK)
#define ERROR_STATUS_ENABLE_TX_OVERFLOW_SET(x) (((x) << ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB) & ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK)
#define COUNTER_INT_STATUS_ENABLE_BIT_SET(x) (((x) << COUNTER_INT_STATUS_ENABLE_BIT_LSB) & COUNTER_INT_STATUS_ENABLE_BIT_MASK)
#define ERROR_INT_STATUS_WAKEUP_GET(x) (((x) & ERROR_INT_STATUS_WAKEUP_MASK) >> ERROR_INT_STATUS_WAKEUP_LSB)
#define ERROR_INT_STATUS_RX_UNDERFLOW_GET(x) (((x) & ERROR_INT_STATUS_RX_UNDERFLOW_MASK) >> ERROR_INT_STATUS_RX_UNDERFLOW_LSB)
#define ERROR_INT_STATUS_TX_OVERFLOW_GET(x) (((x) & ERROR_INT_STATUS_TX_OVERFLOW_MASK) >> ERROR_INT_STATUS_TX_OVERFLOW_LSB)
#define HOST_INT_STATUS_CPU_GET(x) (((x) & HOST_INT_STATUS_CPU_MASK) >> HOST_INT_STATUS_CPU_LSB)
#define HOST_INT_STATUS_ERROR_GET(x) (((x) & HOST_INT_STATUS_ERROR_MASK) >> HOST_INT_STATUS_ERROR_LSB)
#define HOST_INT_STATUS_COUNTER_GET(x) (((x) & HOST_INT_STATUS_COUNTER_MASK) >> HOST_INT_STATUS_COUNTER_LSB)


extern struct hostdef_s *hostdef;

#endif /* } */

#endif /*HOST_REG_TABLE_H_*/

