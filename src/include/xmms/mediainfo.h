/*  XMMS2 - X Music Multiplexer System
 *  Copyright (C) 2003	Peter Alm, Tobias Rundstr�m, Anders Gustafsson
 * 
 *  PLUGINS ARE NOT CONSIDERED TO BE DERIVED WORK !!!
 * 
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *                   
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 */




#ifndef __XMMS_MEDIAINFO_H__
#define __XMMS_MEDIAINFO_H__

typedef struct xmms_mediainfo_reader_St xmms_mediainfo_reader_t;

#include "xmms/playlist.h"
#include "xmms/medialib.h"

xmms_mediainfo_reader_t * xmms_mediainfo_reader_start (xmms_playlist_t *playlist);
void xmms_mediainfo_reader_stop (xmms_mediainfo_reader_t *mit);
void xmms_mediainfo_reader_wakeup (xmms_mediainfo_reader_t *mr);

#endif /* __XMMS_MEDIAINFO_H__ */
