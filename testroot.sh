
LD_LIBRARY_PATH=/usr/local/lib g++-5 -c -g3 -O0 -dH -ggdb -save-temps  -I/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include -I /usr/include/raptor2 -I /usr/include/rasqal -I ../google-coredumper/src -fplugin=./.libs/libtemplate_plugin.so test.c
