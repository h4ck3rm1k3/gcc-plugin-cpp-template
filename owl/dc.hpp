#include "url.hpp"

namespace dc
{
  static constexpr ConstUri prefix = "http://purl.org/dc/elements/1.1/";
  
  class description
  {
  public:
    static constexpr ConstUri2 uri = ConstUri2(prefix, "description");
  };
}
