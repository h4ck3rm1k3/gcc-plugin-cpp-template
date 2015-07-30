#pragma once
namespace rdfs {

  class subPropertyOf {};
  class label {
    const char * value;
  public:
    constexpr label (const char * v) : value(v) {}
  };

};
