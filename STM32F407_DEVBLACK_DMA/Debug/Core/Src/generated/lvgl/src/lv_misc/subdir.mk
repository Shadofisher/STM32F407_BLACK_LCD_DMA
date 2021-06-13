################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/generated/lvgl/src/lv_misc/lv_anim.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_area.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_async.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_bidi.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_color.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_debug.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_fs.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_gc.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_ll.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_log.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_math.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_mem.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_printf.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_task.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_templ.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_txt.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_txt_ap.c \
../Core/Src/generated/lvgl/src/lv_misc/lv_utils.c 

OBJS += \
./Core/Src/generated/lvgl/src/lv_misc/lv_anim.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_area.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_async.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_bidi.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_color.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_debug.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_fs.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_gc.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_ll.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_log.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_math.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_mem.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_printf.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_task.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_templ.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_txt.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_txt_ap.o \
./Core/Src/generated/lvgl/src/lv_misc/lv_utils.o 

C_DEPS += \
./Core/Src/generated/lvgl/src/lv_misc/lv_anim.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_area.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_async.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_bidi.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_color.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_debug.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_fs.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_gc.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_ll.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_log.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_math.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_mem.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_printf.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_task.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_templ.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_txt.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_txt_ap.d \
./Core/Src/generated/lvgl/src/lv_misc/lv_utils.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/generated/lvgl/src/lv_misc/lv_anim.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_anim.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_anim.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_area.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_area.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_area.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_async.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_async.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_async.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_bidi.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_bidi.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_bidi.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_color.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_color.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_color.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_debug.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_debug.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_debug.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_fs.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_fs.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_fs.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_gc.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_gc.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_gc.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_ll.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_ll.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_ll.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_log.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_log.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_log.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_math.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_math.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_math.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_mem.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_mem.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_mem.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_printf.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_printf.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_printf.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_task.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_task.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_task.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_templ.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_templ.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_templ.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_txt.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_txt.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_txt.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_txt_ap.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_txt_ap.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_txt_ap.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/generated/lvgl/src/lv_misc/lv_utils.o: ../Core/Src/generated/lvgl/src/lv_misc/lv_utils.c Core/Src/generated/lvgl/src/lv_misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src" -I"/home/graeme/test4/STM32F407_BLACK_LCD_DMA/STM32F407_DEVBLACK_DMA/Core/Src/generated/lvgl/src/lv_font" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/generated/lvgl/src/lv_misc/lv_utils.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

