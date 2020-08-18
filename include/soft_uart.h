
#ifndef __SOFT_UART_H
#define __SOFT_UART_H

#include "config.h"

void TxSend(u8 dat);
void PrintString(unsigned char code *puts);

#ifdef DEBUG
#include <STDIO.H>
void log(const char *str, ...);
#else
#define log(x)
#endif

#endif
