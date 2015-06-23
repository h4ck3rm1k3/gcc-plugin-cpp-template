ACLOCAL_AMFLAGS = -I m4

GCCPLUGINS_DIR = `gcc -print-file-name=plugin`

AM_CPPFLAGS = -I $(GCCPLUGINS_DIR)/include -I $(srcdir)/../libgdl $(GMP_INC)

AM_CFLAGS = -Wall

pkglib_LTLIBRARIES = template_plugin.la

EXTRA_DIST = 

template_plugin_la_SOURCES = \
	plugin.cpp \
	introspection.cpp \
	introspection.hpp \
	RecordContext.cpp \
	RecordContext.hpp \
	plugincpp.cpp \
	plugincpp.hpp


template_plugin_la_LDFLAGS = -module

template_plugin_la_LIBADD = 
