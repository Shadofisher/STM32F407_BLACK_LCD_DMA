/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"
#include "guider_fonts.h"

typedef struct
{
	lv_obj_t *screen;
	lv_obj_t *screen_calendar_1;
	lv_obj_t *screen_led_1;
	lv_obj_t *screen_bar_1;
	lv_obj_t *screen_btn_1;
	lv_obj_t *screen_btn_1_label;
}lv_ui;

void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_screen(lv_ui *ui);
static lv_calendar_date_t today;
static lv_calendar_date_t highlihted_days[1];

#ifdef __cplusplus
}
#endif
#endif
