/* Includes */
#include "stm32f10x.h"

/* External functions */
void LED_Initialize(void){
    
    /* Initialize LED0 and LED1*/
    GPIO_InitTypeDef st;

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOE, ENABLE);
    
    st.GPIO_Mode  = GPIO_Mode_Out_PP;
    st.GPIO_Pin   = GPIO_Pin_5;
    st.GPIO_Speed = GPIO_Speed_10MHz;
    
    GPIO_Init(GPIOB, &st);
    GPIO_Init(GPIOE, &st);
    
    Green_LED = 1;
    Red_LED   = 1;
}
