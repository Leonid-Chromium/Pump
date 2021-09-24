/*
 * V2.c
 *
 * Created: 23.08.2021 19:07:20
 * Author : Leo
 */ 

#include <avr/io.h>
#include <avr/delay.h>

//#define  F_CPU 1000000 UL

int stime = 1000;

void delay(int ms){
	for(;ms;ms--)
	_delay_ms(1);
}

void init()
{
	DDRA = 0b11111111;
	PORTA = 0;
}

int main(void)
{
    init();
	delay(stime);
	PORTA ^= 1<<PORTA0;
}

