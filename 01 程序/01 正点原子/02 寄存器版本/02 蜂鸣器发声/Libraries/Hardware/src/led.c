/* Library */
#include "led.h"
#include "stm32f10x.h"

/* Function */
void LED_Initialize(void){
    
    /* Initialize LED*/
    
    RCC -> APB2ENR |= 0x05 << 3; // Enable GPIOB's and GPIOE's clock
    
    GPIOB -> CRL &= 0xFF0FFFFF;  // Clean the bits
    GPIOE -> CRL &= 0xFF0FFFFF;
    
    GPIOB -> CRL |= 0x00200000;  // Configurate bits
    GPIOE -> CRL |= 0x00200000;
    
    LED_GREEN = 1;
    LED_RED   = 1; 
}
