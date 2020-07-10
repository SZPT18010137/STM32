#include "stm32f10x.h"
#include "systick.h"
#include "button.h"

void __Button_Init__(void)
{
    GPIO_InitTypeDef GPIO_Structure;

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOE, ENABLE);
    
    GPIO_Structure.GPIO_Mode  = GPIO_Mode_IPU;
    GPIO_Structure.GPIO_Pin   = GPIO_Pin_4 | GPIO_Pin_3 | GPIO_Pin_2;
    
    GPIO_Init(GPIOE, &GPIO_Structure);
    
    GPIO_Structure.GPIO_Mode  = GPIO_Mode_IPD;
    GPIO_Structure.GPIO_Pin   = GPIO_Pin_0;
    
    GPIO_Init(GPIOA, &GPIO_Structure);
    
    GPIO_SetBits(GPIOE, GPIO_Pin_4 | GPIO_Pin_3 | GPIO_Pin_2);
    GPIO_ResetBits(GPIOA, GPIO_Pin_0);
}


u8 Button_Scan(u8 mode)
{
    static u8 button_status = 1;
    
    if(mode)
        button_status = 1;
    
    if(button_status && (BUTTON_UP_STATUS || !BUTTON_LEFT_STATUS || !BUTTON_DOWN_STATUS || !BUTTON_RIGHT_STATUS))
    {
        button_status = 0;
        //delay_ms(10);
        if(BUTTON_UP_STATUS)
            return PRESS_BUTTON_UP;
        else if(!BUTTON_LEFT_STATUS)
            return PRESS_BUTTON_LEFT;
        else if(!BUTTON_DOWN_STATUS)
            return PRESS_BUTTON_DOWN;
        else if(!BUTTON_RIGHT_STATUS)
            return PRESS_BUTTON_RIGHT;
        else
            return 0;
    }
    else if(!BUTTON_UP_STATUS && BUTTON_LEFT_STATUS && BUTTON_DOWN_STATUS && BUTTON_RIGHT_STATUS)
        button_status = 1;

    return 0;   
}
