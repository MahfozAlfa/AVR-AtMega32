/*
 * main.c
 *
 *  Created on: Aug 23, 2019
 *      Author: ahmed
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "Dio_Interface.h"
#include "LCD_Interface.h"


int main(void) {

	DIO_vidSetPortDirection(PORTD, OUTPUT);

	DIO_vidSetPinDirection(PORTA, PIN0, OUTPUT);
	DIO_vidSetPinDirection(PORTA, PIN1, OUTPUT);
	DIO_vidSetPinDirection(PORTA, PIN2, OUTPUT);

	Lcd_vidInitalization();





	Lcd_vidWriteint(90000);



















	return 0;
}
