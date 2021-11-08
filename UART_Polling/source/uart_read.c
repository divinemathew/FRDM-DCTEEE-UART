#include "uart.h"
#include "stdint.h"


uint8_t read(void){
	uint8_t readch;
	UART_ReadBlocking(UART0, &readch, 1);
	return readch;
}


void print(uint8_t trnsdata){
	UART_WriteBlocking(UART0, &trnsdata, 1);
}
