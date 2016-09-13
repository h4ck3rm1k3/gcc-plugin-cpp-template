#make -f Makefile.orig test_bootstrap

g++-5 -flto -c -g3 -O0 -dH -ggdb -save-temps   -I /usr/include/raptor2 -I /usr/include/rasqal -I ../google-coredumper/src plugin.cpp >testplugin.txt 2> testplugin.err 

g++-5 -flto -c -g3 -O0 -dH -ggdb -save-temps   test.c > testplugin1.txt 2> testplugin1.err 

