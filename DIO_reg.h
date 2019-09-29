/******************************************************************************************************************/
/***************************************         MAHFOZ ALFA     **************************************************/
/******************************************************************************************************************/
/**    Date : 26/9/2019                                                            Country:   EGYPT	             **/
/******************************************************************************************************************/
#ifndef _DIO_REG_H
#define _DIO_REG_H

/*****************************************************************************************************************/
/*****************************************************************************************************************/
/********************  DEFINE macros to insert values in Dio_Registers  ******************************************/
/********************  I Got these hexadecimal numbers from data sheet of avr_atmega_32 **************************/
/******  word (volatile) points to the processor will save the values in memory not in cache  ********************/
/********************  we cast the pointer which points to register 8-Bit   **************************************/
/*****************************************************************************************************************/
/*****************************************************************************************************************/
/* Group A Registers */
#define PORTA_REG  *((volatile u8*)0x3B)
#define DDRA_REG   *((volatile u8*)0x3A)
#define PINA_REG   *((volatile u8*)0x39)

/* Group B Registers */
#define PORTB_REG  *((volatile u8*)0x38)
#define DDRB_REG   *((volatile u8*)0x37)
#define PINB_REG   *((volatile u8*)0x36)

/* Group C Registers */
#define PORTC_REG  *((volatile u8*)0x35)
#define DDRC_REG   *((volatile u8*)0x34)
#define PINC_REG   *((volatile u8*)0x33)

/* Group D Registers */
#define PORTD_REG  *((volatile u8*)0x32)
#define DDRD_REG   *((volatile u8*)0x31)
#define PIND_REG   *((volatile u8*)0x30)


#endif
