#ifndef _H_STC15_CONF
#define _H_STC15_CONF

#include "STDDEF.H"
#include "INTRINS.H"

typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long uint32_t;

typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int32_t;

#ifndef __VSCODE_C51__
#define at(x) _at_ x
#define interrupt(x) interrupt x
#define interrupt_using(x,y) interrupt x using y
#endif

//#define MAIN_Fosc		22118400L	//定义主时钟
//#define MAIN_Fosc		12000000L	//定义主时钟
//#define MAIN_Fosc		11059200L	//定义主时钟
//#define MAIN_Fosc		 5529600L	//定义主时钟
#define MAIN_Fosc		16000000L	//定义主时钟
#define MainFosc_KHZ	(MAIN_Fosc / 1000)

#include "STC15Fxxxx.H"

#endif