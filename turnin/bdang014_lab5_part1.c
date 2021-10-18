/*	Author: Bryan Dang
 *  Partner(s) Name: 
 *	Lab Section: 021
 *	Assignment: Lab #5  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    DDRA = 0x00; PORTA = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;
    unsigned char led = 0x00;
    unsigned char button = 0x00;

    while (1) {
	button = ~PINA & 0x0F;
        if (button == 0x00) {
		led = 0x40;
        } else if (button == 0x01) {
		led = 0x60;
	} else if (button == 0x02) {
                led = 0x60;
        } else if (button == 0x03) {
                led = 0x70;
	} else if (button == 0x04) {
                led = 0x70;
        } else if (button == 0x05) {
                led = 0x38;
        } else if (button == 0x06) {
                led = 0x38;
        } else if (button == 0x07) {
                led = 0x3C;
        } else if (button == 0x08) {
                led = 0x3C;
        } else if (button == 0x09) {
                led = 0x3C;
        } else if (button == 0x0A) {
                led = 0x3E;
        } else if (button == 0x0B) {
                led = 0x3E;
        } else if (button == 0x0C) {
                led = 0x3E;
        } else if (button == 0x0D) {
                led = 0x3F;
        } else if (button == 0x0E) {
                led = 0x3F;
        } else if (button == 0x0F) {
        	led = 0x3F;
        }
	PORTC = led;
    }
}
