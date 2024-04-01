#include<stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include<string.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"


#include "switch.h"
#include "uart.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	SystemInit();
	SwitchInit(SWITCH);
	UartInit(BAUD_9600);
	uint8_t num=0;


	while(1) {

			while(exti0_flag == 0)
				;
		   	num++;
			UartPuts(num);
			exti0_flag = 0;
		}

	return 0;
}
