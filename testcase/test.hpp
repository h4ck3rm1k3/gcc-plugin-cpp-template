/*
  rdf wrapper for gcc record_types and field_decls
*/


class CU
{
  const char *u;
public:
  constexpr CU (const char *u) :u(u) {}
  constexpr const char *c_str () const { return u; } ;
  constexpr operator const char *  () const { return u; } ;
};

void test2 (const CU & r) ;

class S
{
public:
  static constexpr CU u = CU("foo"); // linker error
  /*
    when I use the u in the normal constructor in a separate file I get a linker error
  */
  S();     
};

class S1
{
public:
  static constexpr CU u = CU("foo");
  /*
    when I use the u in the inline constructor it finds it.
   */
  S1() 
  {
    test2(S::u);
  }

};

class S2
{
public:
  static constexpr const char * u = "foo";
  S2(); // with a simple class it is no problem.
};

