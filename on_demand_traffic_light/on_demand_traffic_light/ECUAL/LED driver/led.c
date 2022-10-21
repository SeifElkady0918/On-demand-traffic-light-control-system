/*
 * LED.c
 *
 * Created: 22/10/09 7:59:41 PM
 *  Author: pc
 */ 
#include "led.h"

unsigned int overflowcounter=0;


void LED_init(LED led)
{
	DIO_init(led.ledPin, led.ledPort, OUT); 
	
}
void LED_on(LED led)
{
	DIO_write(led.ledPin, led.ledPort, HIGH);
}
void LED_off(LED led)
{
	DIO_write(led.ledPin, led.ledPort, LOW);
}
void LED_toggle(LED led)
{
	DIO_toggle(led.ledPin,led.ledPort);
}
void LED_blink(LED led)
{
	LED_toggle(led);	
}


void LED_ON_5_SEC(LED led, LED led2)
{
	//LED1 ON or Blink
	LED_on(led);
	LED_on(led2);
	
	//Delay 5 second
	TIMER_init();
	//timer start
	TIMER_start(F_CPU_1024);
	while (overflowcounter < 20)
	{
		while(TIMER_getstate()==TIMER_COUNTING);
		if (led.LED_color==YELLOW && overflowcounter%2 ==0)
		{
			LED_toggle(led);
			if (led2.LED_color == YELLOW)
			{
				LED_toggle(led2);
			}
		}
		
		overflowcounter++;
		clear_overflow_flag();
	}
	overflowcounter = 0;

	//Stop timer
	TIMER_stop();
	
	//LED OFF
	LED_off(led);
	LED_off(led2);
}