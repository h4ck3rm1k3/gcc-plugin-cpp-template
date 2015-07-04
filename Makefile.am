ACLOCAL_AMFLAGS = -I m4

GCCPLUGINS_DIR = `${CXX} -print-file-name=plugin`

AM_CPPFLAGS = -I $(GCCPLUGINS_DIR)/include -I $(srcdir)/../libgdl $(GMP_INC) -Itree-nodes

AM_CFLAGS = -Wall -std=gnu++11

pkglib_LTLIBRARIES = template_plugin.la

EXTRA_DIST = 

template_plugin_la_SOURCES = \
	__callback.cpp \
	callback.cpp \
	callback.hpp \
	callbacks.cpp \
	callbacks.hpp \
	field.cpp \
	field.hpp \
	introspection.cpp \
	introspection.hpp \
	name.cpp \
	name.hpp \
	plugin.cpp \
	record_context.cpp \
	record_context.hpp \
	switchcall.hpp \
	tcwrapper.hpp \
	tree-nodes/enumeral_type.hpp  \
	tree-nodes/error_mark.cpp \
	tree-nodes/error_mark.hpp \
	tree-nodes/field_decl.cpp \
	tree-nodes/field_decl.hpp \
	tree-nodes/identifer_node.cpp  \
	tree-nodes/identifer_node.hpp \
	tree-nodes/label_decl.cpp \
	tree-nodes/label_decl.hpp \
	tree-nodes/record_type.cpp \
	tree-nodes/record_type.hpp \
	tree-nodes/translation_unit_decl.cpp \
	tree-nodes/translation_unit_decl.hpp \
	tree-nodes/type_decl.cpp \
	tree-nodes/type_decl.hpp \
	tree-nodes/union_type.cpp \
	tree-nodes/union_type.hpp \
	tree-nodes/void_type.cpp \
	tree-nodes/void_type.hpp \
	tree-nodes/namespace_decl.cpp \
	tree-nodes/namespace_decl.hpp \
	# skip

template_plugin_la_LDFLAGS = -module

template_plugin_la_LIBADD = 

bin_PROGRAMS = testlink
testlink_SOURCES = test_link.cpp
testlink_LDADD = template_plugin.la
