################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/STM32_Src/startup_stm32f4xx.c \
../src/STM32_Src/tm_stm32f4_delay.c \
../src/STM32_Src/tm_stm32f4_exti.c \
../src/STM32_Src/tm_stm32f4_gpio.c \
../src/STM32_Src/tm_stm32f4_gps.c \
../src/STM32_Src/tm_stm32f4_i2c.c \
../src/STM32_Src/tm_stm32f4_nrf24l01.c \
../src/STM32_Src/tm_stm32f4_spi.c \
../src/STM32_Src/tm_stm32f4_usart.c 

OBJS += \
./src/STM32_Src/startup_stm32f4xx.o \
./src/STM32_Src/tm_stm32f4_delay.o \
./src/STM32_Src/tm_stm32f4_exti.o \
./src/STM32_Src/tm_stm32f4_gpio.o \
./src/STM32_Src/tm_stm32f4_gps.o \
./src/STM32_Src/tm_stm32f4_i2c.o \
./src/STM32_Src/tm_stm32f4_nrf24l01.o \
./src/STM32_Src/tm_stm32f4_spi.o \
./src/STM32_Src/tm_stm32f4_usart.o 

C_DEPS += \
./src/STM32_Src/startup_stm32f4xx.d \
./src/STM32_Src/tm_stm32f4_delay.d \
./src/STM32_Src/tm_stm32f4_exti.d \
./src/STM32_Src/tm_stm32f4_gpio.d \
./src/STM32_Src/tm_stm32f4_gps.d \
./src/STM32_Src/tm_stm32f4_i2c.d \
./src/STM32_Src/tm_stm32f4_nrf24l01.d \
./src/STM32_Src/tm_stm32f4_spi.d \
./src/STM32_Src/tm_stm32f4_usart.d 


# Each subdirectory must supply rules for building sources it contributes
src/STM32_Src/%.o: ../src/STM32_Src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DHSE_VALUE=8000000 -DSTM32F40x_MD_VL -DUSE_STDPERIPH_DRIVER -I"/Users/weitung/eclipse-workspace/EclipseWorkSpace/standalone-test/inc" -I"/Users/weitung/eclipse-workspace/EclipseWorkSpace/standalone-test/inc/TM_inc" -I"/Users/weitung/eclipse-workspace/EclipseWorkSpace/standalone-test/lib/STM32F4xx_StdPeriph_Driver/inc" -I"/Users/weitung/eclipse-workspace/EclipseWorkSpace/standalone-test/lib/CMSIS/Include" -I"/Users/weitung/eclipse-workspace/EclipseWorkSpace/standalone-test/lib/CMSIS/Device/ST/STM32F4xx/Include" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


