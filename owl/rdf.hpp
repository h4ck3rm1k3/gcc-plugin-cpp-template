#pragma once
#include "url.hpp"

namespace rdf {
  static constexpr const char * prefix = "http://www.w3.org/1999/02/22-rdf-syntax-ns#";
  class type {
  public:
    static constexpr const char * url = "type";

    static Uri uri;
    
  };
};

Uri rdf::type::uri = Uri(prefix,url);
