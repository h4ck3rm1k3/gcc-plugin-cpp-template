#pragma once
#include "url.hpp"
#include "rdf.hpp"

class Statement
{
public:
  Statement (const Uri & sub, const Uri & pred, const Uri & obj);
  Statement (const Uri & sub, const Uri & pred, const char *obj);
  Statement (const Uri & sub, const Uri & pred, bool obj);
  Statement (const Uri & sub, const Uri & pred, int obj);
  Statement (const Uri & sub, const ConstUri2 & pred, const ConstUri2 &obj);
  Statement (const Uri & sub, const ConstUri2 & pred, const Uri &obj);
  Statement (const ConstUri2&s,
             const ConstUri2&p,
             const ConstUri2&o);

  template <class T> Statement (T &);
  //  Statement (const Uri & sub, const ConstUri2 & pred, const ConstUri &obj);
};


class ConstStatement{
  const ConstUri2& s;
  const ConstUri2& p;
  const ConstUri2& o;
public:
  //constexpr ConstStatement(const ConstUri&, Uri&, const char*&) {}
  //constexpr ConstStatement(const ConstUri&, const ConstUri&, const ConstUri&) {}
  constexpr ConstStatement(const ConstUri2&s,
                           const ConstUri2&p,
                           const ConstUri2&o):s(s),p(p),o(o)
  {    
  }
  
};

template <class S, class P, class O> class TConstStatement{
public:
  S s;
  P p;
  O o;
public:
  constexpr TConstStatement(S s,
                           P p,
                           O o):s(s),p(p),o(o)
  {    
  }
};


typedef TConstStatement<const ConstUri2 &,const ConstUri2 &,const char *> TConstStatement1;


// create ontology
template <class T, class Parent> class Declaration
{
  
public:
  //constexpr Declaration(const char * obj)        :s1(ConstStatement(uri, rdf::type::uri, obj))      {      }
  
  //constexpr Declaration(Uri & obj)        :s1(ConstStatement(uri, rdf::type::uri, obj))      {      }
  
  template <typename ... Arguments> Declaration()
  {
    Statement s1(T::uri, rdf::type::uri, Parent::uri);
  }
  
  template <typename A> Declaration(A a)
  {
    Statement s1(T::uri, rdf::type::uri, Parent::uri);
    Statement s2(a);        
  }
  
  template <typename A> Declaration(A a, A b)
  {
    Statement s1(T::uri, rdf::type::uri, Parent::uri);
    Statement s2(a);
    Statement s3(b);        
  }
  
  
};
