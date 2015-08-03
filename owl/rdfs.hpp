#pragma once
namespace rdfs {
  static constexpr const char * prefix = "http://www.w3.org/2000/01/rdf-schema#";
      
  class subPropertyOf {};
  class label {
    const char * value;
  public:
    constexpr label (const char * v) : value(v) {}
    operator const char * () const  {
      return value;
    }
  };

};
