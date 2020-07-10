#ifndef LED_H
#define LED_H

#include "bit.h"

/* Extern Marco Definition */
#define LED_RED   PBout(5)
#define LED_GREEN PEout(5)

/* Extern Function Statement */
void LED_Initialize(void);

#endif
