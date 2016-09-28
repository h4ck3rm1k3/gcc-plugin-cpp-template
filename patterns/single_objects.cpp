#include <fstream>
#include <iostream>
#include "iso_tree_node.hpp"
#include <iomanip>

using namespace std;

//char * read_buffer(const char * filename);
char * read_buffer_section(const char * filename, unsigned long from, unsigned long to, int level);

int main(int argc, char ** argv){

  cerr << "got args:"<< argc << endl;
  
  cerr << "Reading:"<< argv[1] << endl;
  unsigned long  from;
  sscanf(argv[2], "%lx", &from);

  unsigned long  to;
  sscanf(argv[3], "%lx", &to);
  if (argc < 4) {
    cerr << "args : core-or-segment-filename segment-from-pos segment-end-pos read-this-pointer*" << endl;
    return 0;
  }
  for (int k = 4; k < argc;  k++) {

    cerr << "pos: " << dec << k  << endl;
    unsigned long  start;
    sscanf(argv[k], "%lx", &start);

    char * filebuf = read_buffer_section(argv[1],
					 start - from,
					 start - from +512, 1);
    if (!filebuf){
      cerr << "could not read file " << endl;
      break;
    }
    
    unsigned long * bufv = (unsigned long *)filebuf;      
    cerr << "segment: from: " << hex << to << " to: " << hex << from << endl;
    cerr << "start with: " << hex <<  start << endl;

    unsigned long segsize = to - from;
    cerr << "size of segment:" << hex << segsize << endl;
    
    //scan for pointers
        
    unsigned long val = start;
    
    if((val > from)   &&    (val < to)     )
      {
	//	unsigned long offset = (val - from);
	//cerr << "offset:"<< hex << offset << endl;
	//cerr << "offset:"<< dec << offset << endl;
	
	char * obj = filebuf ;
	
	cerr << "obj:"<< hex <<  obj << endl;
	
	tree_base * b = (tree_base *)obj;
	
	if(b->code < MAX_TREE_CODES) {
	  
	  cerr
	    //<< "Pos 0x"  << hex << pos << "\t"
	    << " 0x"<< hex << val 
	    //<< "\t"
	    //<< buf
	    << endl;
	  
	  cerr << "code: " << b->code << endl;
	  
	  cerr << "tree code name:" << get_tree_code_name ((enum tree_code) b->code) << endl;
	  cerr   << "going to get size." << endl;
	  size_t  size = tree_size ((const_tree)obj);
	  cerr   << "tree size:"  << size << endl;
	  
	  cerr   << "obj:"  ;
	  for (int j=0; j < size;
	       j++) {
	    cerr << setw(2)<< obj[j];
	  };
	  cerr << endl;

	  cerr   << "obj int:"  ;
	  for (int j=0; j < size;
	       j++) {
	    //cerr << " O:" << setw(2) << oct<< (unsigned)obj[j];
	    cerr << " " << setw(2) << hex<< (unsigned)obj[j];
	    //cerr << " D:" << setw(2) << dec<< (unsigned)obj[j];
	  };
	  cerr << endl;


	  cerr   << "pointers:"  ;
	  int j =0;
	  unsigned long* pobj = (unsigned long*)obj;
	  unsigned long* pend = (unsigned long*)(obj+size);

	  cerr << "end "  << hex << pend << endl;
	  while (pobj < pend) {
	    j++;
	    unsigned long v = *pobj;
	    if(
	       (v > from)
	       && 
	       (v < to)
	       )
	      {
		cerr
		  << "item "   << j << "\t"
		  << "Pos 0x"  << hex << pobj << "\t"
		  << " 0x"<< hex << v
		  << endl;
	      }
	    // pointers   
	    pobj++;	  	  
	  } // while
	}// if valid tree code
	else {
	  cerr << "bad tree code" << endl;
	  int size = 32;
	  cerr   << "obj:"  ;
	  for (int j=0; j < size;
	       j++) {
	    cerr << setw(2)<< obj[j];
	  };
	  cerr << endl;
	
	  cerr   << "obj int:"  ;
	  for (int j=0; j < size;
	       j++) {
	    //cerr << " O:" << setw(2) << oct<< (unsigned)obj[j];
	    cerr << " " << setw(2) << hex<< (unsigned)obj[j];
	    //cerr << " D:" << setw(2) << dec<< (unsigned)obj[j];
	  };
	  cerr << endl;
	
	}

      } // shome
    else {
      cerr << "out of bounds" << endl;
    }
    delete filebuf;
  }


}
