/*
 * touch.h
 *
 *  Created on: Jun 10, 2021
 *      Author: graeme
 */

#ifndef INC_TOUCH_H_
#define INC_TOUCH_H_

#include <stdbool.h>

/*** Redefine if necessary ***/
extern SPI_HandleTypeDef hspi2;

// Warning! Use SPI bus with < 2.5 Mbit speed, better ~650 Kbit to be save.
#define XPT2046_SPI_PORT hspi2
extern SPI_HandleTypeDef XPT2046_SPI_PORT;

//#define XPT2046_IRQ_Pin       T_IRQ_Pin
//#define XPT2046_IRQ_GPIO_Port T_IRQ_GPIO_Port
//#define XPT2046_CS_Pin        T_CS_Pin
//#define XPT2046_CS_GPIO_Port  T_CS_GPIO_Port

// change depending on screen orientation
#define XPT2046_SCALE_X 240
#define XPT2046_SCALE_Y 320

// to calibrate uncomment UART_Printf line in ili9341_touch.c
#define XPT2046_MIN_RAW_X 3400
#define XPT2046_MAX_RAW_X 29000
#define XPT2046_MIN_RAW_Y 3300
#define XPT2046_MAX_RAW_Y 30000

// call before initializing any SPI devices
bool XPT2046_TouchPressed();
bool XPT2046_TouchGetCoordinates(lv_indev_drv_t * drv, lv_indev_data_t *data);
bool XPT2046_CAL_TouchGetCoordinates(uint16_t *x, uint16_t *y);

#endif /* INC_TOUCH_H_ */
