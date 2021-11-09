/**
* @main.c
* @brief
*
*This program accepts two inputs from user and search for the 8 or 16 bit
pattern.
*
*
*
* @note
*
* Revision History:
* - 220921  DAM : Creation Date
*/


#include "uart.h"

/*******************************************
* Const and Macro Defines
*******************************************/
#define FIFO_REG 0x4006A010
/***********************************
* Typedefs and Enum Declarations
***********************************/

// none

/***********************************
* External Variable Declarations
***********************************/

// none

/***********************************
* Const Declarations
***********************************/

// none

/***********************************
* Public Variables
***********************************/

// none

/***********************************
* Private Variables
***********************************/

// none

/***********************************
* Private Prototypes
***********************************/


/***********************************
* Public Functions
***********************************/

/**
* @manual
* @brief
*
*This function displys the help option for user
*
*
*
* @note
*
* Revision History:
* - 240921  DAM : Creation Date
*/


void Init_UART0()
{

	uint8_t welcome_msg[] = "\n\rUART Initialized - In Interrupt Mode\n\r";
	uart_config_t configuration;
	uint32_t flag_status;


	UART_GetDefaultConfig(&configuration);
	configuration.baudRate_Bps = 115200;
	configuration.enableRx = true;
	configuration.enableTx = true;
	configuration.rxFifoWatermark = 1;
	UART_Init(UART0,&configuration,CLOCK_GetFreq(kCLOCK_CoreSysClk));

	UART_WriteBlocking(UART0, welcome_msg, sizeof(welcome_msg)-1);
	EnableIRQ(UART0_RX_TX_IRQn);
	UART_EnableInterrupts(UART0,kUART_RxFifoOverflowInterruptEnable|kUART_RxDataRegFullInterruptEnable);

}

