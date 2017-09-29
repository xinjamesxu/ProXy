/*
 * Copyright (C) 1996-2017 The Squid Software Foundation and contributors
 *
 * Squid software is distributed under GPLv2+ license and includes
 * contributions from numerous individuals and organizations.
 * Please see the COPYING and CONTRIBUTORS files for details.
 */

#ifndef _SQUID_DRAND48_H
#define _SQUID_DRAND48_H

#if !HAVE_DRAND48
#define HAVE_DRAND48 1
SQUIDCEXTERN double drand48(void);
#endif

#endif

