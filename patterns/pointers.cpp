#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char ** argv){

  cerr << "hello" << endl;

  cerr << "Reading:"<< argv[1] << endl;
  unsigned long  from;
  sscanf(argv[2], "%lx", &from);

  unsigned long  to;
  sscanf(argv[3], "%lx", &to);
  
  fstream f(
	    argv[1],
	    //"bin/core",
	    //"bin/test_program_segment_6.out",
	    ios_base::in | ios_base::binary

	    );
    unsigned long bufv;
  char buf[sizeof(bufv)];
  
  while(f){

    //cerr     << "file" << endl;
  
    f.read(buf,sizeof(buf));
    
    //0x7fdea3f81970:	0x90	0xf6	0x7b	0xa5	0xde	0x7f	0x00	0x00
    unsigned long pos = f.tellg();  // pos is 0
    pos += from;
    
    bufv =  *(unsigned long*)(buf);

    if(
       (bufv > from)
       && 
       (bufv < to)
       )
      {
	
	{
	  cerr
	    << "Pos 0x"  << hex << pos << "\t"
	    << " 0x"<< hex << bufv 
	    //<< "\t"
	    //<< buf
	    << endl;
	}
      }
  }
  f.close();
}
