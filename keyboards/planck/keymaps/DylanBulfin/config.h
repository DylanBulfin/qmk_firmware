/* Copyright 2015-2021 Jack Humbert
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
#define PERMISSIVE_HOLD // Allows for quicker hold activation

#undef IGNORE_MOD_TAP_INTERRUPT // This is the default behavior, disabling it
                                // for now

#define TAPPING_TERM 200 // This is the default value

#define RETRO_TAPPING // If no additional key is pressed
                      // the first key is sent

#define QUICK_TAP_TERM_PER_KEY // Allows me to enable autorepeat on a per-key
                               // basis

#define ACHORDION_STREAK // Disables tap-hold keys when typing quickly

#define DUMMY_MOD_NEUTRALIZER_KEYCODE                                          \
  KC_RIGHT_CTRL // Send a dummy keycode to neutralize the modifier if no
                   // other key is pressed

#ifdef MODS_TO_NEUTRALIZE
#undef MODS_TO_NEUTRALIZE
#endif
