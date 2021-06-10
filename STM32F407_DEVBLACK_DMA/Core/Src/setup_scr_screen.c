/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
//#include "custom.h"


void setup_scr_screen(lv_ui *ui){

	//Write codes screen
	ui->screen = lv_obj_create(NULL, NULL);

	//Write codes screen_calendar_1
	ui->screen_calendar_1 = lv_calendar_create(ui->screen, NULL);

	//Write style LV_CALENDAR_PART_BG for screen_calendar_1
	static lv_style_t style_screen_calendar_1_bg;
	lv_style_init(&style_screen_calendar_1_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen_calendar_1_bg
	lv_style_set_bg_color(&style_screen_calendar_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_calendar_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_calendar_1_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_calendar_1_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_screen_calendar_1_bg, LV_STATE_DEFAULT, lv_color_make(0xc0, 0xc0, 0xc0));
	lv_style_set_border_width(&style_screen_calendar_1_bg, LV_STATE_DEFAULT, 1);
	lv_obj_add_style(ui->screen_calendar_1, LV_CALENDAR_PART_BG, &style_screen_calendar_1_bg);

	//Write style LV_CALENDAR_PART_HEADER for screen_calendar_1
	static lv_style_t style_screen_calendar_1_header;
	lv_style_init(&style_screen_calendar_1_header);

	//Write style state: LV_STATE_DEFAULT for style_screen_calendar_1_header
	lv_style_set_text_color(&style_screen_calendar_1_header, LV_STATE_DEFAULT, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_screen_calendar_1_header, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_screen_calendar_1_header, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_calendar_1, LV_CALENDAR_PART_HEADER, &style_screen_calendar_1_header);

	//Write style LV_CALENDAR_PART_DAY_NAMES for screen_calendar_1
	static lv_style_t style_screen_calendar_1_day_names;
	lv_style_init(&style_screen_calendar_1_day_names);

	//Write style state: LV_STATE_DEFAULT for style_screen_calendar_1_day_names
	lv_style_set_text_color(&style_screen_calendar_1_day_names, LV_STATE_DEFAULT, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_screen_calendar_1_day_names, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_obj_add_style(ui->screen_calendar_1, LV_CALENDAR_PART_DAY_NAMES, &style_screen_calendar_1_day_names);

	//Write style LV_CALENDAR_PART_DATE for screen_calendar_1
	static lv_style_t style_screen_calendar_1_date;
	lv_style_init(&style_screen_calendar_1_date);

	//Write style state: LV_STATE_DEFAULT for style_screen_calendar_1_date
	lv_style_set_text_color(&style_screen_calendar_1_date, LV_STATE_DEFAULT, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_screen_calendar_1_date, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_obj_add_style(ui->screen_calendar_1, LV_CALENDAR_PART_DATE, &style_screen_calendar_1_date);
	lv_obj_set_pos(ui->screen_calendar_1, 20, 9);
	lv_obj_set_size(ui->screen_calendar_1, 200, 180);
	today.year = 2020;
	today.month = 5;
	today.day = 7;
	lv_calendar_set_today_date(ui->screen_calendar_1, &today);
	lv_calendar_set_showed_date(ui->screen_calendar_1, &today);
	highlihted_days[0].year = 2020;
	highlihted_days[0].month = 5;
	highlihted_days[0].day = 14;
	lv_calendar_set_highlighted_dates(ui->screen_calendar_1, highlihted_days, 1);

	//Write codes screen_led_1
	ui->screen_led_1 = lv_led_create(ui->screen, NULL);

	//Write style LV_LED_PART_MAIN for screen_led_1
	static lv_style_t style_screen_led_1_main;
	lv_style_init(&style_screen_led_1_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_led_1_main
	lv_style_set_radius(&style_screen_led_1_main, LV_STATE_DEFAULT, 20);
	lv_style_set_bg_color(&style_screen_led_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_color(&style_screen_led_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_dir(&style_screen_led_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_led_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_shadow_color(&style_screen_led_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_shadow_width(&style_screen_led_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_color(&style_screen_led_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_screen_led_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_screen_led_1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_led_1, LV_LED_PART_MAIN, &style_screen_led_1_main);
	lv_obj_set_pos(ui->screen_led_1, 13, 243);
	lv_obj_set_size(ui->screen_led_1, 40, 40);
	lv_led_set_bright(ui->screen_led_1, 200);

	//Write codes screen_bar_1
	ui->screen_bar_1 = lv_bar_create(ui->screen, NULL);

	//Write style LV_BAR_PART_BG for screen_bar_1
	static lv_style_t style_screen_bar_1_bg;
	lv_style_init(&style_screen_bar_1_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen_bar_1_bg
	lv_style_set_radius(&style_screen_bar_1_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_screen_bar_1_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_screen_bar_1_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_screen_bar_1_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_bar_1_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_screen_bar_1_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen_bar_1_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen_bar_1_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen_bar_1_bg, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_bar_1, LV_BAR_PART_BG, &style_screen_bar_1_bg);

	//Write style LV_BAR_PART_INDIC for screen_bar_1
	static lv_style_t style_screen_bar_1_indic;
	lv_style_init(&style_screen_bar_1_indic);

	//Write style state: LV_STATE_DEFAULT for style_screen_bar_1_indic
	lv_style_set_radius(&style_screen_bar_1_indic, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_screen_bar_1_indic, LV_STATE_DEFAULT, lv_color_make(0x48, 0x01, 0xb2));
	lv_style_set_bg_grad_color(&style_screen_bar_1_indic, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_bg_grad_dir(&style_screen_bar_1_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_bar_1_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_bar_1, LV_BAR_PART_INDIC, &style_screen_bar_1_indic);
	lv_obj_set_pos(ui->screen_bar_1, 31, 204);
	lv_obj_set_size(ui->screen_bar_1, 186, 19);
	lv_bar_set_anim_time(ui->screen_bar_1,1000);
	lv_bar_set_value(ui->screen_bar_1,50,LV_ANIM_OFF);
	lv_bar_set_range(ui->screen_bar_1,0,100);

	//Write codes screen_btn_1
	ui->screen_btn_1 = lv_btn_create(ui->screen, NULL);

	//Write style LV_BTN_PART_MAIN for screen_btn_1
	static lv_style_t style_screen_btn_1_main;
	lv_style_init(&style_screen_btn_1_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn_1_main
	lv_style_set_radius(&style_screen_btn_1_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_screen_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_btn_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_screen_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_screen_btn_1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_border_opa(&style_screen_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_screen_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_screen_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_btn_1, LV_BTN_PART_MAIN, &style_screen_btn_1_main);
	lv_obj_set_pos(ui->screen_btn_1, 65, 239);
	lv_obj_set_size(ui->screen_btn_1, 155, 50);
	ui->screen_btn_1_label = lv_label_create(ui->screen_btn_1, NULL);
	lv_label_set_text(ui->screen_btn_1_label, "Press ME!!!");
	lv_obj_set_style_local_text_color(ui->screen_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->screen_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_12);
}
