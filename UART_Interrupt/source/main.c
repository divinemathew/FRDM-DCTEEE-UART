
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MK64F12.h"
#include "fsl_debug_console.h"
#include "uart.h"



int main(void) {

    /* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    Init_UART0();
    BOARD_InitLEDsPins();

    while(1){
    	/*LED TURN ON*/
    	LED_BLUE_ON();
    	SDK_DelayAtLeastUs(100000, 120000000);
    	LED_BLUE_OFF();
    	LED_GREEN_ON();
    	SDK_DelayAtLeastUs(100000, 120000000);
    	LED_GREEN_OFF();
    	LED_RED_ON();
    	SDK_DelayAtLeastUs(100000, 120000000);
    	LED_RED_OFF();

    }
    return 0 ;
}
