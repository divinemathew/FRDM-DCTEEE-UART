################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/main.c \
../source/uart_init.c \
../source/uart_read.c 

OBJS += \
./source/main.o \
./source/uart_init.o \
./source/uart_read.o 

C_DEPS += \
./source/main.d \
./source/uart_init.d \
./source/uart_read.d 


# Each subdirectory must supply rules for building sources it contributes
source/%.o: ../source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_MK64FN1M0VLL12 -DCPU_MK64FN1M0VLL12_cm4 -DSDK_OS_BAREMETAL -DSERIAL_PORT_TYPE_UART=1 -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"/home/divine/Desktop/FRDM-UART/UART_Interrupt/board" -I"/home/divine/Desktop/FRDM-UART/UART_Interrupt/source" -I"/home/divine/Desktop/FRDM-UART/UART_Interrupt/drivers" -I"/home/divine/Desktop/FRDM-UART/UART_Interrupt/utilities" -I"/home/divine/Desktop/FRDM-UART/UART_Interrupt/component/serial_manager" -I"/home/divine/Desktop/FRDM-UART/UART_Interrupt/component/uart" -I"/home/divine/Desktop/FRDM-UART/UART_Interrupt/component/lists" -I"/home/divine/Desktop/FRDM-UART/UART_Interrupt/CMSIS" -I"/home/divine/Desktop/FRDM-UART/UART_Interrupt/device" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


