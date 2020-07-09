/* Includes */
#include "stm32f10x.h"

/* Functions */
void Systick_Initialize(void){
    
    /* Initialize systick */
    SysTick_CLKSourceConfig(SysTick_CLKSource_HCLK_Div8);
}

void delay_us(u32 time_us){
    
    /* Using systick delay with us*/
    u32 temp;
    
    SysTick -> LOAD = time_us * 9;
    SysTick -> VAL  = 0x00;
    SysTick -> CTRL = 0x01;
    do{
        temp = SysTick -> CTRL;
    }while(!(temp & 1 << 16) && (temp & 0x01));
    SysTick -> CTRL = 0x00;
    SysTick -> VAL  = 0x00;
}


void delay_ms(u16 time_ms)
{
    /* Using systick delay with ms*/
    u32 temp;
    
    SysTick -> LOAD = (u32) time_ms * 9000;
    SysTick -> VAL  = 0x00;
    SysTick -> CTRL = 0x01;
    do{
        temp = SysTick -> CTRL;
    }while(!(temp & 1 << 16) && (temp & 0x01));
    SysTick -> CTRL = 0x00;
    SysTick -> VAL  = 0x00;
}
