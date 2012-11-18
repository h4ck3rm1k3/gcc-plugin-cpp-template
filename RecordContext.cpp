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
  cout << "\t generic_class_name <" << "\"" <<  pname << "\"," << pname << ">" << " the_class_name;"<< endl;      

}

const char *  RecordContext::type_name ( TC_IDENTIFIER_NODE * cb,  tree_node* t) {
  const char * n= cb->id(t);
  //  cerr << "type_name:" << n<< endl;    
  return n;
};

const char * RecordContext::field_name(TC_IDENTIFIER_NODE * cb,  tree_node* t){
  const char * n= cb->id(t);  
  return n;
}

void RecordContext::field_begin(const char * name){
  cout << "\t generic_field_name <\"" 
       <<  name 
       << "\"," 
       << class_name        << "," 
       << name            
       << "> " <<  name << ";" << endl;      
}

void RecordContext::record_end(){
  cout << "}; " << endl;
}

int RecordContext::classcount=0;
