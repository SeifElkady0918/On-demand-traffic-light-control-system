/*
 * app.h
 *
 * Created: 22/10/13 4:32:58 PM
 *  Author: pc
 */ 


#ifndef APP_H_
#define APP_H_
#include "../ECUAL/LED driver/led.h"
#include "../ECUAL/BUTTON driver/button.h"
#include "../MCAL/Interrupt driver/interrupts.h"

//app driver functions
void APP_init(void);
void App_start(void);
void normal_operation();




#endif /* APP_H_ */