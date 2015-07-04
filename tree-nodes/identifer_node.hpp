#include "tcwrapper.hpp"

class TC_IDENTIFIER_NODE  : public TCWrapper<IDENTIFIER_NODE>{
public:
  const char * id_str(tree_node * t);
  const char * id(tree_node * t);
};
