/*
 * SPI_lib.h
 *
 * Created: 1/28/2021 12:51:45 AM
 *  Author: Merna
 */ 


#ifndef SPI_LIB_H_
#define SPI_LIB_H_

void SPI_inti_master();
void SPI_inti_slave();
void SPI_Send(char send);
char SPI_Resive();

#endif /* SPI_LIB_H_ */