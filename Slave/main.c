/*
 * Slave.c
 *
 * Created: 1/28/2021 12:53:29 AM
 * Author : Merna
 */ 

#include <avr/io.h>
#include "SPI_lib.h"

int main(void)
{
    DDRD |= (1<<0)|(1<<1);
	SPI_inti_slave();
    while (1) 
    {
		char signal = SPI_Resive();
		switch (signal){
			case 'r':
				PORTD |=1;
				break;
			case 'g':
				PORTD &=~(1<<0);
				break;
			case 'x':
				PORTD |=(1<<1);
				break;
			case 'y':
				PORTD &=~(1<<1);
				break;
		}
    }
}

