#pragma once
#include <string>
#include "url.hpp"
#include "rdfs.hpp"
#include "rdf.hpp"
#include "statement.hpp"

namespace owl
{
  static constexpr const char *prefix = "http://www.w3.org/2002/07/owl#";

  class NamedIndividual
  {
    static constexpr const char *url = "NamedIndividual";
  public:
    static Uri uri;

    NamedIndividual (const char *name):name (name)
    {
    }

    // instance properties
    rdfs::label name;

    //Uri node_uri;
  };

  class Class
  {
  public:
    static constexpr const ConstUri2 uri = { prefix, "Class" };
    
    // create ontology
    template <class T> class Declaration
    {

    public:
      //constexpr Declaration(const char * obj)        :s1(ConstStatement(uri, rdf::type::uri, obj))      {      }
      
      //constexpr Declaration(Uri & obj)        :s1(ConstStatement(uri, rdf::type::uri, obj))      {      }

      Declaration()
      {
        Statement s1(T::url, rdf::type::url, uri);
      }

      
    };
    
  };

  class ObjectProperty
  {
  public:
    static constexpr const char *url = "ObjectProperty";
  };

  class topObjectProperty:public ObjectProperty
  {

  };


};
