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
  cout << "\t generic_class_name <" 
       << pname << ">" 
       << " the_class_name(\"" <<  pname << "\",context,obj);"
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

void RecordContext::field_begin(const char * name, double_int offset, double_int bit_offset, double_int bit_size){
  cout << "\t generic_field_name <" 
       << class_name
    //<< "," 
    // << name            
       << "> " 
       <<  name 
       << "(\"" 
          <<  name 
       << "\",context,obj,"
       << offset.low <<","
       << bit_offset.low <<","
       << bit_size.low
       << ");" 
       << endl;      
}

void RecordContext::record_end(){
  cout << "}; " << endl;
}

int RecordContext::classcount=0;
