/* Copyright (C) 2023 Harry Clark */

/* SEGA Dreamcast Raspberry Pi Pico Interface */

/* THIS FILE PERTAINS TO THE FUNCTIONALTIY AND METHODS OF THE CONTROLLER */
/* BUS RELATIVE TO THE SEGA DREAMCAST'S HARDWARE */

/* THE MAPLE BUS IS AN ARCHITECTURE EXCLUSIVE TO THE SEGA DREAMCAST */
/* THAT SUPPORTS THE COMMUNICATIONS BETWEEN PERIPHERALS */

/* NESTED INCLUDES */

#include "maple.h"

/* SYSTEM INCLUDES */

#include <stdlib.h>

/* INSTANTIATE THE MAPLE BUS OBJECT AND USE THE MACROS */
/* TO ACCESS EACH OF THEIR COMPONENTS */

static void MAPLE_INIT(MAPLE_BUS* BUS, MAPLE_PORT* PORT)
{
	MAPLE_PORT(PORT);
	MAPLE_BUS(MAPLE_PORT(PORT));
	MAPLE_BUS_ID(MAPLE_BUS_ID(PORT));

	MAPLE_DEVICE::LOGICAL_PORT* LOGIC_PORT;
	LOGIC_PORT += MAPLE_BUS_ID();
}

/* FREE ANY REMAINING AND UNECESSARY MEMORY FROM THE HEAP */

static void MAPLE_FREE(MAPLE_DEVICE* DEVICE)
{
	free(DEVICE);
}
