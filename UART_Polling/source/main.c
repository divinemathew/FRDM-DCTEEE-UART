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

#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MK64F12.h"
#include "fsl_debug_console.h"
#include "uart.h"


/*******************************************
* Const and Macro Defines
*******************************************/

#define ARGC_REQUIRED 3
#define ARGC_MINIMUM 1

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

void manual(void);

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


int main(void) {
	uint8_t ch;
	BOARD_InitBootPins();
	//BOARD_InitBootClocks();
	Init_UART0();

	while(1)
{
	ch = read();
	print(ch);
}
    return 0 ;
}
