/*
 *  Copyright (C) 2013-2025 Cisco Systems, Inc. and/or its affiliates. All rights reserved.
 *  Copyright (C) 2009-2013 Sourcefire, Inc.
 *
 *  Authors: Tomasz Kojm, aCaB
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA 02110-1301, USA.
 */

#ifndef __CLIENT_H
#define __CLIENT_H

#define CLAMDSCAN_DEFAULT_PING_INTERVAL 1
#define CLAMDSCAN_DEFAULT_PING_ATTEMPTS 31

#include "optparser.h"

int client(const struct optstruct *opts, int *infected, int *err);
int get_clamd_version(const struct optstruct *opts);
int reload_clamd_database(const struct optstruct *opts);
int16_t ping_clamd(const struct optstruct *opts);

#endif
