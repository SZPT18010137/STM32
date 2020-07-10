/* Includes */
#include "stm32f10x.h"

/* External functions */
void BSP_Initialize(void){
    
    /* Initialize all peripherals */
    LED_Initialize();
    Beep_Initialize();
    Systick_Initialize();
    
}
