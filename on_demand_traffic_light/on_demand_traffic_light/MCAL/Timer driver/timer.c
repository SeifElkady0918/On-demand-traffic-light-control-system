/*
 * timer.c
 *
 * Created: 22/10/14 3:29:45 PM
 *  Author: pc
 */ 
#include "timer.h"

void TIMER_init()
{
	//Timer normal mode
	TCCR0 = 0x00;
	
	// set timer value
	TCNT0 =0x00;
}
void TIMER_start(Timer_Prescale prescale)
{
	TCCR0 = (TCCR0 & 0b11111000) | prescale;
}

void TIMER_stop()
{
	TCCR0 = 0x00;
}
Timer_state TIMER_getstate()
{
	if((TIFR & (1<<0)) ==1)
	{
		return TIMER_OVERFLOW;
	}
	else 
	{
		return TIMER_COUNTING;
	}
}

void clear_overflow_flag(){
	//clear the overflow flag
	TIFR |= (1<<0);
}