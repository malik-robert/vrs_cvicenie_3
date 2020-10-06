################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_exti.c \
../Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_gpio.c \
../Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_rcc.c \
../Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_utils.c 

OBJS += \
./Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_exti.o \
./Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_gpio.o \
./Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_rcc.o \
./Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_utils.o 

C_DEPS += \
./Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_exti.d \
./Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_gpio.d \
./Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_rcc.d \
./Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_utils.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_exti.o: ../Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_exti.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F303x8 -c -I../Inc -I../Drivers/CMSIS/Include -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_exti.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_gpio.o: ../Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_gpio.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F303x8 -c -I../Inc -I../Drivers/CMSIS/Include -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_gpio.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_rcc.o: ../Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_rcc.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F303x8 -c -I../Inc -I../Drivers/CMSIS/Include -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_rcc.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_utils.o: ../Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_utils.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F303x8 -c -I../Inc -I../Drivers/CMSIS/Include -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_ll_utils.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

