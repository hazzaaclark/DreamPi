/* Copyright (C) 2023 Harry Clark */

/* SEGA Dreamcast Raspberry Pi Pico Interface */

/* THIS FILE IS ABOUT COMMON DATA TYPES USED THROUGHOUT THE PROJECT */
/* CREATING TYPE DEFINED METHODS TO INSTANTIATE RAW POINTERS FOR MY */
/* METHODS, FUNCTIONS, ETC */

#ifndef COMMON
#define COMMON

#include <cstdint>
#include <stdio.h>

#ifndef UNSIGNED_TYPES
#define UNSIGNED_TYPES

typedef uint8_t U8;
typedef uint16_t U16;
typedef uint32_t U32;
typedef uint64_t U64;
typedef size_t UNK;

#endif 

#ifndef SIGNED_TYPES
#define SIGNED_TYPES

typedef int8_t S8;
typedef int16_t S16;
typedef int32_t S32;
typedef int64_t S64;

#endif

#ifndef FLOATING_POINT
#define FLOATING_POINT

typedef float F32;
typedef double F64;
typedef volatile float VF32;
typedef volatile double VF64;

#endif

#ifndef COMPILER
#define COMPILER

#ifndef DC_CALL
#define DC_CALL __fastcall
#else
#define DC_CALL
#endif

#define FUNCTION_PTR(NAME, RETURN_TYPE, ARGS, ADDRESS) \
static RETURN_TYPE(DC_CALL* NAME(), ARGS = RETURN_TYPE(DC_CALL *ARGS()ADDRESS);

#define VOID_FUNCTION(NAME) void(NAME)
#define UNKNOWN(...)(__VA_ARGS__)(NAME) void(NAME)

#endif
#endif