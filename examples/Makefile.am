ACLOCAL_AMFLAGS = -I m4
GCCPLUGINS_DIR = `${CXX} -print-file-name=plugin`
INCDIR=
AM_CPPFLAGS = -I $(GCCPLUGINS_DIR)/include $(INCDIR) -I $(srcdir)/../libgdl $(GMP_INC)  -g3 
AM_CFLAGS = -Wall -std=gnu++14 -g3 $(INCDIR) --verbose -save-temps
AM_CXXFLAGS = -Wall -std=gnu++14 -g3 $(INCDIR) --verbose -save-temps

# pkglib_LTLIBRARIES = libtemplate_plugin.la

# libtemplate_plugin_la_SOURCES = test1.cpp 

# libtemplate_plugin_la_LDFLAGS = 
# libtemplate_plugin_la_LIBADD = 

bin_PROGRAMS = testlink 

testlink_SOURCES = test1.cpp
testlink_LDFLAGS =  -L /usr/lib/gcc/x86_64-linux-gnu/5/
testlink_LDADD = -lgcc
