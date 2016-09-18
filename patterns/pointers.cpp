#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char ** argv){

  cerr << "hello" << endl;

  cerr << "Reading:"<< argv[1] << endl;
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
    int pos = f.tellg();  // pos is 0
    bufv =  *(unsigned long*)(buf);

    if(
       (bufv > 0x7fdea5656000)
       &&
       (bufv < 0x7fdea5856000)
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
