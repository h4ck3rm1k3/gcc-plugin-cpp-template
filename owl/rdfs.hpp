#pragma once
#include "url.hpp"
namespace rdfs
{
  static constexpr const char *prefix =
    "http://www.w3.org/2000/01/rdf-schema#";

  class subPropertyOf
  {
      static constexpr const ConstUri2 uri = ConstUri2(prefix,"subPropertyOf");
  };
  
  class label
  {
    const char *value;
  public:
      constexpr label (const char *v):value (v)
    {
    }
    operator   const char *() const
    {
      return value;
    }
    
    static constexpr const ConstUri2 uri = ConstUri2(prefix,"label");

    librdf_node * get_node() const {
      librdf_node *node;
      node = librdf_new_node_from_literal (rdf_world::get_world (),
                                           (const unsigned char *) value, 0, 0);
      return node;
    }

  };
};
