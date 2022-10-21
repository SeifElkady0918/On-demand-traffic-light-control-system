
#include "app.h"

LED LED1RED	= {PORT_A, PIN0, RED};
LED LED1YELLOW = {PORT_A, PIN1, YELLOW};
LED LED1GREEN = {PORT_A, PIN2, GREEN};
	
LED LED2RED = {PORT_B, PIN0, RED};
LED LED2YELLOW = {PORT_B, PIN1, YELLOW};
LED LED2GREEN = {PORT_B, PIN2, GREEN}; 
uint8_t buttonstate = BUTTON_STATE_LOW;

volatile unsigned int casenumber = 1;

void APP_init(void)
{
	
	LED_init(LED1RED);
	LED_init(LED1YELLOW);
	LED_init(LED1GREEN);
	LED_init(LED2RED);
	LED_init(LED2YELLOW);
	LED_init(LED2GREEN);
	BUTTON_Init(PORT_D, PIN2);
	
	sei();
	
	MCUCR |= (1<<0) | (1<<1);
	
	GICR |= (1<<6);
}

void App_start(void)
{
	while(1)
	{
		normal_operation();
	}
}

void normal_operation()
{
	switch(casenumber){
		case 1: 
			LED_ON_5_SEC(LED1RED,LED2RED); // Case no. 4
			casenumber++;  //case no. 5
		break;
		case 2:
			LED_ON_5_SEC(LED1YELLOW,LED2RED); // 6
			casenumber++; // 7
		break;
		case 3:
			LED_ON_5_SEC(LED1GREEN,LED2RED);
			casenumber++;
		break;
		case 4:
			LED_ON_5_SEC(LED1YELLOW,LED2RED);
			if(casenumber !=7){
			casenumber=1;}
		break;
		case 5:
			LED_ON_5_SEC(LED1RED,LED2GREEN);// 
			casenumber++; // case no. 6
		break;
		case 6:
			LED_ON_5_SEC(LED1YELLOW,LED2YELLOW); //
			casenumber=3; // 
		break;
		case 7:
			LED_ON_5_SEC(LED1YELLOW,LED2YELLOW);
			casenumber++;
		break;
		case 8:
			casenumber=5;
		break;
	}
}
ISR(EXT_INT_0){
	
	if(casenumber==2 || casenumber==3)
	{
		casenumber = 6;
	}else if(casenumber==1)
	{
		casenumber =4;
	}else if(casenumber==4){
		casenumber=7;
	}
}

