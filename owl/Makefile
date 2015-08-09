test:
	- rm *.o *.lo *.gch
	g++-5 -Wall -std=gnu++11 -I /usr/include/raptor2 -I /usr/include/rasqal -lrdf -lxml2 -lexpat -lcrypt *.cpp && ./a.out

test2:
	- rm *.o *.lo *.gch
	g++ -Wall -std=gnu++11 -I /usr/include/raptor2 -I /usr/include/rasqal -lrdf -lxml2 -lexpat -lcrypt test.cpp
	./a.out

test3:
	- rm *.o *.lo *.gch
	g++-4.9 -Wall -std=gnu++11 -I /usr/include/raptor2 -I /usr/include/rasqal -lrdf -lxml2 -lexpat -lcrypt struct.hpp *.cpp && ./a.out

test4:
	- rm *.o *.lo *.gch
	g++-4.8 -Wall -std=gnu++11 -I /usr/include/raptor2 -I /usr/include/rasqal -lrdf -lxml2 -lexpat -lcrypt struct.hpp *.cpp && ./a.out


