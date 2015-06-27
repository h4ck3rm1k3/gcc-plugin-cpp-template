#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include  "record_context.hpp"
#include  "plugincpp.hpp"

using namespace std;

void RecordContext::record_begin(const char * pname){
  class_name=pname;
  cout << "class CLS_" << classcount++ << "_";

  if (pname) {
    cout << pname ;
  }  else  {
    cout << "unnamed" ;
  }
  cout << "{ " << endl;
  cout << "\t define_generic_class_name (" 
       << pname << "," 
       << " \"" <<  pname << "\");"
       << endl;      

}

const char *  RecordContext::type_name ( TC_IDENTIFIER_NODE * cb,  tree_node* t) {
  const char * n= cb->id(t);
  return n;
};

const char * RecordContext::field_name(TC_IDENTIFIER_NODE * cb,  tree_node* t){
  const char * n= cb->id(t);
  //std::cerr << "Field Name:" << n << std::endl;
  return n;
}

void RecordContext::field_begin(Field & fld){

  //cerr << "RecordContext::field_begin" << endl;
    
  if ( fld.bit_field) 
    cout << "\t define_generic_bitfield (" ;
  else
    cout << "\t define_generic_field (" ;
  cout << class_name <<",";
  if (fld.name) {
    cout << fld.name  <<",";
    cout << "\""<< fld.name << "\",";
  }
  cout     << fld.bit_field <<","
       << fld.offset <<","
       << fld.bit_offset <<","
       << fld.bit_size       
       << ");" 
       << endl;      
}

void RecordContext::record_end(){
  cout << "}; " << endl;
}

int RecordContext::classcount=0;
