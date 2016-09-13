#make -f Makefile.orig test_bootstrap

g++-5 -flto -c  -I/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include --verbose -g3 -O0 -dH -ggdb -save-temps   -I /usr/include/raptor2 -I /usr/include/rasqal -I ../google-coredumper/src plugin.cpp -o plugintest.o

#g++-5 -flto --verbose -g3 -O0 -dH -ggdb -save-temps   test.c

