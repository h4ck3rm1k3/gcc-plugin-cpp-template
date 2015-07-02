ACLOCAL_AMFLAGS = -I m4

GCCPLUGINS_DIR = `gcc -print-file-name=plugin`

AM_CPPFLAGS = -I $(GCCPLUGINS_DIR)/include -I $(srcdir)/../libgdl $(GMP_INC)

AM_CFLAGS = -Wall -std=gnu++11

pkglib_LTLIBRARIES = template_plugin.la

EXTRA_DIST = 

template_plugin_la_SOURCES = \
	enumeral_type.hpp  \
	field_decl.cpp \
	field_decl.hpp \
	identifer_node.cpp  \
	identifer_node.hpp \
	introspection.cpp \
	introspection.hpp \
	name.hpp \
	name.cpp \
	plugin.cpp \
	plugincpp.cpp \
	plugincpp.hpp \
	record_context.cpp \
	record_context.hpp \
	record_type.cpp \
	record_type.hpp \
	switchcall.hpp 

template_plugin_la_LDFLAGS = -module

template_plugin_la_LIBADD = 

bin_PROGRAMS = testlink
testlink_SOURCES = test_link.cpp
testlink_LDADD = template_plugin.la
