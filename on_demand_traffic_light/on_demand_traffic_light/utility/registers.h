#ifndef REGISTERS_H_
#define REGISTERS_H_

#include "typedefs.h"

/************************************************************************/
/*    DIO REGISTERS                                                     */
/************************************************************************/
// PORTA REGISTERS
#define PORTA *((volatile uint8_t*)0x3B) //8-bit reg
#define DDRA *((volatile uint8_t*)0x3A) //8-bit reg
#define PINA *((volatile uint8_t*)0x39) //8-bit reg

// PORTB REGISTERS
#define PORTB *((volatile uint8_t*)0x38) //8-bit reg
#define DDRB *((volatile uint8_t*)0x37) //8-bit reg
#define PINB *((volatile uint8_t*)0x36) //8-bit reg

// PORTC REGISTERS
#define PORTC *((volatile uint8_t*)0x35) //8-bit reg
#define DDRC *((volatile uint8_t*)0x34) //8-bit reg
#define PINC *((volatile uint8_t*)0x33) //8-bit reg

// PORTD REGISTERS
#define PORTD *((volatile uint8_t*)0x32) //8-bit reg
#define DDRD *((volatile uint8_t*)0x31) //8-bit reg
#define PIND *((volatile uint8_t*)0x30) //8-bit reg

/************************************************************************/
/*    Timer REGISTERS                                                   */
/************************************************************************/

#define TCCR0 *((volatile uint8_t*)0x53) //8-bit reg
#define TCNT0 *((volatile uint8_t*)0x52) //8-bit reg
#define TIFR *((volatile uint8_t*)0x58) //8-bit reg

/************************************************************************/
/*    External Interrupts REGISTERS                                     */
/************************************************************************/

#define MCUCR *((volatile uint8_t*)0x55) //8-bit reg
#define MCUCSR *((volatile uint8_t*)0x54) //8-bit reg
#define GICR *((volatile uint8_t*)0x5B) //8-bit reg
#define GIFR *((volatile uint8_t*)0x5A) //8-bit reg


#endif /* REGISTERS_H_ */