#pragma once
#include <string>
#include "url.hpp"
#include "rdfs.hpp"

namespace owl {
  static constexpr const char * prefix = "http://www.w3.org/2002/07/owl#";
 
  class NamedIndividual {
    static constexpr const char * url = "NamedIndividual";
  public:
    static Uri uri;

    NamedIndividual(const char * name)
      :name(name) {}
            
    // instance properties
    rdfs::label name;

    //Uri node_uri;
  };
};
