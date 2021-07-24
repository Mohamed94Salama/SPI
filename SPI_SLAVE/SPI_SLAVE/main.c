/*
 * SPI_SLAVE.c
 *
 * Created: 7/16/2021 1:35:31 AM
 * Author : DELLL
 */ 

#include "SPI_Slave.h"


int main(void)
{
    uint8_t x;
	SPI_SlaveInit();
	
	//SPI_SlaveReceive(&x);
	//PORTC_R=x;
	uint8_t* ptr;
	SPI_SlaveReceiveString(ptr);

    while (1) 
    {
	if(!strcmp(ptr,"MOHAMED"))
	{
		DIO_Write(9,HIGH);
	}	
    }
}

