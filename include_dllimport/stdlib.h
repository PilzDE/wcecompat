/*  wcecompat: Windows CE C Runtime Library "compatibility" library.
 *
 *  Copyright (C) 2001-2002 Essemer Pty Ltd.  All rights reserved.
 *  http://www.essemer.com.au/
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
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */


#ifndef __wcecompat__STDLIB_H__
#define __wcecompat__STDLIB_H__

#include "stddef.h"
#include "malloc.h"
#include "memory.h"
#include "float.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _EXPORTING
   #define FUNC_DECLSPEC    __declspec(dllexport)
#else
   #define FUNC_DECLSPEC    __declspec(dllimport)
#endif

FUNC_DECLSPEC char * __cdecl getenv(const char *name);

#ifdef __cplusplus
}
#endif

#endif /* __wcecompat__STDLIB_H__ */
