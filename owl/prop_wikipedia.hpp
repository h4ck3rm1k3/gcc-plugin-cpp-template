#include "owl.hpp"
#include "rdfs.hpp"
#include "gcc.hpp"

namespace gcc 
{
  
class Wikipedia:public
  owl::ObjectProperty
{
public:
  static constexpr const ConstUri2 uri = ConstUri2(prefix,"wikipedia");
};

}
