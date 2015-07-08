plugincpp_interface_simple.tu:
	g++-5 -c -fdump-translation-unit plugincpp_interface_simple.cpp
test :
	g++ -c plugincpp_interface_simple.cpp
	g++ -c plugincpp_interface.cpp
	g++ -c crash1.cpp	
	g++ -c plugincpp_test.cpp

test_struct:
	g++-5 -c -fdump-translation-unit test_struct.cpp

