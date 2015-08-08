/*
  rdf wrapper for gcc record_types and field_decls
*/
#include "test.hpp"
#include <iostream>

void test2 (const CU & r) 
{
  std::cerr << r;
}

S::S() 
{
  test2(S::u);
}

S2::S2() 
{
  test2(S2::u);
}


int main () {
  S a;  
}
