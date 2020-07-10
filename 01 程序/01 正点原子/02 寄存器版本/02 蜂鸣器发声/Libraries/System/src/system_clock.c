/* Library */
#include "stm32f10x.h"
#include "system_clock.h"

/* Function */
void SystemClock_Initialize(void){
    
    /* Initialize system clock*/
    
    RCC -> CR |= 0x01;   
    RCC -> CFGR &= 0xF8FF0000;
    RCC -> CR &= 0xFEF6FFFF;
    RCC -> CR &= 0xFFFBFFFF;
    RCC -> CFGR &= 0xFF80FFFF;
	RCC -> CIR = 0x00000000;
    RCC -> CR |= 0x00010000;
	while(!(RCC -> CR >> 17));
	RCC -> CFGR = 0X00000400;
	RCC -> CFGR |= 7 << 18;
	RCC -> CFGR |= 1 << 16;
	FLASH -> ACR |= 0x32;
	RCC -> CR |= 1 << 24;
	while(!(RCC -> CR >> 25));
	RCC -> CFGR |= 0x00000002; 
	while(((RCC -> CFGR >> 2) & 0x03) != 0x02); 
}
