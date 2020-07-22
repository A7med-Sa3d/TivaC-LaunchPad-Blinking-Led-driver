/*
 * Header.c
 *
 *  Created on: Jul 21, 2020
 *      Author: Ahmed Mohamed Saad Elmahmoudy
 */

#include "Header.h"

/* delay n milliseconds (16 MHz CPU clock) */
void delayMs(int n)
{
    int i, j;
    for(i = 0 ; i < n; i++)
        for(j = 0; j < 3180; j++){} /* do nothing for 1 ms */
}
/* This function is called by the startup assembly code to perform system specificinitialization tasks. */
void SystemInit(void)
{
    /* Grant coprocessor access*/
    /* This is required since TM4C123G has a floating point coprocessor */
    SCB_CPAC |= 0x00F00000;
}
