#pragma once
#include "url.hpp"
#include "rdf.hpp"
#include "rdfs.hpp"
#include "librdfinterface.hpp"

librdf_node * node_create_from_uri (librdf_uri * uri);
librdf_node * node_create_from_string (const char *s);

class Statement
{
public:
  template<class S, class P, class O> Statement (const S & sub, const P & pred, const O & obj){
    librdf_statement *st;
    st = librdf_new_statement (rdf_world::get_world ());
    //cerr << "statement(sub:" << sub << " pred:" << pred << " obj:" << obj << endl;
    librdf_statement_set_subject (st, sub.get_node ());
    librdf_statement_set_predicate (st, pred.get_node ());
    librdf_statement_set_object (st, obj.get_node ());
    librdf_model_add_statement (rdf_world::get_model (), st);
  }
  template <class T> Statement (T &);
};


class ConstStatement{
  const ConstUri2& s;
  const ConstUri2& p;
  const ConstUri2& o;
public:
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
