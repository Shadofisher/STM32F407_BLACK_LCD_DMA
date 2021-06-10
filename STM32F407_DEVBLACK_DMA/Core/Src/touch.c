/*
 * touch.c
 *
 *  Created on: Jun 10, 2021
 *      Author: graeme
 */

#include <stdio.h>
#include <stdlib.h>
#include <lvgl.h>
#include "main.h"
#include "touch.h"

#define READ_X 0xD0
#define READ_Y 0x90

static void XPT2046_TouchSelect()
{
    HAL_GPIO_WritePin(XPT2046_CS_GPIO_Port, XPT2046_CS_Pin, GPIO_PIN_RESET);
}

static void XPT2046_TouchUnselect()
{
    HAL_GPIO_WritePin(XPT2046_CS_GPIO_Port, XPT2046_CS_Pin, GPIO_PIN_SET);
}

bool XPT2046_TouchPressed()
{
    return HAL_GPIO_ReadPin(XPT2046_IRQ_GPIO_Port, XPT2046_IRQ_Pin) == GPIO_PIN_RESET;
}

bool XPT2046_TouchGetCoordinates(lv_indev_drv_t * drv, lv_indev_data_t *data)
{
    static const uint8_t cmd_read_x[] = { READ_X };
    static const uint8_t cmd_read_y[] = { READ_Y };
    static const uint8_t zeroes_tx[] = { 0x00, 0x00 };
	static int16_t last_x = 0;
	static int16_t last_y = 0;
	static int16_t x,y;

    XPT2046_TouchSelect();

    uint32_t avg_x = 0;
    uint32_t avg_y = 0;
    uint8_t nsamples = 0;

    for(uint8_t i = 0; i < 16; i++)
    {
        if(!XPT2046_TouchPressed())
        {
    		data->point.x = last_x;
    		data->point.y = last_y;
    		data->state = LV_INDEV_STATE_REL;
        	break;
        }


        nsamples++;

        HAL_SPI_Transmit(&XPT2046_SPI_PORT, (uint8_t*)cmd_read_y, sizeof(cmd_read_y), HAL_MAX_DELAY);
        uint8_t y_raw[2];
        HAL_SPI_TransmitReceive(&XPT2046_SPI_PORT, (uint8_t*)zeroes_tx, y_raw, sizeof(y_raw), HAL_MAX_DELAY);

        HAL_SPI_Transmit(&XPT2046_SPI_PORT, (uint8_t*)cmd_read_x, sizeof(cmd_read_x), HAL_MAX_DELAY);
        uint8_t x_raw[2];
        HAL_SPI_TransmitReceive(&XPT2046_SPI_PORT, (uint8_t*)zeroes_tx, x_raw, sizeof(x_raw), HAL_MAX_DELAY);

        avg_x += (((uint16_t)x_raw[0]) << 8) | ((uint16_t)x_raw[1]);
        avg_y += (((uint16_t)y_raw[0]) << 8) | ((uint16_t)y_raw[1]);
    }

    XPT2046_TouchUnselect();

    if(nsamples < 16)
        return false;

    uint32_t raw_x = (avg_x / 16);
    if(raw_x < XPT2046_MIN_RAW_X) raw_x = XPT2046_MIN_RAW_X;
    if(raw_x > XPT2046_MAX_RAW_X) raw_x = XPT2046_MAX_RAW_X;

    uint32_t raw_y = (avg_y / 16);
    if(raw_y < XPT2046_MIN_RAW_Y) raw_y = XPT2046_MIN_RAW_Y;
    if(raw_y > XPT2046_MAX_RAW_Y) raw_y = XPT2046_MAX_RAW_Y;

    // Uncomment this line to calibrate touchscreen:
    //printf("raw_x = %d, raw_y = %d\r\n", (int) raw_x, (int) raw_y);

    x = 240-(raw_x - XPT2046_MIN_RAW_X) * XPT2046_SCALE_X / (XPT2046_MAX_RAW_X - XPT2046_MIN_RAW_X);
    y = (raw_y - XPT2046_MIN_RAW_Y) * XPT2046_SCALE_Y / (XPT2046_MAX_RAW_Y - XPT2046_MIN_RAW_Y);
	data->point.x = x;
	data->point.y = y;
	last_x = data->point.x;
	last_y = data->point.y;
	data->state = LV_INDEV_STATE_PR;


    return false;
}
