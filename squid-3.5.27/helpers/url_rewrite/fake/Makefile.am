## Copyright (C) 1996-2017 The Squid Software Foundation and contributors
##
## Squid software is distributed under GPLv2+ license and includes
## contributions from numerous individuals and organizations.
## Please see the COPYING and CONTRIBUTORS files for details.
##

include $(top_srcdir)/src/Common.am
 
libexec_PROGRAMS = url_fake_rewrite
url_fake_rewrite_SOURCES = fake.cc

url_fake_rewrite_LDADD = $(COMPAT_LIB)

libexec_SCRIPTS = url_fake_rewrite.sh

EXTRA_DIST = url_fake_rewrite.sh required.m4
