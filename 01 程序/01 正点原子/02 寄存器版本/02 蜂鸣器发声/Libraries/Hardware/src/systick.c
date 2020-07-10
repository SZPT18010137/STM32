/* Library */
#include "systick.h"
#include "stm32f10x.h"

/* Function */
void Systick_Initialize(void){
    
    /* Initialize systick */
    
    SysTick -> CTRL &= 0xFFFFFFFB; 
}

void delay_us(u32 us){
    
    /* Using systick to delay in us*/   
    
    u32 ctrl; 
    
    SysTick -> LOAD = us * 9;                   // Configurate time
    SysTick -> VAL  = 0x00;                     // Clean VAL
    SysTick -> CTRL = 0x01;                     // Enable systick
    do{
        ctrl = SysTick -> CTRL;
    }while((ctrl & 0x01) && !(ctrl & 0x10000)); // Detect run normaly and count over
    SysTick -> CTRL = 0x00;                     // Disable systick
    SysTick -> VAL  = 0x00;                     // Clean VAL
}

void delay_ms(u16 ms){
    
    /* Using systick to delay in ms */
    
    u32 ctrl;
    
    SysTick -> LOAD = ms * 9000;                // Configurate time
    SysTick -> VAL  = 0x00;                     // Clean VAL
    SysTick -> CTRL = 0x01;                     // Enable systick
    do{
        ctrl = SysTick -> CTRL;
    }while((ctrl & 0x01) && !(ctrl & 0x10000)); // Detect run normaly and count over
    SysTick -> CTRL = 0x00;                     // Disable systick
    SysTick -> VAL  = 0x00;                     // Clean VAL
}
