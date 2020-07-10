/* Library */
#include "beep.h"
#include "stm32f10x.h"

/* Function */
void Beep_Initialize(void){
    
    /* Initialize LED*/
    
    RCC -> APB2ENR |= 0x01 << 3; // Enable GPIOB's clock
    
    GPIOB -> CRH &= 0xFFFFFFF0;  // Clean the bits
    
    GPIOB -> CRH |= 0x00000002;  // Configurate bits
    
    BEEP = 0;
}
