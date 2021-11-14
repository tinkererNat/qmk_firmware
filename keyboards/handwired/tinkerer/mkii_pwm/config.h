/* Copyright 2021 QMK
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x342B
#define PRODUCT_ID      0x2D2B
#define DEVICE_VER      0x0001
#define MANUFACTURER    Tinkerer
#define PRODUCT         MKii

#define MATRIX_ROW_PINS { B10, A0, B1, B0, C15, C14 }
#define MATRIX_COL_PINS { B12, B13, B14, B15, A8, A10, A15, B3, B4, B5, B6, B7, B8, A2, A3, C13 }
#define UNUSED_PINS { C13 }


// WS2812 RGB LED strip input and number of LEDs
#define RGB_DI_PIN          A1
#define WS2812_PWM_DRIVER   PWMD2  // default: PWMD2
#define WS2812_PWM_CHANNEL  2      // default: 2
#define WS2812_PWM_PAL_MODE 1      // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 2
#define WS2812_EXTERNAL_PULLUP
//#define WS2812_PWM_COMPLEMENTARY_OUTPUT // Define for a complementary timer output (TIMx_CHyN); omit for a normal timer output (TIMx_CHy).
#define WS2812_DMA_STREAM   STM32_DMA1_STREAM7  // DMA Stream for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_DMA_CHANNEL  3                   // DMA Channel for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.

#define RGBLED_NUM          47
#define RGBLIGHT_LIMIT_VAL 255
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL


/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 16

#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* spi config for eeprom and pmw3360 sensor */
#define SPI_DRIVER                           SPID1
#define SPI_SCK_PIN                          A5
#define SPI_SCK_PAL_MODE                     5
#define SPI_MOSI_PIN                         A7
#define SPI_MOSI_PAL_MODE                    5
#define SPI_MISO_PIN                         A6
#define SPI_MISO_PAL_MODE                    5

/* eeprom config */
#define EXTERNAL_EEPROM_SPI_SLAVE_SELECT_PIN A4
#define EXTERNAL_EEPROM_SPI_CLOCK_DIVISOR    8
// #define EXTERNAL_EEPROM_BYTE_COUNT           8196
// #define EXTERNAL_EEPROM_PAGE_SIZE            32
// #define EXTERNAL_EEPROM_ADDRESS_SIZE         2
// #define DEBUG_EEPROM_OUTPUT

