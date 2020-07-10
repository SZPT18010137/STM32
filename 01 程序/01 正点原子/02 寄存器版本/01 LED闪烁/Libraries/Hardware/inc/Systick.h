#ifndef _SYSTICK_H
#define _SYSTICK_H

/* Library */
#include "stm32f10x.h"

/* External Function Statement */
void Systick_Initialize(void); // Initialize Systick.
void delay_us(u32 us);         // delay in us.
void delay_ms(u16 ms);         // delay in ms.

#endif
