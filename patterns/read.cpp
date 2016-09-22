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

  char * filebuf;
  try {
    filebuf = new char[endpos];
    cerr << "alloc ok : " << endpos << endl;

  } catch (std::bad_alloc   err) {
    cerr << "failed alloc" << endpos << endl;
  }

  f.seekg(0, ios::beg);   
  
  if(f){  
    f.read(filebuf,endpos);    
    unsigned long pos = f.tellg();  // pos is 0
    cerr << "end of file" << pos << endl;
  }
  f.close();

  return filebuf;
  
}


char * read_buffer_section(const char * filename, unsigned long from, unsigned long to) {

  cerr << "read section:" << filename << endl;
  cerr << "from:" << hex << from << endl;
  cerr << "to:" << hex << to << endl;
  fstream f(
	    filename,
	    //"bin/core",
	    //"bin/test_program_segment_6.out",
	    ios_base::in | ios_base::binary

	    );
  if(!f){  
    cerr << "could not read file"  << endl;
    f.close();
    return 0;
  }
  else {
    cerr << "opened file"  << endl;
  }


  unsigned long size = to - from;
  cerr << "size of buffer" << size << endl;

  char * filebuf;
  try {
    filebuf = new char[size];
    cerr << "alloc ok : " << size << endl;
  } catch (std::bad_alloc   err) {
    cerr << "failed alloc" << size << endl;
  }

  cerr << "seeking to" << from << endl;
  f.seekg(from, ios::beg);
  unsigned long pos = f.tellg();  // pos is 0
  cerr << "now at " << pos << endl;
  
  unsigned long bufv;
  char buf[sizeof(bufv)];
  
  if(f){  
    f.read(filebuf,size);    
    pos = f.tellg();  // pos is 0
    cerr << "end of block" << pos << endl;
  }
  else {
    cerr << "could not read file"  << endl;
    delete filebuf;
    return 0;
  }
  f.close();

  return filebuf;
  
}
