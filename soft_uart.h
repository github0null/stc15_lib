
#ifndef __SOFT_UART_H
#define __SOFT_UART_H

#include "config.h"

void TxSend(u8 dat);
void PrintString(unsigned char code *puts);

#ifdef _DEBUG_

#define LOG(str)      \
    PrintString(str); \
    PrintString("\r\n")

#else

#define LOG(str) ;

#endif

#endif
