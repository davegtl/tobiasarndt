#ifdef __has_include
#if __has_include("lvgl.h")
#ifndef LV_LVGL_H_INCLUDE_SIMPLE
#define LV_LVGL_H_INCLUDE_SIMPLE
#endif
#endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_KEYBOARD_PICTOGRAM_LARGE
#define LV_ATTRIBUTE_IMG_KEYBOARD_PICTOGRAM_LARGE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_KEYBOARD_PICTOGRAM_LARGE
    uint8_t keyboard_pictogram_large_map[] = {
#if CONFIG_KUNIBOARD_DISPLAY_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

#if CONFIG_KUNIBOARD_CUSTOM_DISPLAY_ROTATE_CLOCKWISE
        0xe0, 0x00, 0x07, 0xf0, 0xef, 0xff, 0xf7, 0xf0, 0xe8, 0x42, 0x17, 0xf0, 0xe8, 0x42, 0x10,
        0x70, 0xe8, 0x42, 0x1f, 0x70, 0xe8, 0x42, 0x1f, 0x70, 0xef, 0xff, 0xff, 0x70, 0xef, 0x08,
        0x43, 0x70, 0xef, 0x08, 0x43, 0x70, 0xef, 0x08, 0x43, 0x70, 0xef, 0x08, 0x43, 0x10, 0xef,
        0xff, 0xff, 0xd0, 0xef, 0xe1, 0x08, 0x50, 0xef, 0xe1, 0x08, 0x50, 0xef, 0xe1, 0x08, 0x50,
        0xcf, 0xe1, 0x08, 0x50, 0xdf, 0xff, 0xff, 0xd0, 0xd0, 0x84, 0x21, 0x10, 0xd0, 0x84, 0x21,
        0x70, 0xd0, 0x84, 0x21, 0x70, 0x90, 0x84, 0x21, 0x70, 0xbf, 0xff, 0xff, 0x70, 0xa1, 0x84,
        0x21, 0x70, 0xa1, 0x84, 0x21, 0x70, 0xa1, 0x84, 0x21, 0x70, 0x21, 0x84, 0x21, 0x70, 0x7f,
        0xff, 0xff, 0x70, 0x43, 0xff, 0xff, 0x70, 0x43, 0xff, 0xff, 0x70, 0x43, 0xff, 0xff, 0x70,
        0x43, 0xff, 0xff, 0x70, 0x7f, 0xff, 0xff, 0x70, 0x00, 0x00, 0x00, 0x70, 0xff, 0xff, 0xff,
        0xf0, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x70, 0x7f, 0xff, 0xff, 0x70, 0x43, 0xff,
        0xff, 0x70, 0x43, 0xff, 0xff, 0x70, 0x43, 0xff, 0xff, 0x70, 0x43, 0xff, 0xff, 0x70, 0x7f,
        0xff, 0xff, 0x70, 0x21, 0x84, 0x21, 0x70, 0xa1, 0x84, 0x21, 0x70, 0xa1, 0x84, 0x21, 0x70,
        0xa1, 0x84, 0x21, 0x70, 0xbf, 0xff, 0xff, 0x70, 0x90, 0x84, 0x21, 0x70, 0xd0, 0x84, 0x21,
        0x70, 0xd0, 0x84, 0x21, 0x70, 0xd0, 0x84, 0x21, 0x10, 0xdf, 0xff, 0xff, 0xd0, 0xcf, 0xe1,
        0x08, 0x50, 0xef, 0xe1, 0x08, 0x50, 0xef, 0xe1, 0x08, 0x50, 0xef, 0xe1, 0x08, 0x50, 0xef,
        0xff, 0xff, 0xd0, 0xef, 0x08, 0x43, 0x10, 0xef, 0x08, 0x43, 0x70, 0xef, 0x08, 0x43, 0x70,
        0xef, 0x08, 0x43, 0x70, 0xef, 0xff, 0xff, 0x70, 0xe8, 0x42, 0x1f, 0x70, 0xe8, 0x42, 0x1f,
        0x70, 0xe8, 0x42, 0x10, 0x70, 0xe8, 0x42, 0x17, 0xf0, 0xef, 0xff, 0xf7, 0xf0, 0xe0, 0x00,
        0x07, 0xf0,
#else
        0xfe, 0x00, 0x00, 0x70, 0xfe, 0xff, 0xff, 0x70, 0xfe, 0x84, 0x21, 0x70, 0xe0, 0x84, 0x21,
        0x70, 0xef, 0x84, 0x21, 0x70, 0xef, 0x84, 0x21, 0x70, 0xef, 0xff, 0xff, 0x70, 0xec, 0x21,
        0x0f, 0x70, 0xec, 0x21, 0x0f, 0x70, 0xec, 0x21, 0x0f, 0x70, 0x8c, 0x21, 0x0f, 0x70, 0xbf,
        0xff, 0xff, 0x70, 0xa1, 0x08, 0x7f, 0x70, 0xa1, 0x08, 0x7f, 0x70, 0xa1, 0x08, 0x7f, 0x70,
        0xa1, 0x08, 0x7f, 0x30, 0xbf, 0xff, 0xff, 0xb0, 0x88, 0x42, 0x10, 0xb0, 0xe8, 0x42, 0x10,
        0xb0, 0xe8, 0x42, 0x10, 0xb0, 0xe8, 0x42, 0x10, 0x90, 0xef, 0xff, 0xff, 0xd0, 0xe8, 0x42,
        0x18, 0x50, 0xe8, 0x42, 0x18, 0x50, 0xe8, 0x42, 0x18, 0x50, 0xe8, 0x42, 0x18, 0x40, 0xef,
        0xff, 0xff, 0xe0, 0xef, 0xff, 0xfc, 0x20, 0xef, 0xff, 0xfc, 0x20, 0xef, 0xff, 0xfc, 0x20,
        0xef, 0xff, 0xfc, 0x20, 0xef, 0xff, 0xff, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff,
        0xf0, 0xff, 0xff, 0xff, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0xef, 0xff, 0xff, 0xe0, 0xef, 0xff,
        0xfc, 0x20, 0xef, 0xff, 0xfc, 0x20, 0xef, 0xff, 0xfc, 0x20, 0xef, 0xff, 0xfc, 0x20, 0xef,
        0xff, 0xff, 0xe0, 0xe8, 0x42, 0x18, 0x40, 0xe8, 0x42, 0x18, 0x50, 0xe8, 0x42, 0x18, 0x50,
        0xe8, 0x42, 0x18, 0x50, 0xef, 0xff, 0xff, 0xd0, 0xe8, 0x42, 0x10, 0x90, 0xe8, 0x42, 0x10,
        0xb0, 0xe8, 0x42, 0x10, 0xb0, 0x88, 0x42, 0x10, 0xb0, 0xbf, 0xff, 0xff, 0xb0, 0xa1, 0x08,
        0x7f, 0x30, 0xa1, 0x08, 0x7f, 0x70, 0xa1, 0x08, 0x7f, 0x70, 0xa1, 0x08, 0x7f, 0x70, 0xbf,
        0xff, 0xff, 0x70, 0x8c, 0x21, 0x0f, 0x70, 0xec, 0x21, 0x0f, 0x70, 0xec, 0x21, 0x0f, 0x70,
        0xec, 0x21, 0x0f, 0x70, 0xef, 0xff, 0xff, 0x70, 0xef, 0x84, 0x21, 0x70, 0xef, 0x84, 0x21,
        0x70, 0xe0, 0x84, 0x21, 0x70, 0xfe, 0x84, 0x21, 0x70, 0xfe, 0xff, 0xff, 0x70, 0xfe, 0x00,
        0x00, 0x70,
#endif
};

