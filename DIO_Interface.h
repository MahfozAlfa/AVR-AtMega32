/******************************************************************************************************************/
/***************************************         MAHFOZ ALFA     **************************************************/
/******************************************************************************************************************/
/**    Date : 26/9/2019                                                            Country:   EGYPT	             **/
/******************************************************************************************************************/

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
/*****************************************************************************************************************/
/*****************************************************************************************************************/
/********************  DEFINE macros for pins to to use in code     **********************************************/
/*****************************************************************************************************************/
/*****************************************************************************************************************/

#define PIN0				0
#define PIN1				1
#define PIN2				2
#define PIN3				3
#define PIN4				4
#define PIN5				5
#define PIN6				6
#define PIN7				7
/*****************************************************************************************************************/
/*****************************************************************************************************************/
/********************  DEFINE macros for ports to to use in code    **********************************************/
/*****************************************************************************************************************/
/*****************************************************************************************************************/
#define PORTA				0
#define PORTB				1
#define PORTC				2
#define PORTD				3
/*****************************************************************************************************************/
/*****************************************************************************************************************/
/********************  DEFINE macros for logical operation to to use in code *************************************/
/*****************************************************************************************************************/
/*****************************************************************************************************************/
#define INPUT				0
#define OUTPUT				1
#define HIGH				1
#define LOW					0
/*****************************************************************************************************************/
/*****************************************************************************************************************/
/*********  DEFINE macro to get value from pins & which default value for pins as pull up (5v)    ****************/
/*****************************************************************************************************************/
/*****************************************************************************************************************/
#define ERROR				0xff


/*****************************************************************************************************************/
/*****************************************************************************************************************/
/********************  DEFINE prototype for function which select pins direction :      **************************/
/********************  return = nothing  &  input = (port name , pin number , pin direction ) ********************/
/*****************************************************************************************************************/
/*****************************************************************************************************************/
void DIO_vidSetPinDirection(u8 Cpy_u8PortId , u8 Cpy_u8PinNo , u8 Cpy_u8PinDir);

/*****************************************************************************************************************/
/*****************************************************************************************************************/
/********************  DEFINE prototype for function which select pins value (0v or 5v) :   **********************/
/********************  return = nothing  &  input = (port name , pin number , pin value )     ********************/
/*****************************************************************************************************************/
/*****************************************************************************************************************/
void DIO_vidSetPinValue(u8 Cpy_u8PortId , u8 Cpy_u8PinNo , u8 Cpy_u8PinValue);

/*****************************************************************************************************************/
/*****************************************************************************************************************/
/********************  DEFINE prototype for function which Get pins value (0v or 5v) :      **********************/
/********************  return = Value of pins  &  input = (port name , pin number  )          ********************/
/*****************************************************************************************************************/
/*****************************************************************************************************************/
u8 DIO_u8GetPinValue(u8 Cpy_u8PortId , u8 Cpy_u8PinNo);

/*****************************************************************************************************************/
/*****************************************************************************************************************/
/********************  DEFINE prototype for function which select Port Direction :          **********************/
/********************  return = nothing  &  input = (port name ,Port Direction )              ********************/
/*****************************************************************************************************************/
/*****************************************************************************************************************/
void DIO_vidSetPortDirection(u8 Cpy_u8PortId , u8 Cpy_u8ProtDir);

/*****************************************************************************************************************/
/*****************************************************************************************************************/
/********************  DEFINE prototype for function which select Port Value (0V or 5V) :        *****************/
/********************  return = nothing  &  input = (port name , Port Value )                 ********************/
/*****************************************************************************************************************/
/*****************************************************************************************************************/
void DIO_vidSetPortValue(u8 Cpy_u8PortId , u8 Cpy_u8PortValue);

/*****************************************************************************************************************/
/*****************************************************************************************************************/
/********************  DEFINE prototype for function which Get value From Port :            **********************/
/********************  return = Port Value  &  input = (port name  )                          ********************/
/*****************************************************************************************************************/
/*****************************************************************************************************************/
u8 DIO_u8GetPortValue(u8 Cpy_u8PortId);



#endif
