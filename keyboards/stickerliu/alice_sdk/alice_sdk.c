/* Copyright 2019 Ryota Goto
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
#include "alice_sdk.h"

void matrix_init_kb(void) {
    // Indicator pins
    // C6 - Caps Lock
    // B6 - Num Lock
    // B4 - Scroll Lock
    // Sinking setup - 5V -> LED/Resistor -> Pin

    setPinOutput(C6);
    setPinOutput(B6);
    setPinOutput(B4);


    matrix_init_user();
}

void led_set_kb(uint8_t usb_led) {
    // Toggle indicator LEDs
    // Since they are a sinking setup, write HIGH to DISABLE, LOW to ENABLE

    if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK))
    {
        writePinLow(C6);
        writePinLow(B6);
        writePinLow(B4);
    }
    else
    {
        writePinHigh(C6);
        writePinHigh(B6);
        writePinHigh(B4);
    }

    // if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK))
    // {
    //      writePinHigh(B6);
    // }
    // else
    // {
    //     writePinLow(B6);
    // }

    // if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK))
    // {
    //     writePinLow(B4);
    // }
    // else
    // {
    //     writePinHigh(B4);
    // }

     led_set_user(usb_led);
}
