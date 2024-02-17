/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef _DATA_HW_ROUNDEDPATTERN_H_
#define _DATA_HW_ROUNDEDPATTERN_H_

#define ROUND_CORNER_H_TOP 32
#define ROUND_CORNER_H_BOT 32

static unsigned char top_rc_pattern[] = {
	0x1d, 0x0, 0x3, 0x1, 0x1b, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf0, 0xa0,
	0x30, 0x30, 0xa0, 0xf0,
	0x1b, 0x0, 0x2, 0x1, 0x1d, 0x4, 0x38, 0x4, 0x3, 0x0, 0xc0, 0x60,
	0x10, 0x60, 0xc0,
	0x19, 0x0, 0x2, 0x1, 0x1f, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa0, 0x20,
	0x20, 0xa0,
	0x17, 0x0, 0x2, 0x1, 0x21, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb0, 0x20,
	0x20, 0xc0,
	0x15, 0x0, 0x2, 0x1, 0x23, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc0, 0x40,
	0x40, 0xc0,
	0x13, 0x0, 0x2, 0x1, 0x25, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf0, 0x50,
	0x50, 0xf0,
	0x12, 0x0, 0x2, 0x1, 0x26, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb0, 0x10,
	0x10, 0xc0,
	0x10, 0x0, 0x2, 0x1, 0x28, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf0, 0x70,
	0x70, 0xf0,
	0xf, 0x0, 0x2, 0x1, 0x29, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd0, 0x20,
	0x20, 0xd0,
	0xe, 0x0, 0x2, 0x1, 0x2a, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd0, 0x10,
	0x10, 0xd0,
	0xd, 0x0, 0x1, 0x1, 0x2b, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa0, 0x10,
	0xa0,
	0xc, 0x0, 0x1, 0x1, 0x2c, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa0, 0xa0,
	0xb, 0x0, 0x1, 0x1, 0x2d, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa0, 0xa0,
	0xa, 0x0, 0x1, 0x1, 0x2e, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa0, 0xa0,
	0x9, 0x0, 0x1, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd0, 0x10,
	0xd0,
	0x8, 0x0, 0x2, 0x1, 0x30, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd0, 0x10,
	0x10, 0xd0,
	0x7, 0x0, 0x2, 0x1, 0x31, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf0, 0x20,
	0x20, 0xf0,
	0x7, 0x0, 0x1, 0x1, 0x31, 0x4, 0x38, 0x4, 0x1, 0x0, 0x70, 0x70,
	0x6, 0x0, 0x1, 0x1, 0x32, 0x4, 0x38, 0x4, 0x1, 0x0, 0xb0, 0xc0,
	0x5, 0x0, 0x2, 0x1, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf0, 0x10,
	0x10, 0xf0,
	0x5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x38, 0x4, 0x1, 0x0, 0x50, 0x50,
	0x4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x1, 0x0, 0xc0, 0xc0,
	0x4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x1, 0x0, 0xb0, 0xc0,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa0, 0xa0,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0xc0, 0xc0,
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x60, 0x60,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf0, 0x10,
	0xf0,
	0x0, 0x0, 0x0, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa0,
	0x0, 0x0, 0x0, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x30,

	0x0, 0x0, 0x0, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x30,
	0x0, 0x0, 0x0, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa0,
	0x0, 0x0, 0x0, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0x10, 0xef,
	0x0, 0x0, 0x0, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x60,
	0x0, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x70, 0xc0,
	0x0, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x1, 0x0, 0x80, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x1, 0x0, 0xb0, 0xa0,
	0x1, 0x0, 0x0, 0x1, 0x35, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20,
	0x1, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x1, 0x0, 0x50, 0xc0,
	0x1, 0x0, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x1, 0x0, 0x90, 0x40,
	0x1, 0x0, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x1, 0x0, 0xdf, 0xc0,
	0x2, 0x0, 0x1, 0x1, 0x33, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x50,
	0x2, 0x0, 0x1, 0x1, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0xbf, 0x10,
	0xef,
	0x3, 0x0, 0x1, 0x1, 0x32, 0x4, 0x38, 0x4, 0x1, 0x0, 0x50, 0xc0,
	0x3, 0x0, 0x1, 0x1, 0x31, 0x4, 0x38, 0x4, 0x1, 0x0, 0xdf, 0x70,
	0x4, 0x0, 0x1, 0x1, 0x31, 0x4, 0x38, 0x4, 0x2, 0x0, 0x60, 0x20,
	0xef,
	0x4, 0x0, 0x2, 0x1, 0x30, 0x4, 0x38, 0x4, 0x2, 0x0, 0xef, 0x30,
	0x10, 0xcf,
	0x5, 0x0, 0x2, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdf, 0x10,
	0x10, 0xcf,
	0x6, 0x0, 0x1, 0x1, 0x2e, 0x4, 0x38, 0x4, 0x1, 0x0, 0xbf, 0xa0,
	0x7, 0x0, 0x1, 0x1, 0x2d, 0x4, 0x38, 0x4, 0x1, 0x0, 0x9f, 0xa0,
	0x8, 0x0, 0x1, 0x1, 0x2c, 0x4, 0x38, 0x4, 0x1, 0x0, 0x9f, 0xa0,
	0x9, 0x0, 0x2, 0x1, 0x2b, 0x4, 0x38, 0x4, 0x2, 0x0, 0xbf, 0x10,
	0x10, 0x9f,
	0xa, 0x0, 0x2, 0x1, 0x2a, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcf, 0x30,
	0x10, 0xcf,
	0xb, 0x0, 0x2, 0x1, 0x29, 0x4, 0x38, 0x4, 0x2, 0x0, 0xef, 0x40,
	0x20, 0xcf,
	0xd, 0x0, 0x2, 0x1, 0x28, 0x4, 0x38, 0x4, 0x2, 0x0, 0xaf, 0x20,
	0x70, 0xef,
	0xe, 0x0, 0x2, 0x1, 0x26, 0x4, 0x38, 0x4, 0x2, 0x0, 0xef, 0x7f,
	0x10, 0xbf,
	0x10, 0x0, 0x2, 0x1, 0x25, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdf, 0x40,
	0x50, 0xef,
	0x12, 0x0, 0x2, 0x1, 0x23, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcf, 0x5f,
	0x40, 0xbf,
	0x14, 0x0, 0x3, 0x1, 0x21, 0x4, 0x38, 0x4, 0x2, 0x0, 0xef, 0x7f,
	0x20, 0x20, 0xbf,
	0x17, 0x0, 0x2, 0x1, 0x1f, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9f, 0x4f,
	0x20, 0x9f,
	0x19, 0x0, 0x4, 0x1, 0x1d, 0x4, 0x38, 0x4, 0x3, 0x0, 0xef, 0x9f,
	0x5f, 0x10, 0x10, 0x5f, 0xbf,
	0x1d, 0x0, 0x3, 0x1, 0x1b, 0x4, 0x38, 0x4, 0x3, 0x0, 0xbf, 0x6f,
	0x20, 0x30, 0x9f, 0xef,
};

#endif
