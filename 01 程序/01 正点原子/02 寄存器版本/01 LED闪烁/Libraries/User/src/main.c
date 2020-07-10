/* Library */
#include "includes.h"

/* Main */
int main(void){
    
    BSP_Initialize();
    
    while(1){ 
        
        LED_GREEN = ~LED_GREEN;
        LED_RED   = ~LED_RED;
        delay_ms(100);
    }
}
