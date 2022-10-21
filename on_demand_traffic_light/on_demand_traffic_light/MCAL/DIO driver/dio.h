#ifndef DIO_H_
#define DIO_H_

//include registers.h
#include "../../utility/registers.h"

// all internal drivers typdefs for this file
// all driver macros
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

//direction defines
#define IN 0
#define OUT 1

//value defines
#define HIGH 1
#define LOW 0

//all driver functions prototypes
void DIO_init(uint8_t pinNumber, uint8_t portNumber, uint8_t direction); //initialize dio direction
void DIO_write(uint8_t pinNumber, uint8_t portNumber, uint8_t value); //write data to dio
void DIO_toggle(uint8_t pinNumber, uint8_t portNumber); //toggle dio
void DIO_read(uint8_t pinNumber, uint8_t portNumber, uint8_t *value); //read dio



#endif /* DIO_H_ */