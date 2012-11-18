GCC=gcc-4.7
PLUGIN_SOURCE_FILES= plugin.c 
PLUGIN_OBJECT_FILES= $(patsubst %.c,%.o,$(PLUGIN_SOURCE_FILES)) plugincpp.o

TOP := $(dir $(lastword $(MAKEFILE_LIST)))
GCCPLUGIN_HEADER_DIR=/usr/lib/gcc/x86_64-linux-gnu/4.7/plugin/include

CFLAGS+= -g -O0 -save-temps  -I$(GCCPLUGIN_HEADER_DIR)  -fPIC -O2   -Wl,-E  -fstack-protector -ldl -lm -lpthread -lc -lcrypt

OBJECTS=plugin.o plugincpp.o RecordContext.o


plugin.so: $(PLUGIN_OBJECT_FILES)  $(OBJECTS)
	g++ -shared -pthread  plugin.o plugincpp.o -o $@

plugincpp.o:  plugincpp.cpp 
	g++ -std=c++0x -save-temps -fPIC -pthread -c -I$(GCCPLUGIN_HEADER_DIR)  $^ -o $@

RecordContext.o:  RecordContext.cpp 
	g++ -std=c++0x -save-temps -fPIC -pthread -c -I$(GCCPLUGIN_HEADER_DIR)  $^ -o $@

plugin.o:  plugin.c
	$(GCC) $(CFLAGS) -fPIC -shared -pthread  $^ -c -o $@

test : plugin.so
	$(GCC) -fplugin=$(TOP)/plugin.so -I$(GCCPLUGIN_HEADER_DIR)  plugin.c -c -o plugin-bootstrap.o


clean :
	rm plugin.so
	rm *.o
	rm *.i *.ii *.s

static_test :
	g++  -std=c++0x -I fake fake/tree.c plugincpp.cpp  RecordContext.cpp
