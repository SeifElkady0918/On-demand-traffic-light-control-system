/*
 * button.c
 *
 * Created: 22/10/13 5:42:02 PM
 *  Author: pc
 */ 

#include "button.h"

//Initialization
void BUTTON_Init(uint8_t buttonPort, uint8_t buttonPin)
{
	DIO_init(buttonPin, buttonPort, IN);
}

//button read
void BUTTON_Read(uint8_t buttonPort, uint8_t buttonPin, uint8_t *value)
{
	DIO_read(buttonPin, buttonPort, value);
}