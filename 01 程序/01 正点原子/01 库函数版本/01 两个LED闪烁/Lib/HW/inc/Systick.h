#ifndef SYSTICK_H
#define SYSTICK_H

/* Includes */
#include "stm32f10x.h"

/* External function statement */
void Systick_Initialize(void);
void delay_us(u32 time_us);
void delay_ms(u16 time_ms);

#endif