const lv_img_dsc_t keyboard_pictogram_large = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 28,
    .header.h = 68,
    .data_size = 280,
    .data = keyboard_pictogram_large_map,
};

#ifndef LV_ATTRIBUTE_IMG_NOT_CONNECTED_PICTOGRAM_LARGE
#define LV_ATTRIBUTE_IMG_NOT_CONNECTED_PICTOGRAM_LARGE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_NOT_CONNECTED_PICTOGRAM_LARGE
    uint8_t not_connected_pictogram_large_map[] = {
#if CONFIG_KUNIBOARD_DISPLAY_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

#if CONFIG_KUNIBOARD_CUSTOM_DISPLAY_ROTATE_CLOCKWISE
        0xc0, 0x00, 0x00, 0x38, 0xff, 0xff, 0xff, 0xb8, 0x31, 0xff, 0xff, 0xe0, 0x19, 0xff, 0xff,
        0xc0, 0x8d, 0xff, 0xff, 0x88, 0xc7, 0xff, 0xff, 0x18, 0xe3, 0xff, 0xfe, 0x38, 0xb1, 0xc2,
        0x1c, 0x78, 0xd8, 0xc2, 0x18, 0xb8, 0xdc, 0x62, 0x31, 0xb8, 0xd6, 0x32, 0x63, 0xb8, 0xdf,
        0x1f, 0xc7, 0xb8, 0xc9, 0x8f, 0x8c, 0xb8, 0xe8, 0xc7, 0x18, 0xb8, 0xe8, 0x62, 0x30, 0xb8,
        0xe8, 0x70, 0x70, 0x88, 0xef, 0xf8, 0xff, 0xe8, 0xe7, 0xf0, 0x64, 0x28, 0xf7, 0xe2, 0x34,
        0x28, 0xf7, 0xc7, 0x1c, 0x28, 0xf7, 0x8d, 0x8c, 0x28, 0xf7, 0x1f, 0xc7, 0xe8, 0xf6, 0x34,
        0x23, 0x88, 0xfc, 0x64, 0x31, 0xb8, 0xf8, 0xc4, 0x38, 0xb8, 0xf1, 0x84, 0x2c, 0x78, 0xe3,
        0xff, 0xfe, 0x38, 0xc6, 0x21, 0x0f, 0x18, 0x8c, 0x21, 0x0f, 0x88, 0x1c, 0x21, 0x08, 0xc0,
        0x34, 0x21, 0x0b, 0xe0, 0xf7, 0xff, 0xfb, 0xf8, 0xf0, 0x00, 0x03, 0xf8,
#else
        0xfe, 0x00, 0x00, 0x78, 0xfe, 0xff, 0xff, 0x78, 0x3e, 0x84, 0x21, 0x60, 0x18, 0x84, 0x21,
        0xc0, 0x8f, 0x84, 0x21, 0x88, 0xc7, 0x84, 0x23, 0x18, 0xe3, 0xff, 0xfe, 0x38, 0xf1, 0xa1,
        0x0c, 0x78, 0xe8, 0xe1, 0x18, 0xf8, 0xec, 0x61, 0x31, 0xf8, 0x8e, 0x21, 0x63, 0x78, 0xbf,
        0x1f, 0xc7, 0x78, 0xa1, 0x8d, 0x8f, 0x78, 0xa1, 0xc7, 0x1f, 0x78, 0xa1, 0x62, 0x3f, 0x78,
        0xa1, 0x30, 0x7f, 0x38, 0xbf, 0xf8, 0xff, 0xb8, 0x88, 0x70, 0x70, 0xb8, 0xe8, 0x62, 0x30,
        0xb8, 0xe8, 0xc7, 0x18, 0xb8, 0xe9, 0x8f, 0x8c, 0x98, 0xef, 0x1f, 0xc7, 0xd8, 0xee, 0x32,
        0x63, 0x58, 0xec, 0x62, 0x31, 0xd8, 0xe8, 0xc2, 0x18, 0xd8, 0xf1, 0xc2, 0x1c, 0x68, 0xe3,
        0xff, 0xfe, 0x38, 0xc7, 0xff, 0xff, 0x18, 0x8f, 0xff, 0xfd, 0x88, 0x1f, 0xff, 0xfc, 0xc0,
        0x3f, 0xff, 0xfc, 0x60, 0xef, 0xff, 0xff, 0xf8, 0xe0, 0x00, 0x00, 0x18,
#endif
};

