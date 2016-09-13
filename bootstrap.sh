#make -f Makefile.orig test_bootstrap

g++-5 -c -g3 -O0 -dH -ggdb -save-temps  -I/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include -I /usr/include/raptor2 -I /usr/include/rasqal -I ../google-coredumper/src -fplugin=./.libs/libtemplate_plugin.so plugin.cpp
#>testplugin.txt 2> testplugin.err 
#mv core.finish_unit.0 core.finish_unit.0.testplugin
#mv core core.testplugin


#g++-5 -c -g3 -O0 -dH -ggdb -save-temps  -I/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include -I /usr/include/raptor2 -I /usr/include/rasqal -I ../google-coredumper/src -fplugin=./.libs/libtemplate_plugin.so test.c > testplugin1.txt 2> testplugin1.err 
#mv core.finish_unit.0 core.finish_unit.0.testempty
#mv core core.test_empty
