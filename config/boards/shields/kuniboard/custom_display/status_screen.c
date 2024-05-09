/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include "widgets/output_status.h"
#include "widgets/layer_status.h"
#include "widgets/sleep_status.h"
#include "widgets/connection_status.h"
#include "widgets/battery_status.h"
#include "status_screen.h"
#include <zmk/events/activity_state_changed.h>
#include <zmk/events/split_peripheral_status_changed.h>
#include <lvgl.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

static struct zmk_widget_output_status output_status_widget;

#if IS_ENABLED(CONFIG_ZMK_WIDGET_PERIPHERAL_STATUS)
static struct zmk_widget_peripheral_status peripheral_status_widget;
#endif

static struct zmk_widget_layer_status layer_status_widget;
static struct zmk_widget_connection_status connection_status_widget;
static struct zmk_widget_batteries_status batteries_status_widget;
static struct zmk_widget_sleep_status sleep_status_widget;

#if IS_ENABLED(CONFIG_ZMK_WIDGET_WPM_STATUS)
static struct zmk_widget_wpm_status wpm_status_widget;
#endif

lv_obj_t *zmk_display_status_screen() {
    lv_obj_t *screen;
    screen = lv_obj_create(NULL);

    zmk_widget_output_status_init(&output_status_widget, screen);
    lv_obj_align(zmk_widget_output_status_obj(&output_status_widget), LV_ALIGN_BOTTOM_LEFT, 0, 0);

    zmk_widget_layer_status_init(&layer_status_widget, screen);
    lv_obj_align(zmk_widget_layer_status_obj(&layer_status_widget), LV_ALIGN_BOTTOM_RIGHT, 0, 0);

    zmk_widget_connection_status_init(&connection_status_widget, screen);
    lv_obj_align(zmk_widget_connection_status_obj(&connection_status_widget), LV_ALIGN_BOTTOM_LEFT,
                 22, 0);

    zmk_widget_batteries_status_init(&batteries_status_widget, screen);
    lv_obj_align(zmk_widget_batteries_status_obj(&batteries_status_widget), LV_ALIGN_TOP_LEFT, 53,
                 0);

    zmk_widget_sleep_status_init(&sleep_status_widget, screen);
    lv_obj_align(zmk_widget_sleep_status_obj(&sleep_status_widget), LV_ALIGN_BOTTOM_LEFT, 0, 0);

    return screen;
}