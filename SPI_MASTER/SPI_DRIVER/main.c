/*
 * SPI_DRIVER.c
 *
 * Created: 7/15/2021 8:59:33 PM
 * Author : DELLL
 */ 

#include "SPI_Master.h"


int main(void)
{
    SPI_MasterInit();
	uint8_t* str="MOHAMED";
	volatile uint16_t i;
	for (i=0;i<10000;i++)
	{
		
	}
	//SPI_MasterTransmit(3);
	SPI_MasterTransmitString(str);
    while (1) 
    {
    }
}

