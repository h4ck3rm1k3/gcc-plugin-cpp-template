/*
*
*/
#include <iostream>
#include <stdio.h>
#include <gcc-plugin.h>
#include "tree.h"
#include "plugin-version.h"
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include <string.h>
#include "tree-pass.h"
#include "cp/name-lookup.h"

int x;

tree_code tc;

inline tree_code _TREE_CODE(tree NODE) {
  return (( tree_code) (NODE)->base.code);
}

inline void _TREE_SET_CODE(tree NODE, tree_code VALUE) {
  ((NODE)->base.code = (VALUE));
}

tree _TREE_CHECK(tree T,int CODE) {
  //TREE_CODE(T);
  return T;
}

inline tree _STRING_CST_CHECK(tree t) {
  return TREE_CHECK (t, STRING_CST);
};

inline int _TREE_STRING_LENGTH(tree NODE) {
  return (STRING_CST_CHECK (NODE)->string.length);
}

inline const char *  _TREE_STRING_POINTER(tree NODE) {
  return((const char *)(STRING_CST_CHECK (NODE)->string.str));
}

//tree_string string;
//inline const char * HT_STR(tree NODE) { return ((NODE)->str) };
#include <signal.h>

void _TREE_SET_CONSTANT(tree NODE) {
  NODE->base.constant_flag=1;  
}


void test1(tree identifier, int c){
  const char * name = "this is a name";
  //union tree_node node;
  //tree identifier = &node;
  //memset(identifier,0,sizeof(union tree_node));
  memset (identifier, 0, sizeof (struct tree_typed));
    
  _TREE_SET_CODE(identifier, STRING_CST);
  
  _TREE_SET_CONSTANT(identifier);

  //char * str = new char[255];
  sprintf(identifier->string.str,"test string %d endstring",c );
  int len = strlen(identifier->string.str);
  //memcpy(identifier->string.str, str, len);
  //identifier->string.str[len] = '\0';
  identifier->string.length = len;
  
  
}

int main(){

  const int count = 1024;
  union tree_node * nodes  = new union tree_node[count];
  
  //tree t;
  for (int i = 0; i < count; i++) {    
    test1(&nodes[i],i);
  }
  kill(getpid(), SIGQUIT); // now just kill the process and produce a normal core
  return 0;
}
