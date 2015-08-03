#include <string>

namespace owl {
  static constexpr const char * prefix = "http://www.w3.org/2002/07/owl#";
 
  class NamedIndividual {
    static constexpr const char * name = "NamedIndividual";
  public:
    static Uri uri;
  };
};

Uri owl::NamedIndividual::uri = Uri(prefix,name);
