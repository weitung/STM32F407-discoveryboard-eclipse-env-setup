################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/main.c \
../src/printf.c 

OBJS += \
./src/main.o \
./src/printf.o 

C_DEPS += \
./src/main.d \
./src/printf.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DHSE_VALUE=8000000 -DSTM32F40x_MD_VL -DUSE_STDPERIPH_DRIVER -I"/Users/weitung/eclipse-workspace/EclipseWorkSpace/standalone-test/inc" -I"/Users/weitung/eclipse-workspace/EclipseWorkSpace/standalone-test/inc/TM_inc" -I"/Users/weitung/eclipse-workspace/EclipseWorkSpace/standalone-test/lib/STM32F4xx_StdPeriph_Driver/inc" -I"/Users/weitung/eclipse-workspace/EclipseWorkSpace/standalone-test/lib/CMSIS/Include" -I"/Users/weitung/eclipse-workspace/EclipseWorkSpace/standalone-test/lib/CMSIS/Device/ST/STM32F4xx/Include" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


