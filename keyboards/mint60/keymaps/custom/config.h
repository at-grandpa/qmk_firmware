/* Copyright 2018 Eucalyn
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

/* Use I2C or Serial, not both */
#define USE_SERIAL
// #define USE_I2C

#define MASTER_RIGHT

// 長押しと判定するまでの時間（ms）．デフォルトは200．
#undef TAPPING_TERM
#define TAPPING_TERM 200

// 他のキーを押さなければ長押し判定になるタイミングでも単押しにする
#define RETRO_TAPPING

// 単押し判定のタイミングでも他のキーを一緒に押したら長押し判定にする
#define PERMISSIVE_HOLD
