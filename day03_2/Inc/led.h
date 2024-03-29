
#ifndef LED_H_
#define LED_H_

#include "stm32f407xx.h"

#define LED_GPIO	GPIOD
#define LED_GPIO_EN	3

#define LED_GREEN	12


void LedInit(uint32_t pin);
void LedOn(uint32_t pin);
void LedOff(uint32_t pin);
void LedBlink(uint32_t pin, uint32_t delay);

#endif

