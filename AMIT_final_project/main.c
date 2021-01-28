/*
 * AMIT_final_project.c
 *
 * Created: 1/28/2021 12:39:30 AM
 * Author : Merna
 */ 

#include <avr/io.h>
#include "UART_lib.h"
#include "SPI_lib.h"

int main(void)
{
	DDRB |= (1<<4) | (1<<5) | (1<<7);
	DDRB &= ~(1<<6);
	UART();
	SPI_inti_master();
    
    while (1) 
    {
		SPI_Send(UART_READ());
    }
}

