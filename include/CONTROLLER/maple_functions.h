/* Copyright (C) 2023 Harry Clark */

/* SEGA Dreamcast Raspberry Pi Pico Interface */

/* THIS FILE PERTAINS TO THE FUNCTIONALITY OF THE MAPLE BUS' */
/* FUNCTIONS CODES AS ESTABLISHED BY IT'S OWN PREPRIATORY DOCUMENTATION */

/* THE IDEA BEHIND THIS FILE IS TO PROVIDE THE HEX VALUES PROVIDED BY */
/* THE DOCUMENTATION THAT PERTAIN TO THE DREAMCAST'S PERIPHERALS AND FEATURES */

/* DOCUMENTATION INCLUDED: https://dreamcast.wiki/Maple_bus */
/* SEE: PAYLOAD TYPES - FUNCTION CODES */

#ifndef MAPLE_FUNCTION
#define MAPLE_FUNCION

/* NESTED INCLUDES */

#include "maple.h"

#ifndef PAYLOAD_FUNCTION_CODES
#define PAYLOAD_FUNCTION_CODES

#define CONTROLLER 0x0100000
#define STORAGE 0x0200000
#define VMU 0x0400000
#define TIMER 0x0800000
#define AUDIO 0x10000000
#define AR_GUN 0x20000000
#define KEYBOARD 0x40000000
#define GUN 0x80000000
#define VIBRATION 0x100000000
#define MOUSE 0x200000000

#endif

#ifndef PAYLOAD_OPERATION_CODES
#define PAYLOAD_OPERATION_CODES

#define INVALID_REGION 0x00
#define DEVICE_INFO_REQ 0x01
#define EXTENDED_DEVICE_INFO_REQ 0x02
#define RESET 0x03
#define SHUTDOWN 0x04
#define DEVICE_INFO 0x05
#define EXTENDED_INFO 0x06
#define ACKNOWLEDGE 0x07
#define DATA_TRANSFER 0x08
#define GET_CONDITION 0x09
#define GET_MEM_INFO 0x0A
#define BLOCK_READ 0x0B
#define BLOCK_WRITE 0x0C
#define GET_LAST_ERROR 0x0D
#define SET_CONDITION 0x0E
#define AR_ERROR 0xF9
#define VMU_ERROR 0xFA
#define FILE_ERROR 0xFB
#define REQ_RESEND 0xFC
#define UNK_COMMAND 0xFD
#define FUNCTION_CODE_NULL 0xFE

#endif

#endif
