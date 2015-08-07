#pragma once
#include "url.hpp"

namespace rdf
{
  static constexpr const ConstUri prefix =
    "http://www.w3.org/1999/02/22-rdf-syntax-ns#";
  class type
  {
  public:
    static constexpr const ConstUri2 url = ConstUri2(prefix, "type");

    //static Uri uri;

  };
};
