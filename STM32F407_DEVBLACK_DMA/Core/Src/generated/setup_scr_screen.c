/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"



void setup_scr_screen(lv_ui *ui){

	//Write codes screen
	ui->screen = lv_obj_create(NULL, NULL);

	//Write codes screen_btnm_1
	ui->screen_btnm_1 = lv_btnmatrix_create(ui->screen, NULL);
	static const uint8_t *screen_btnm_1_text_map[] = {
	"1","2","3","\n",
	"4","5","6","\n",
	"7","8","9","",
	};
	lv_btnmatrix_set_map(ui->screen_btnm_1, screen_btnm_1_text_map);

	//Write style LV_BTNMATRIX_PART_BG for screen_btnm_1
	static lv_style_t style_screen_btnm_1_bg;
	lv_style_init(&style_screen_btnm_1_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen_btnm_1_bg
	lv_style_set_radius(&style_screen_btnm_1_bg, LV_STATE_DEFAULT, 4);
	lv_style_set_bg_color(&style_screen_btnm_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_btnm_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_btnm_1_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_btnm_1_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_screen_btnm_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_screen_btnm_1_bg, LV_STATE_DEFAULT, 1);
	lv_style_set_pad_left(&style_screen_btnm_1_bg, LV_STATE_DEFAULT, 5);
	lv_style_set_pad_right(&style_screen_btnm_1_bg, LV_STATE_DEFAULT, 5);
	lv_style_set_pad_top(&style_screen_btnm_1_bg, LV_STATE_DEFAULT, 5);
	lv_style_set_pad_bottom(&style_screen_btnm_1_bg, LV_STATE_DEFAULT, 5);
	lv_style_set_pad_inner(&style_screen_btnm_1_bg, LV_STATE_DEFAULT, 2);
	lv_obj_add_style(ui->screen_btnm_1, LV_BTNMATRIX_PART_BG, &style_screen_btnm_1_bg);

	//Write style LV_BTNMATRIX_PART_BTN for screen_btnm_1
	static lv_style_t style_screen_btnm_1_btn;
	lv_style_init(&style_screen_btnm_1_btn);

	//Write style state: LV_STATE_DEFAULT for style_screen_btnm_1_btn
	lv_style_set_radius(&style_screen_btnm_1_btn, LV_STATE_DEFAULT, 4);
	lv_style_set_bg_color(&style_screen_btnm_1_btn, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_btnm_1_btn, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_btnm_1_btn, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_btnm_1_btn, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_screen_btnm_1_btn, LV_STATE_DEFAULT, lv_color_make(0xd6, 0xdd, 0xe3));
	lv_style_set_border_width(&style_screen_btnm_1_btn, LV_STATE_DEFAULT, 1);
	lv_style_set_text_color(&style_screen_btnm_1_btn, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_add_style(ui->screen_btnm_1, LV_BTNMATRIX_PART_BTN, &style_screen_btnm_1_btn);
	lv_obj_set_pos(ui->screen_btnm_1, 34, 197);
	lv_obj_set_size(ui->screen_btnm_1, 180, 100);

	//Write codes screen_cb_1
	ui->screen_cb_1 = lv_checkbox_create(ui->screen, NULL);
	lv_checkbox_set_text(ui->screen_cb_1, "checkbox");

	//Write style LV_CHECKBOX_PART_BG for screen_cb_1
	static lv_style_t style_screen_cb_1_bg;
	lv_style_init(&style_screen_cb_1_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen_cb_1_bg
	lv_style_set_radius(&style_screen_cb_1_bg, LV_STATE_DEFAULT, 6);
	lv_style_set_bg_color(&style_screen_cb_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_cb_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_cb_1_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_cb_1_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_screen_cb_1_bg, LV_STATE_DEFAULT, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_screen_cb_1_bg, LV_STATE_DEFAULT, &lv_font_simsun_20);
	lv_style_set_text_letter_space(&style_screen_cb_1_bg, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_cb_1, LV_CHECKBOX_PART_BG, &style_screen_cb_1_bg);

	//Write style LV_CHECKBOX_PART_BULLET for screen_cb_1
	static lv_style_t style_screen_cb_1_bullet;
	lv_style_init(&style_screen_cb_1_bullet);

	//Write style state: LV_STATE_DEFAULT for style_screen_cb_1_bullet
	lv_style_set_radius(&style_screen_cb_1_bullet, LV_STATE_DEFAULT, 6);
	lv_style_set_bg_color(&style_screen_cb_1_bullet, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_cb_1_bullet, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_cb_1_bullet, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_cb_1_bullet, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_screen_cb_1_bullet, LV_STATE_DEFAULT, lv_color_make(0x02, 0xa2, 0xb1));
	lv_style_set_border_width(&style_screen_cb_1_bullet, LV_STATE_DEFAULT, 1);
	lv_obj_add_style(ui->screen_cb_1, LV_CHECKBOX_PART_BULLET, &style_screen_cb_1_bullet);
	lv_obj_set_pos(ui->screen_cb_1, 39, 155);

	//Write codes screen_msgbox_1
	ui->screen_msgbox_1 = lv_msgbox_create(ui->screen, NULL);

	//Write style LV_MSGBOX_PART_BG for screen_msgbox_1
	static lv_style_t style_screen_msgbox_1_bg;
	lv_style_init(&style_screen_msgbox_1_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen_msgbox_1_bg
	lv_style_set_radius(&style_screen_msgbox_1_bg, LV_STATE_DEFAULT, 4);
	lv_style_set_bg_color(&style_screen_msgbox_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_msgbox_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_msgbox_1_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_msgbox_1_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_screen_msgbox_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_screen_msgbox_1_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_screen_msgbox_1_bg, LV_STATE_DEFAULT, lv_color_make(0x4e, 0x4e, 0x4e));
	lv_style_set_text_font(&style_screen_msgbox_1_bg, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_screen_msgbox_1_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_text_line_space(&style_screen_msgbox_1_bg, LV_STATE_DEFAULT, 10);
	lv_obj_add_style(ui->screen_msgbox_1, LV_MSGBOX_PART_BG, &style_screen_msgbox_1_bg);

	//Write style LV_MSGBOX_PART_BTN_BG for screen_msgbox_1
	static lv_style_t style_screen_msgbox_1_btn_bg;
	lv_style_init(&style_screen_msgbox_1_btn_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen_msgbox_1_btn_bg
	lv_style_set_radius(&style_screen_msgbox_1_btn_bg, LV_STATE_DEFAULT, 4);
	lv_style_set_bg_color(&style_screen_msgbox_1_btn_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_msgbox_1_btn_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_msgbox_1_btn_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_msgbox_1_btn_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_screen_msgbox_1_btn_bg, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_screen_msgbox_1_btn_bg, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_msgbox_1, LV_MSGBOX_PART_BTN_BG, &style_screen_msgbox_1_btn_bg);

	//Write style LV_MSGBOX_PART_BTN for screen_msgbox_1
	static lv_style_t style_screen_msgbox_1_btn;
	lv_style_init(&style_screen_msgbox_1_btn);

	//Write style state: LV_STATE_DEFAULT for style_screen_msgbox_1_btn
	lv_style_set_radius(&style_screen_msgbox_1_btn, LV_STATE_DEFAULT, 20);
	lv_style_set_bg_color(&style_screen_msgbox_1_btn, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_msgbox_1_btn, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_msgbox_1_btn, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_msgbox_1_btn, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_screen_msgbox_1_btn, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_screen_msgbox_1_btn, LV_STATE_DEFAULT, 1);
	lv_style_set_text_color(&style_screen_msgbox_1_btn, LV_STATE_DEFAULT, lv_color_make(0x4e, 0x4e, 0x4e));
	lv_style_set_text_font(&style_screen_msgbox_1_btn, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_obj_add_style(ui->screen_msgbox_1, LV_MSGBOX_PART_BTN, &style_screen_msgbox_1_btn);
	lv_obj_set_pos(ui->screen_msgbox_1, 38, 16);
	lv_obj_set_size(ui->screen_msgbox_1, 180, 0);
	lv_msgbox_set_text(ui->screen_msgbox_1,"content");
	static const char * screen_msgbox_1_btns[] = {"Apply","Close",""};
	lv_msgbox_add_btns(ui->screen_msgbox_1, screen_msgbox_1_btns);
	lv_obj_set_width(ui->screen_msgbox_1,180);
	lv_obj_add_style(ui->screen_msgbox_1, LV_MSGBOX_PART_BTN_BG, &style_screen_msgbox_1_btn_bg);
	lv_obj_add_style(ui->screen_msgbox_1, LV_MSGBOX_PART_BTN, &style_screen_msgbox_1_btn);
}
