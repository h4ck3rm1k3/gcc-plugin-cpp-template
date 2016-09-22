#include <fstream>
#include <iostream>
#include "iso_tree_node.hpp"
#include <iomanip>

using namespace std;

char * read_buffer(const char * filename) {
  fstream f(
	    filename,
	    //"bin/core",
	    //"bin/test_program_segment_6.out",
	    ios_base::in | ios_base::binary

	    );

  f.seekg(0, ios::end);
  unsigned long endpos = f.tellg();  // pos is 0
  cerr << "size of file" << endpos << endl;
    
  char * filebuf = new char[endpos];
  
  f.seekg(0, ios::beg);
    
  unsigned long bufv;
  char buf[sizeof(bufv)];
  
  if(f){  
    f.read(filebuf,endpos);    
    unsigned long pos = f.tellg();  // pos is 0
    cerr << "end of file" << pos << endl;
  }
  f.close();

  return filebuf;
  
}
