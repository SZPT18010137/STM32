/* Library */
#include "stm32f10x.h"

/* Functions */
void Beep_Initialize(void)
{
    /* Initialize beep*/
    GPIO_InitTypeDef GPIO_Structure;

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
    
    GPIO_Structure.GPIO_Mode  = GPIO_Mode_Out_PP;
    GPIO_Structure.GPIO_Pin   = GPIO_Pin_8;
    GPIO_Structure.GPIO_Speed = GPIO_Speed_10MHz;
    
    GPIO_Init(GPIOB, &GPIO_Structure);

    Beep = 0;
}
