/*
 * Header.h
 *
 *  Created on: Jul 21, 2020
 *      Author: Ahmed Mohamed Saad Elmahmoudy
 */

#ifndef HEADER_H_
#define HEADER_H_

/////////////////////////PortA///////////////////////////
/* PORTF data register */ //0x4000.4000 + 000 = 0x4000.4000  //0x4000.4000 + 0x3FC = 0x400043FC.
#define PORTA_DATA_R (*((volatile unsigned int*)0x400043FC))
/* PORTF data direction register */ //0x4000.4000 + 0x400 = 0x40004400
#define PORTA_DIR_R (*((volatile unsigned int*)0x40004400))
/* PORTF digital enable register */  //0x4000.4000 + 0x051C
#define PORTA_DEN_R (*((volatile unsigned int*)0x4000451C))

/////////////////////////PortB///////////////////////////
/* PORTF data register */ //0x4000.5000 + 000 = 0x4000.5000  //0x4000.5000 + 0x3FC = 0x400053FC.
#define PORTB_DATA_R (*((volatile unsigned int*)0x400053FC))
/* PORTF data direction register */ //0x4000.5000 + 0x400 = 0x40005400
#define PORTB_DIR_R (*((volatile unsigned int*)0x40005400))
/* PORTF digital enable register */  //0x4000.5000 + 0x051C
#define PORTB_DEN_R (*((volatile unsigned int*)0x4000551C))

/////////////////////////PortC///////////////////////////
/* PORTF data register */ //0x4000.6000 + 000 = 0x4000.6000  //0x4000.6000 + 0x3FC = 0x400063FC.
#define PORTC_DATA_R (*((volatile unsigned int*)0x400063FC))
/* PORTF data direction register */ //0x4000.6000 + 0x400 = 0x40006400
#define PORTC_DIR_R (*((volatile unsigned int*)0x40006400))
/* PORTF digital enable register */  //0x4000.6000 + 0x051C
#define PORTC_DEN_R (*((volatile unsigned int*)0x4000651C))

/////////////////////////PortD///////////////////////////
/* PORTF data register */ // 0x4000.7000 + 000 = 0x4000.7000  //0x4000.7000 + 0x3FC = 0x400073FC.
#define PORTD_DATA_R (*((volatile unsigned int*)0x400073FC))
/* PORTF data direction register */ //0x4000.7000 + 0x400 = 0x40007400
#define PORTD_DIR_R (*((volatile unsigned int*)0x40007400))
/* PORTF digital enable register */  //0x4000.7000 + 0x051C
#define PORTD_DEN_R (*((volatile unsigned int*)0x4000751C))

/////////////////////////PortE///////////////////////////
/* PORTF data register */ //0x40024000+000=0x40024000   //0x40024000 + 0x3FC = 0x400243FC.
#define PORTE_DATA_R (*((volatile unsigned int*)0x400243FC))
/* PORTF data direction register */ //0x40024000 + 0x400 = 0x40024400
#define PORTE_DIR_R (*((volatile unsigned int*)0x40024400))
/* PORTF digital enable register */  //0x40024000 + 0x051C
#define PORTE_DEN_R (*((volatile unsigned int*)0x4002451C))

/////////////////////////PortF///////////////////////////
/* PORTF data register */ //0x40025000+000=0x40025000   //0x40025000 + 0x3FC = 0x400253FC.
#define PORTF_DATA_R (*((volatile unsigned int*)0x400253FC))
/* PORTF data direction register */ //0x40025000 + 0x400 = 0x40025400
#define PORTF_DIR_R (*((volatile unsigned int*)0x40025400))
/* PORTF digital enable register */  //0x40025000 + 0x051C
#define PORTF_DEN_R (*((volatile unsigned int*)0x4002551C))
/////////////////////////////////////////////////////////

/* run mode clock gating register */
#define RCGC_GPIO (*((volatile unsigned int*)0x400FE608))
/* coprocessor access control register */
#define SCB_CPAC (*((volatile unsigned int*)0xE000ED88))

void delayMs(int n);

#endif /* HEADER_H_ */
