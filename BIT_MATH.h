/******************************************************************************************************************/
/***************************************         MAHFOZ ALFA     **************************************************/
/******************************************************************************************************************/
/**    Date : 26/9/2019                                                            Country:   EGYPT	             **/
/******************************************************************************************************************/

#ifndef BIT_MATH_H_
#define BIT_MATH_H_


#define SET_BIT(BYTE,Bit_NO) (BYTE) |= (1<<(Bit_NO)) // to fill only one bit by 1 (5V)
#define CLR_BIT(BYTE,Bit_NO) (BYTE) &= ~(1<<(Bit_NO))// to fill only one bit by 0 (0V)
#define TOGGEL_BIT(BYTE,Bit_NO) (BYTE) ^= 1<<(Bit_NO)// to Change only one bit by 1 or zero
#define GET_BIT(BYTE,Bit_NO) (BYTE>>Bit_NO)&0x01     // to GET(0 or 1) only From one bit

#define SET_BYTE(Byte) (Byte |=(0xFF))   // to fill one byte by 1 (5V) (Register(8-bit) fill )
#define CLEAR_BYTE(Byte) (Byte &=(0x00)) // to fill one byte by 0 (0V) (Register(8-bit) fill )
#define SET_NIBBLE_HIGH(Byte) (Byte |=(0xF0))
#define SET_NIBBLE_LOW(Byte) (Byte |=(0x0F))
#define CLEAR_NIBBLE_HIGH(Byte) (Byte &=(0x0F))
#define CLEAR_NIBBLE_LOW(Byte) (Byte &=(0xF0))

#define BIT_CONC(A7,A6,A5,A4,A3,A2,A1,A0)  CONC_HELP(A7,A6,A5,A4,A3,A2,A1,A0)
#define CONC_HELP(A7,A6,A5,A4,A3,A2,A1,A0)  0b##A7##A6##A5##A4##A3##A2##A1##A0

#endif
