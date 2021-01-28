/*
 * UART_lib.c
 *
 * Created: 1/28/2021 12:42:16 AM
 *  Author: Merna
 */ 
#include <avr/io.h>
#include "UART_lib.h"

void UART(){
	UCSRB |= (1<<TXEN) | (1<<RXEN);
	UBRRL=103; 
}

void UART_SEND(char send){
	while (!(UCSRA & (1<<UDRE)));
	UDR=send;
}

char UART_READ(){
	while(!(UCSRA & (1<<RXC)));
	return UDR;
}

