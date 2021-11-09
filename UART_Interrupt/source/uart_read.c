#include "uart.h"
#include "stdint.h"
#include "fsl_port.h"
#include "fsl_debug_console.h"


uint8_t read(void){
	uint8_t readch;
	UART_ReadBlocking(UART0, &readch, 1);
	return readch;
}


void print(uint8_t trnsdata){
	UART_WriteBlocking(UART0, &trnsdata, 1);
}

void UART0_RX_TX_IRQHandler(){
	uint32_t flag_status;
	uint8_t readch;
	flag_status = UART_GetStatusFlags(UART0);
	readch = read();
	print(readch);
}
