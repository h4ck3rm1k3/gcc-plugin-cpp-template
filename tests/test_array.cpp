struct struct_with_array_fields {
  char ca[100];
  signed char sca[100];
  unsigned char uca[100];

  const char * cpa[100];
  const signed char * scpa[100];
  const unsigned char * ucpa[100];

  char some_string[4]={'a','b','c',0};
  const char* some_string2="a string2";  
  int foo[1];
  int foo1[2];
  int foo2[4];
  int foo3[5];
  int foo4[2][2];
  int foo5[2][2][3];
  int*foo6[2][2][3];
};
