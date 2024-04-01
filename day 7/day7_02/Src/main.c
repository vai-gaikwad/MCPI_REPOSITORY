
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"
#include "uart.h"
#include "led.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	uint8_t choice = 0 ;
	SystemInit();
	LedInit(LED_GREEN);
	LedInit(LED_ORANGE);
	LedInit(LED_RED);
	LedInit(LED_BLUE);
	UartInit(BAUD_9600);

	while(1) 
	{
		

		UartPuts("Enter your choice \r\n1.LED blue\r\n2.LED red\r\n3.LED Orange\r\n4.LED Green\r\n");
		choice= UartGetch();
        switch(choice)
        {
           case '1':
        	     LedBlink(LED_GREEN, 500);
        	     break;
           case '2':
        	     LedBlink(LED_ORANGE, 500);
        	     break;
           case '3':
        	     LedBlink(LED_RED, 500);
        	     break;
           case '4':
        	     LedBlink(LED_BLUE, 500);
        	     break;
        }
        choice = 0;
	}
	return 0;
}
