/* Copyright (C) 2023 Harry Clark */

/* SEGA Dreamcast Raspberry Pi Pico Interface */

/* THIS FILE PERTAINS TO THE FUNCTIONALTIY AND METHODS OF THE CONTROLLER */
/* BUS RELATIVE TO THE SEGA DREAMCAST'S HARDWARE */

/* THE MAPLE BUS IS AN ARCHITECTURE EXCLUSIVE TO THE SEGA DREAMCAST */
/* THAT SUPPORTS THE COMMUNICATIONS BETWEEN PERIPHERALS */

#ifndef MAPLE_MAIN
#define MAPLE_MAIN

#include "common.h"
#include <cstdio>

#define MAPLE_BUS U32
#define MAPLE_BUS_ID U32
#define MAPLE_BUS_ADDR U32
#define MAPLE_PORT U32
#define MAPLE_PORT_ADDR U32

typedef struct MAPLE_DEVICE
{
	typedef U32* GET_PORT(MAPLE_PORT_ADDR());
	typedef U32* GET_ADDRESS(MAPLE_BUS(), MAPLE_PORT());
	typedef U8* PLAYER_PORT;
	typedef char* LOGICAL_PORT[3];
	typedef MAPLE_DEVICE* CONFIG;
};

typedef enum MAPLE_DEVICE_TYPE
{
	NONE,
	COUNT,
	SEGA_VMU,
	MICROPHONE,
	KEYBOARD,
	MOUSE,
	LIGHT_GUN
};

VOID_FUNCTION(MAPLE_INIT);
VOID_FUNCTION(MAPLE_FREE);
VOID_FUNCTION(MAPLE_CREATE_DEVICE);
VOID_FUNCTION(MAPLE_SET_VIBRATION);
VOID_FUNCTION(MAPLE_GET_INPUT);
VOID_FUNCTION(MAPLE_GET_ABSOLUTE_COORD);
VOID_FUNCTION(MAPLE_GET_KEYBOARD);
VOID_FUNCTION(MAPLE_GET_MOUSE);
VOID_FUNCTION(MAPLE_SET_VMU);

#endif