const lv_img_dsc_t not_connected_pictogram_large = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 29,
    .header.h = 33,
    .data_size = 140,
    .data = not_connected_pictogram_large_map,
};

#ifndef LV_ATTRIBUTE_IMG_NOT_CONNECTED_PICTOGRAM_LARGE_LEFT
#define LV_ATTRIBUTE_IMG_NOT_CONNECTED_PICTOGRAM_LARGE_LEFT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST
    LV_ATTRIBUTE_IMG_NOT_CONNECTED_PICTOGRAM_LARGE_LEFT uint8_t
        not_connected_pictogram_large_left_map[] = {
#if CONFIG_KUNIBOARD_DISPLAY_INVERTED
            0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
            0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
            0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
            0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

#if CONFIG_KUNIBOARD_CUSTOM_DISPLAY_ROTATE_CLOCKWISE
            0xf0, 0x00, 0x03, 0xf8, 0xf7, 0xff, 0xfb, 0xf8, 0x34, 0x21, 0x0b, 0xe0, 0x1c, 0x21,
            0x08, 0xc0, 0x8c, 0x21, 0x0f, 0x88, 0xc6, 0x21, 0x0f, 0x18, 0xe3, 0xff, 0xfe, 0x38,
            0xf1, 0x84, 0x2c, 0x78, 0xf8, 0xc4, 0x38, 0xb8, 0xfc, 0x64, 0x31, 0xb8, 0xf6, 0x34,
            0x23, 0x88, 0xf7, 0x1f, 0xc7, 0xe8, 0xf7, 0x8d, 0x8c, 0x28, 0xf7, 0xc7, 0x1c, 0x28,
            0xf7, 0xe2, 0x34, 0x28, 0xe7, 0xf0, 0x64, 0x28, 0xef, 0xf8, 0xff, 0xe8, 0xe8, 0x70,
            0x70, 0x88, 0xe8, 0x62, 0x30, 0xb8, 0xe8, 0xc7, 0x18, 0xb8, 0xc9, 0x8f, 0x8c, 0xb8,
            0xdf, 0x1f, 0xc7, 0xb8, 0xd6, 0x32, 0x63, 0xb8, 0xdc, 0x62, 0x31, 0xb8, 0xd8, 0xc2,
            0x18, 0xb8, 0xb1, 0xc2, 0x1c, 0x78, 0xe3, 0xff, 0xfe, 0x38, 0xc7, 0xff, 0xff, 0x18,
            0x8d, 0xff, 0xff, 0x88, 0x19, 0xff, 0xff, 0xc0, 0x31, 0xff, 0xff, 0xe0, 0xff, 0xff,
            0xff, 0xb8, 0xc0, 0x00, 0x00, 0x38,
#else
            0xe0, 0x00, 0x00, 0x18, 0xef, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xfc, 0x60, 0x1f, 0xff,
            0xfc, 0xc0, 0x8f, 0xff, 0xfd, 0x88, 0xc7, 0xff, 0xff, 0x18, 0xe3, 0xff, 0xfe, 0x38,
            0xf1, 0xc2, 0x1c, 0x68, 0xe8, 0xc2, 0x18, 0xd8, 0xec, 0x62, 0x31, 0xd8, 0xee, 0x32,
            0x63, 0x58, 0xef, 0x1f, 0xc7, 0xd8, 0xe9, 0x8f, 0x8c, 0x98, 0xe8, 0xc7, 0x18, 0xb8,
            0xe8, 0x62, 0x30, 0xb8, 0x88, 0x70, 0x70, 0xb8, 0xbf, 0xf8, 0xff, 0xb8, 0xa1, 0x30,
            0x7f, 0x38, 0xa1, 0x62, 0x3f, 0x78, 0xa1, 0xc7, 0x1f, 0x78, 0xa1, 0x8d, 0x8f, 0x78,
            0xbf, 0x1f, 0xc7, 0x78, 0x8e, 0x21, 0x63, 0x78, 0xec, 0x61, 0x31, 0xf8, 0xe8, 0xe1,
            0x18, 0xf8, 0xf1, 0xa1, 0x0c, 0x78, 0xe3, 0xff, 0xfe, 0x38, 0xc7, 0x84, 0x23, 0x18,
            0x8f, 0x84, 0x21, 0x88, 0x18, 0x84, 0x21, 0xc0, 0x3e, 0x84, 0x21, 0x60, 0xfe, 0xff,
            0xff, 0x78, 0xfe, 0x00, 0x00, 0x78,
#endif
};

const lv_img_dsc_t not_connected_pictogram_large_left = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 29,
    .header.h = 33,
    .data_size = 140,
    .data = not_connected_pictogram_large_left_map,
};