#ifndef BEEP_H
#define BEEP_H

#include "stm32f10x.h"

#define Beep_ON()      GPIO_SetBits(GPIOB, GPIO_Pin_8)
#define Beep_OFF()     GPIO_ResetBits(GPIOB, GPIO_Pin_8)
#define Beep_Reverse() GPIOB -> ODR ^= GPIO_Pin_8

void __Beep_Init__(void);
    
#endif
