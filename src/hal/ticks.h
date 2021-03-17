/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: 2021 Rafael Silva <silvagracarafael@gmail.com>
 */

#pragma once

#include "util/types.h"

struct ticks_hal_t {
	void (*delay_ms)(u32 ticks);
	void (*delay_us)(u32 ticks);
	void *drv_data;
};
