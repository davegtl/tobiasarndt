/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/display.h>
#include <zmk/event_manager.h>
#include <zmk/endpoints.h>
#include <zmk/keymap.h>
#include <zmk/events/split_peripheral_status_changed.h>
#include "connection_status.h"
#include "util.h"

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

struct connection_status_state {
    bool connected;
};

LV_IMG_DECLARE(keyboard_pictogram_large);
LV_IMG_DECLARE(not_connected_pictogram_large);
LV_IMG_DECLARE(not_connected_pictogram_large_left);

static void set_connection_img(struct zmk_widget_connection_status *widget,
                               struct connection_status_state state) {
    if (state.connected) {
        lv_obj_add_flag(widget->not_connected, LV_OBJ_FLAG_HIDDEN);
    } else {
        lv_obj_clear_flag(widget->not_connected, LV_OBJ_FLAG_HIDDEN);
    }
}

static void connection_status_update_cb(struct connection_status_state state) {
    struct zmk_widget_connection_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_connection_img(widget, state); }
}

static struct connection_status_state connection_status_get_state(const zmk_event_t *eh) {
    struct zmk_split_peripheral_status_changed *ev = as_zmk_split_peripheral_status_changed(eh);
    return (struct connection_status_state){.connected = ev->connected};
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_connection_status, struct connection_status_state,
                            connection_status_update_cb, connection_status_get_state)

ZMK_SUBSCRIPTION(widget_connection_status, zmk_split_peripheral_status_changed);

int zmk_widget_connection_status_init(struct zmk_widget_connection_status *widget,
                                      lv_obj_t *parent) {
    sys_slist_append(&widgets, &widget->node);
    widget->obj = lv_obj_create(parent);
    lv_obj_set_size(widget->obj, 29, 68);
    widget->art = lv_img_create(widget->obj);
    lv_img_set_src(widget->art, &keyboard_pictogram_large);
    lv_obj_align(widget->art, LV_ALIGN_TOP_LEFT, 0, 0);
    widget->not_connected = lv_img_create(widget->obj);
#if CONFIG_RIGHT_SIDE_CENTRAL
    lv_img_set_src(widget->not_connected, &not_connected_pictogram_large_left);
#if CONFIG_KUNIBOARD_CUSTOM_DISPLAY_ROTATE_CLOCKWISE
    lv_obj_align(widget->not_connected, LV_ALIGN_TOP_LEFT, 0, 0);
#else
    lv_obj_align(widget->not_connected, LV_ALIGN_BOTTOM_LEFT, 0, 0);
#endif
#else
    lv_img_set_src(widget->not_connected, &not_connected_pictogram_large);
#if CONFIG_KUNIBOARD_CUSTOM_DISPLAY_ROTATE_CLOCKWISE
    lv_obj_align(widget->not_connected, LV_ALIGN_BOTTOM_LEFT, 0, 0);
#else  
    lv_obj_align(widget->not_connected, LV_ALIGN_TOP_LEFT, 0, 0);
#endif
#endif
    lv_obj_add_flag(widget->not_connected, LV_OBJ_FLAG_HIDDEN);

    widget_connection_status_init();
    return 0;
}

lv_obj_t *zmk_widget_connection_status_obj(struct zmk_widget_connection_status *widget) {
    return widget->obj;
}