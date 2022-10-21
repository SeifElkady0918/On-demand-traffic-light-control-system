/*
 * LED.h
 *
 * Created: 22/10/09 7:59:56 PM
 *  Author: pc
 */ 


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO driver/dio.h"
#include "../../MCAL/TIMER driver/timer.h"

typedef enum
{
	RED, YELLOW, GREEN
}COLOR;

typedef struct  
{
	uint8_t ledPort;
	uint8_t ledPin;
	COLOR LED_color;
}LED;

//led driver functions
void LED_init(LED led);
void LED_on(LED led);
void LED_off(LED led);
void LED_toggle(LED led);
void LED_ON_5_SEC(LED led, LED led2);
void LED_blink(LED led);
//void Delay( unsigned int uCount);


#endif /* LED_H_ */