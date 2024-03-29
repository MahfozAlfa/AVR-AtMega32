/******************************************************************************************************************/
/***************************************         MAHFOZ ALFA     **************************************************/
/******************************************************************************************************************/
/**    Date : 26/9/2019                                                            Country:   EGYPT	             **/
/******************************************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "Dio_Interface.h"
#include "DIO_reg.h"
// you should take care 3000 times for headers file arrangement

void DIO_vidSetPinDirection(u8 Cpy_u8PortId, u8 Cpy_u8PinNo, u8 Cpy_u8PinDir) { // implement for Pin Direction function

	if ((Cpy_u8PortId <= PORTD && Cpy_u8PortId >= PORTA)
			&& (Cpy_u8PinNo <= PIN7 && Cpy_u8PortId >= PIN0)) { // First if condition to ensure correct ports and pins no.


		if (Cpy_u8PinDir == INPUT){ // here i used general code to make it simple and readable

			switch (Cpy_u8PortId){
			case PORTA : CLR_BIT(DDRA_REG,Cpy_u8PinNo);break ;
			case PORTB : CLR_BIT(DDRB_REG,Cpy_u8PinNo);break ;
			case PORTC : CLR_BIT(DDRC_REG,Cpy_u8PinNo);break ;
			case PORTD : CLR_BIT(DDRD_REG,Cpy_u8PinNo);break ;
			}
		}
		else if (Cpy_u8PinDir == OUTPUT){
			switch (Cpy_u8PortId){
			case PORTA : SET_BIT(DDRA_REG,Cpy_u8PinNo);break ;
			case PORTB : SET_BIT(DDRB_REG,Cpy_u8PinNo);break ;
			case PORTC : SET_BIT(DDRC_REG,Cpy_u8PinNo);break ;
			case PORTD : SET_BIT(DDRD_REG,Cpy_u8PinNo);break ;
			}

		}
	}

}

void DIO_vidSetPinValue(u8 Cpy_u8PortId, u8 Cpy_u8PinNo, u8 Cpy_u8PinValue) { // implement for Pin value function

	if ((Cpy_u8PortId <= PORTD && Cpy_u8PortId >= PORTA)
			&& (Cpy_u8PinNo <= PIN7 && Cpy_u8PortId >= PIN0)) { // First if condition to ensure correct ports and pins no.

		if (Cpy_u8PinValue == LOW){ // here i used general code to make it simple and readable

			switch (Cpy_u8PortId){
			case PORTA : CLR_BIT(PORTA_REG,Cpy_u8PinNo);break ;
			case PORTB : CLR_BIT(PORTB_REG,Cpy_u8PinNo);break ;
			case PORTC : CLR_BIT(PORTC_REG,Cpy_u8PinNo);break ;
			case PORTD : CLR_BIT(PORTD_REG,Cpy_u8PinNo);break ;
			}
		}
		else if (Cpy_u8PinValue == HIGH){
			switch (Cpy_u8PortId){
			case PORTA : SET_BIT(PORTA_REG,Cpy_u8PinNo);break ;
			case PORTB : SET_BIT(PORTB_REG,Cpy_u8PinNo);break ;
			case PORTC : SET_BIT(PORTC_REG,Cpy_u8PinNo);break ;
			case PORTD : SET_BIT(PORTD_REG,Cpy_u8PinNo);break ;
			}

		}


	}

}

u8 DIO_u8GetPinValue(u8 Cpy_u8PortId, u8 Cpy_u8PinNo) { // implement to Get Pin value function

	u8 Loc_u8Value = ERROR;

	if ((Cpy_u8PortId <= PORTD && Cpy_u8PortId >= PORTA)
			&& (Cpy_u8PinNo <= PIN7 && Cpy_u8PortId >= PIN0)) {// First if condition to ensure correct ports and pins no.

		switch (Cpy_u8PortId) {

		case PORTA:Loc_u8Value = GET_BIT(PINA_REG, Cpy_u8PinNo);break;
		case PORTB:Loc_u8Value = GET_BIT(PINB_REG, Cpy_u8PinNo);break;
		case PORTC:Loc_u8Value = GET_BIT(PINC_REG, Cpy_u8PinNo);break;
		case PORTD:Loc_u8Value = GET_BIT(PIND_REG, Cpy_u8PinNo);break;


		}

	}
	return Loc_u8Value;

}

void DIO_vidSetPortDirection(u8 Cpy_u8PortId, u8 Cpy_u8ProtDir) {// implement for port Direction function

	if ((Cpy_u8PortId <= PORTD && Cpy_u8PortId >= PORTA)) { // First if condition to ensure correct ports no.

		if (Cpy_u8ProtDir == INPUT){

			switch (Cpy_u8PortId){
			case PORTA : CLEAR_BYTE(DDRA_REG);break ;
			case PORTB : CLEAR_BYTE(DDRB_REG);break ;
			case PORTC : CLEAR_BYTE(DDRC_REG);break ;
			case PORTD : CLEAR_BYTE(DDRD_REG);break ;
			}
		}
		else if (Cpy_u8ProtDir == OUTPUT){
			switch (Cpy_u8PortId){
			case PORTA : SET_BYTE(DDRA_REG);break ;
			case PORTB : SET_BYTE(DDRB_REG);break ;
			case PORTC : SET_BYTE(DDRC_REG);break ;
			case PORTD : SET_BYTE(DDRD_REG);break ;
			}

		}

	}

}

void DIO_vidSetPortValue(u8 Cpy_u8PortId, u8 Cpy_u8PortValue) {// implement for port Value function

	if ((Cpy_u8PortId <= PORTD && Cpy_u8PortId >= PORTA)) {  // First if condition to ensure correct ports no.

		switch (Cpy_u8PortId) {

		case PORTA: PORTA_REG = Cpy_u8PortValue;break;
		case PORTB: PORTB_REG = Cpy_u8PortValue;break;
		case PORTC: PORTC_REG = Cpy_u8PortValue;break;
		case PORTD: PORTD_REG = Cpy_u8PortValue;break;


		}

	}

}

u8 DIO_u8GetPortValue(u8 Cpy_u8PortId) {// implement to Get Port Value function

	u8 Loc_u8Value;

	if ((Cpy_u8PortId <= PORTD && Cpy_u8PortId >= PORTA)) {  // First if condition to ensure correct ports no.

		switch (Cpy_u8PortId) {

		case PORTA: Loc_u8Value = PINA_REG;break;
		case PORTB: Loc_u8Value = PINB_REG;break;
		case PORTC: Loc_u8Value = PINC_REG;break;
		case PORTD: Loc_u8Value = PIND_REG;break;


		}

	}
	return Loc_u8Value;

}

