/*
 * lcd.h
 *
 *  Created on: Apr  10, 2024
 *      Author: vai
 */

#ifndef SWITCH_H_
#define SWITCH_H_

#include "stm32f4xx.h"
#include "stm32f407xx.h"

#define SWITCH_GPIO		GPIOA
#define SWITCH_GPIO_EN	0

#define SWITCH			0

void SwitchInit(uint32_t pin);
volatile int SwitchGetState(uint32_t pin);

#endif /* SWITCH_H_ */

