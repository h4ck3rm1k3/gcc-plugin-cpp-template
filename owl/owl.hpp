#pragma once
#include <string>
#include "url.hpp"
#include "rdfs.hpp"
#include "rdf.hpp"
#include "statement.hpp"

namespace owl
{
  static constexpr const ConstUri prefix = "http://www.w3.org/2002/07/owl#";

  class NamedIndividual
  {
    static constexpr const ConstUri2 uri = ConstUri2(prefix,"NamedIndividual");
  public:
    NamedIndividual (const char *name):name (name)
    {
    }

    // instance properties
    rdfs::label name;
  };

  class Class
  {
  public:
    static constexpr const ConstUri2 uri = ConstUri2( prefix, "Class" );    
  };

  class ObjectProperty
  {
  public:
    static constexpr const ConstUri2 uri = ConstUri2( prefix, "ObjectProperty" );
  };

};
