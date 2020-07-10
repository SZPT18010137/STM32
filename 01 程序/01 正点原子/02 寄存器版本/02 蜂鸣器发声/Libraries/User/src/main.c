/* Library */
#include "includes.h"

/* Main */
int main(void){
    
r    BSP_Initialize();
    
    while(1){ 
        
        BEEP    = ~BEEP;
        LED_RED = ~LED_RED;
        delay_ms(100);
    }
}
