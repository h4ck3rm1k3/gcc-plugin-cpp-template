#include "property.hpp"
#include "rdfs.hpp"
#include "gcc.hpp"
#include "owl.hpp"

namespace gcc 
{
  
class CStandard
  : public owl::ObjectProperty
{
public:
  static constexpr const ConstUri2 uri = ConstUri2(prefix,"cppstd");
  static Declaration<CStandard,owl::ObjectProperty> declaration;   
};
  
}
