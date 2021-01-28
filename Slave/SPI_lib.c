/*
 * SPI_lib.c
 *
 * Created: 1/28/2021 12:48:23 AM
 *  Author: Merna
 */ 
#include <avr/io.h>
#include "SPI_lib.h"

void SPI_inti_master(){
	SPCR |= (1<<MSTR);
	DDRB |= (1<<4) | (1<<5) | (1<<7);
	SPCR |= (1<<SPE) | (1<<SPR1) | (1<<SPR0);
}

void SPI_inti_slave(){
	SPCR |= (1<<SPE) | (1<<SPR1) | (1<<SPR0);
}

void SPI_Send(char send){
	SPDR = send;
	while(!(SPSR & (1<<SPIF)));
}

char SPI_Resive(){
	while(!(SPSR & (1<<SPIF)));
	return SPDR;
}