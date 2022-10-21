/*
 * timer.h
 *
 * Created: 22/10/14 3:29:32 PM
 *  Author: pc
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "../../utility/registers.h"

typedef enum
{
	NO_CLOCK,F_CPU_CLOCK,F_CPU_8,F_CPU_64,F_CPU_256,F_CPU_1024
}Timer_Prescale;

typedef enum
{
	TIMER_COUNTING,TIMER_OVERFLOW
}Timer_state;

//driver macros

//driver functions

void TIMER_init();
void TIMER_start(Timer_Prescale prescale);
void TIMER_stop();
Timer_state TIMER_getstate();
void clear_overflow_flag();



#endif /* TIMER_H_ */