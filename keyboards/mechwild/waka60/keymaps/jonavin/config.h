/*
Copyright 2021 Kyle McCreery
Copyright 2022 Jonavin Eng

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define AUDIO_PIN B5
#define AUDIO_PWM_DRIVER PWMD1
#define AUDIO_PWM_CHANNEL 1
#define AUDIO_STATE_TIMER GPTD4

#define TAPPING_TOGGLE 2
// TT set to two taps

/*  Handle GRAVESC combo keys */
#define GRAVE_ESC_ALT_OVERRIDE
    //Always send Escape if Alt is pressed
#define GRAVE_ESC_CTRL_OVERRIDE
    //Always send Escape if Control is pressed

#define TAPPING_TERM 180

#ifdef RGBLIGHT_ENABLE
    // Redefine number of LED
#   ifdef RGBLED_NUM
        #undef RGBLED_NUM
#   endif // RGBLED_NUM
#   define RGBLED_NUM 20

#   define RGBLIGHT_LAYERS
#   define RGBLIGHT_SLEEP
#endif // RGBLIGHT_ENABLE
