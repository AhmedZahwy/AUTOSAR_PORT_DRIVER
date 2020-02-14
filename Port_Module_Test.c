/*
 * Port_Module_Test.c
 *
 *  Created on: Feb 14, 2020
 *  Author: Ahmed Zahwy
 */

#include "Port.h"
#include <util/delay.h>


int main(void){
	Port_Init(&Port_Configuration);
	while(1)
	{
		Port_SetPinDirection(PORTCONFG_PC2_INDEX, PORT_PIN_OUT);
		_delay_ms(1000);
		Port_RefreshPortDirection();
		_delay_ms(1000);
	}
return 0;
}
