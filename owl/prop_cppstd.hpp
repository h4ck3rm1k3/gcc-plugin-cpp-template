#include "property.hpp"
#include "rdfs.hpp"

class CStandard:public
  owl::topObjectProperty
{
public:
  static constexpr const
    rdfs::label
    label = "cppstd";
  const char *
    url;
  constexpr
  CStandard (const char *v):
  url (v)
  {
  }
};
