#include "stdint.h"
#include "fsl_uart.h"
#include "MK64F12.h"
#include "fsl_clock.h"

#define UART0_CLOCK CLOCK_GetFreq(kCLOCK_CoreSysClk)

void Init_UART0(void);
uint8_t read(void);
