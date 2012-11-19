#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include  "RecordContext.hpp"
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
  return n;
}

void RecordContext::field_begin(Field & fld){

  if ( fld.bit_field) 
    cout << "\t define_generic_bitfield (" ;
  else
    cout << "\t define_generic_field (" ;
  cout << class_name <<","
       << fld.name  <<","
       << "\""<< fld.name << "\","
       << fld.bit_field <<","
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
