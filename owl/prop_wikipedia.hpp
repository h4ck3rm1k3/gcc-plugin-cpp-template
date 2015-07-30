#include "property.hpp"
#include "rdfs.hpp"

class Wikipedia : public owl::topObjectProperty {
public:
  static constexpr const rdfs::label label = "wikipedia";
  // static constexpr const rdfs::subPropertyOf subproperty();
  
  const char * url;
  constexpr Wikipedia (const char * v) : url(v) {}
};
