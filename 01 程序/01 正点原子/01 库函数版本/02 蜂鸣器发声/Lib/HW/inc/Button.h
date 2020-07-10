#ifndef BUTTON_H
#define BUTTON_H

#include "stm32f10x.h"
#include "bit.h"

typedef enum
{
    PRESS_BUTTON_UP = 1,
    PRESS_BUTTON_DOWN,
    PRESS_BUTTON_LEFT,
    PRESS_BUTTON_RIGHT
    
}ButtonPress_TypeDef;

#define BUTTON_UP_STATUS    PAin(0)
#define BUTTON_LEFT_STATUS  PEin(2)
#define BUTTON_DOWN_STATUS  PEin(3)
#define BUTTON_RIGHT_STATUS PEin(4)

void __Button_Init__(void);
u8 Button_Scan(u8 mode);

#endif
