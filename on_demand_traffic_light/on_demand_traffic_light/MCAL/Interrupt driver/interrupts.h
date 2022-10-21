/*
 * interrupts.h
 *
 * Created: 22/10/14 7:30:32 PM
 *  Author: pc
 */ 


#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_


#define EXT_INT_0 __vector_1

#define sei() __asm__ __volatile__ ("sei" ::: "memory")

#define cli() __asm__ __volatile__ ("cli" ::: "memory")

#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal,used));\
void INT_VECT(void)



#endif /* INTERRUPTS_H_ */