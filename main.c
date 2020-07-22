/*
 *    main.c
 *    Created on: Jul 21, 2020
 *    Author: Ahmed Mohamed Saad Elmahmoudy
 */
#include "Header.h"

int main(void)
{
    /* enable clock to GPIOF at clock gating register */
    RCGC_GPIO |= 0x20;
    /* set PORTF pin3-1 as output pins */
    PORTF_DIR_R = 0x0E;
    /* set PORTF pin3-1 as digital pins */
    PORTF_DEN_R = 0x0E;
    while(1)
    {
        /* write PORTF to turn on all LEDs */
        PORTF_DATA_R = 0b1000;
        delayMs(100);
        PORTF_DATA_R = 0b0100;
        delayMs(100);
        PORTF_DATA_R = 0b0010;
        delayMs(100);
        /* write PORTF to turn off all LEDs */
        PORTF_DATA_R = 0;
        delayMs(100);
    }
}
