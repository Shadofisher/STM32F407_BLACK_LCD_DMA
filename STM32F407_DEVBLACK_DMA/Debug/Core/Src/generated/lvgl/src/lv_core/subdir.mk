################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/generated/lvgl/src/lv_core/lv_disp.c \
../Core/Src/generated/lvgl/src/lv_core/lv_group.c \
../Core/Src/generated/lvgl/src/lv_core/lv_indev.c \
../Core/Src/generated/lvgl/src/lv_core/lv_obj.c \
../Core/Src/generated/lvgl/src/lv_core/lv_refr.c \
../Core/Src/generated/lvgl/src/lv_core/lv_style.c 

OBJS += \
./Core/Src/generated/lvgl/src/lv_core/lv_disp.o \
./Core/Src/generated/lvgl/src/lv_core/lv_group.o \
./Core/Src/generated/lvgl/src/lv_core/lv_indev.o \
./Core/Src/generated/lvgl/src/lv_core/lv_obj.o \
./Core/Src/generated/lvgl/src/lv_core/lv_refr.o \
./Core/Src/generated/lvgl/src/lv_core/lv_style.o 

C_DEPS += \
./Core/Src/generated/lvgl/src/lv_core/lv_disp.d \
./Core/Src/generated/lvgl/src/lv_core/lv_group.d \
./Core/Src/generated/lvgl/src/lv_core/lv_indev.d \
./Core/Src/generated/lvgl/src/lv_core/lv_obj.d \
./Core/Src/generated/lvgl/src/lv_core/lv_refr.d \
./Core/Src/generated/lvgl/src/lv_core/lv_style.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/generated/lvgl/src/lv_core/lv_disp.o: ../Core/Src/generated/lvgl/src/lv_core/lv_disp.c Core/Src/generated/lvgl/src/lv_core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_core/lv_disp.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_core/lv_group.o: ../Core/Src/generated/lvgl/src/lv_core/lv_group.c Core/Src/generated/lvgl/src/lv_core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_core/lv_group.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_core/lv_indev.o: ../Core/Src/generated/lvgl/src/lv_core/lv_indev.c Core/Src/generated/lvgl/src/lv_core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_core/lv_indev.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_core/lv_obj.o: ../Core/Src/generated/lvgl/src/lv_core/lv_obj.c Core/Src/generated/lvgl/src/lv_core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_core/lv_obj.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_core/lv_refr.o: ../Core/Src/generated/lvgl/src/lv_core/lv_refr.c Core/Src/generated/lvgl/src/lv_core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_core/lv_refr.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_core/lv_style.o: ../Core/Src/generated/lvgl/src/lv_core/lv_style.c Core/Src/generated/lvgl/src/lv_core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_core/lv_style.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

