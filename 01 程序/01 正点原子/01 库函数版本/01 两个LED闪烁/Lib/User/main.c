/* Includes */
#include "stm32f10x.h"

/* Local Functinos */
int main(void){
    
    /* Main function */
    BSP_Initialize();
    
    while(1){
        
        Green_LED = ~Green_LED;
        Red_LED   = ~Red_LED;
        delay_ms(200);
    }
}
