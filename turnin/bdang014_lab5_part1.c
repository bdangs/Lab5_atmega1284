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
	button = PINA & 0x00;
        if (button) {
		led = led | 0x40;
        }
	button = ~PINA & 0x01;
	if (button) {
		led = (led & 0xFF) | 0x60;
	}
	button = ~PINA & 0x02;
        if (button) {
                led = (led & 0xFF) | 0x60;
        }
	button = ~PINA & 0x03;
        if (button) {
                led = (led & 0xFF) | 0x70;
	}
	button = ~PINA & 0x04;
        if (button) {
                led = (led & 0xFF) | 0x70;
        }
	button = ~PINA & 0x05;
        if (button) {
                led = (led & 0xFF) | 0x38;
        }
        button = ~PINA & 0x06;
        if (button) {
                led = (led & 0xFF) | 0x38;
        }
        button = ~PINA & 0x07;
        if (button) {
                led = (led & 0xFF) | 0x3C;
        }
        button = ~PINA & 0x08;
        if (button) {
                led = (led & 0xFF) | 0x3C;
        }
	button = ~PINA & 0x09;
        if (button) {
                led = (led & 0xFF) | 0x3C;
        }
        button = ~PINA & 0x0A;
        if (button) {
                led = (led & 0xFF) | 0x3E;
        }
        button = ~PINA & 0x0B;
        if (button) {
                led = (led & 0xFF) | 0x3E;
        }
        button = ~PINA & 0x0C;
        if (button) {
                led = (led & 0xFF) | 0x3E;
        }
	button = ~PINA & 0x0D;
        if (button) {
                led = (led & 0xFF) | 0x3F;
        }
        button = ~PINA & 0x0E;
        if (button) {
                led = (led & 0xFF) | 0x3F;
        }
        button = ~PINA & 0x0F;
        if (button) {
                led = (led & 0xFF) | 0x3F;
        }
	PORTC = led;
    }
}
