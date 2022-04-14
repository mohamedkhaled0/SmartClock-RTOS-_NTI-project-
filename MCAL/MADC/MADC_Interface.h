/*
 * MADC_Interface.h
 *
 *  Created on: Nov 22, 2021
 *      Author: gerges
 */

#ifndef MCAL_MADC_MADC_INTERFACE_H_
#define MCAL_MADC_MADC_INTERFACE_H_

#define CHANNEL_0     0
#define CHANNEL_1     1
#define CHANNEL_2     2
#define CHANNEL_3     3
#define CHANNEL_4     4
#define CHANNEL_5     5
#define CHANNEL_6     6
#define CHANNEL_7     7

/*ADC Initialization*/
void MADC_VidInit(void);
void MADC_VidADCInterruptEnable(void);
/*ADC Start Conversion-->Polling , Return ADC Value*/
unsigned int MADC_u16ADC_StartConversion(unsigned char Copy_u8Channel);
void MADC_u16ADC_StartConversion_With_Interrupt(unsigned char Copy_u8Channel);
unsigned int MADC_u16ADCRead(void);
void MADC_VidSetCallBack(void (*Copy_pFun)(void));




#endif /* MCAL_MADC_MADC_INTERFACE_H_ */
