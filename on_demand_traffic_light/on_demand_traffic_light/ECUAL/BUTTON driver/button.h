/*
 * button.h
 *
 * Created: 22/10/13 5:41:49 PM
 *  Author: pc
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/DIO driver/dio.h"

#define BUTTON_1_PORT PORT_C
#define BUTTON_1_PIN PIN1

//button state macro
#define BUTTON_STATE_LOW 0
#define BUTTON_STATE_HIGH 1

//Initialization
void BUTTON_Init(uint8_t buttonPort, uint8_t buttonPin);

//button read
void BUTTON_Read(uint8_t buttonPort, uint8_t buttonPin, uint8_t *value);


#endif /* BUTTON_H_ */