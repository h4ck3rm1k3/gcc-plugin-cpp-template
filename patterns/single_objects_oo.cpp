#include <fstream>
#include <iostream>
#include "iso_tree_node.hpp"
#include <iomanip>
#include <vector>
#include <memory>

using namespace std;

//char * read_buffer(const char * filename);
//char * read_buffer_section(const char * filename, unsigned long from, unsigned long to, int level);



class Core {
public:
  Core(const char * filename) :
    filename(filename) {}

  //! filename of the core file
  const char * filename;
};

// recursive load of objects
class Section {
public:
  //!// section start
  unsigned long  from;

  //! section end
  unsigned long  to;

  bool inside(unsigned long val)
  {
    return ((val > from)   &&    (val < to) );
  }

  void report() {
    cerr << "section: from: " << hex << to << " to: " << hex << from << endl;
  }
  
};

typedef std::shared_ptr<char> CharPtr;

class Object {
  const int max_size = sizeof(union tree_node);
  CharPtr rawdata; 

public:
  unsigned long  orig_position; // the original position 
public:
  //! the data for this object

  //Object()

  Object()
    :rawdata(0)
  {
  }

  Object(unsigned long pos)
    :rawdata(0),
     orig_position(pos)
  {
  }
  
  ~Object()
  {
    //delete rawdata;
  }

  char * read_buffer_section(const char * filename, unsigned long from, unsigned long to, int indent=0) {

  cerr << "indent:" << indent << endl;
  
  for (int i = 0; i < indent; i++) {
    cerr << "\t";     
  }
  cerr << "read section:" << filename 
       << "from:" << hex << from
       << "to:" << hex << to << endl;
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
    for (int i = 0; i < indent; i++) {
      cerr << "\t";     
    }
    cerr << "opened file"  << endl;
  }


  unsigned long size = to - from;
  for (int i = 0; i < indent; i++) {
    cerr << "\t";     
  }
  cerr << "size of buffer" << size << endl;

  char * filebuf;
  try {
    filebuf = new char[size];
    for (int i = 0; i < indent; i++) {
      cerr << "\t";     
    }
    cerr << "alloc ok : " << size << endl;
  } catch (std::bad_alloc   err) {
    cerr << "failed alloc" << size << endl;
  }

  for (int i = 0; i < indent; i++) {
    cerr << "\t";     
  }
  cerr << "seeking to" << from << endl;
  f.seekg(from, ios::beg);
  unsigned long pos = f.tellg();  // pos is 0

  for (int i = 0; i < indent; i++) {
    cerr << "\t";     
  }
  cerr << "now at " << pos << endl;
  
  unsigned long bufv;
  char buf[sizeof(bufv)];
  
  if(f){  
    f.read(filebuf,size);    
    pos = f.tellg();  // pos is 0
    
    for (int i = 0; i < indent; i++) {
      cerr << "\t";     
    }
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

  //! load this object from a core file
  int load(Core & core, Section & section, int level){

    cerr << "Load: "<< level << endl;
    
    if (!section.inside(orig_position))
      return 0;
    
    rawdata = CharPtr(
		      read_buffer_section(
					  core.filename,
					  orig_position - section.from,
					  orig_position - section.from + max_size,
					  level
					  )
		      );
    if (!rawdata){
      cerr << "could not read file " << endl;
      return 0;
    }
    
    //unsigned long * bufv = (unsigned long *)rawdata;      
    //cerr << "orig_position with: " << hex <<  orig_position << endl;
        
    //	unsigned long offset = (val - from);
    //cerr << "offset:"<< hex << offset << endl;
    //cerr << "offset:"<< dec << offset << endl;

    return 1;
  }
  unsigned long * get (){
    return (unsigned long *) rawdata.get();
  }


  void scan_pointers(Core & core, Section & section, int level)
  {
    cerr   << "pointers:"  ;
    int j =0;
    unsigned long* pobj = (unsigned long*)get();
    unsigned long* pend = (unsigned long*)(pobj)+max_size;

    std::vector<Object> subobjects;
    
    cerr << "end "  << hex << pend << endl;
    while (pobj < pend) {
      j++;
      unsigned long v = *pobj;

      if (section.inside(v))	   
	{
	  cerr
	    << "item "   << j << "\t"
	    << "Pos 0x"  << hex << pobj << "\t"
	    << " 0x"<< hex << v
	    << endl;	  
	  Object subobj(v);
	  subobj.load(core,section, level +1);
	  subobjects.push_back(subobj);
	}
      // pointers   
      pobj++;	  	  
    } // while
  }


  //
  void process_node (Core & core, Section & section, int level) {
    char * obj2 = rawdata.get();
    
    cerr << "obj:"<< hex <<  obj2 << endl;
    
    tree_base * b = (tree_base *)obj2;

    unsigned long val = orig_position;
    
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
      size_t  size = tree_size ((const_tree)obj2);
      cerr   << "tree size:"  << size << endl;
      
      cerr   << "obj:"  ;
      for (int j=0; j < size;
	   j++) {
	cerr << setw(2)<< obj2[j];
      };
      cerr << endl;
      
      cerr   << "obj int:"  ;
      for (int j=0; j < size;
	   j++) {
	    //cerr << " O:" << setw(2) << oct<< (unsigned)obj[j];
	cerr << " " << setw(2) << hex<< (unsigned)obj2[j];
	//cerr << " D:" << setw(2) << dec<< (unsigned)obj[j];
      };
      cerr << endl;
      
      scan_pointers(core, section, level);
      
    }// if valid tree code
    else {
      cerr << "bad tree code" << endl;
      int size = 32;
      cerr   << "obj:"  ;
      for (int j=0; j < size;
	   j++) {
	cerr << setw(2)<< obj2[j];
      };
      cerr << endl;
      
      cerr   << "obj int:"  ;
      for (int j=0; j < size;
	   j++) {
	//cerr << " O:" << setw(2) << oct<< (unsigned)obj[j];
	cerr << " " << setw(2) << hex<< (unsigned)obj2[j];
	//cerr << " D:" << setw(2) << dec<< (unsigned)obj[j];
      };
      cerr << endl;
	
    }

  }
  
  
};

int main(int argc, char ** argv){

  // now for each 
  if (argc < 4) {
    cerr << "args : core-or-segment-filename segment-from-pos segment-end-pos read-this-pointer*" << endl;
    return 0;
  }
  Core core(argv[1]);
  Section section;
  
  cerr << "got args:"<< argc << endl;  
  cerr << "Reading file :"<< argv[1] << endl;
  sscanf(argv[2], "%lx", &section.from);
  sscanf(argv[3], "%lx", &section.to);
  cerr << "section: from: " << hex << section.to << " to: " << hex << section.from << endl;
    
  unsigned long segsize = section.to - section.from;
  cerr << "size of section:" << hex << segsize << endl;
  
  for (int k = 4; k < argc;  k++) {
    
    cerr << "pos: " << dec << k  << endl;
    Object obj;
    sscanf(argv[k], "%lx", &obj.orig_position);
    
    if (!obj.load(core,section, 1))
      break;
    
    unsigned long * bufv = obj.get();      

    section.report();
    
    cerr << "orig_position with: " << hex <<  obj.orig_position << endl;
        
    obj.scan_pointers(core, section, 1);    

    //	unsigned long offset = (val - from);
    //cerr << "offset:"<< hex << offset << endl;
    //cerr << "offset:"<< dec << offset << endl;
    
    
  } // shome
  

}
