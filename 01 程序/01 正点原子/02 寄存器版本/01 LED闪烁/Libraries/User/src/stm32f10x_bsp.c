/* Library*/
#include "includes.h"

void BSP_Initialize(void){
    
    /* Initialize board support package */
    SystemClock_Initialize();  
    LED_Initialize();
    Systick_Initialize();
}
