
#include "protocol_interface_type.hpp"
TC_PROTOCOL_INTERFACE_TYPE aPROTOCOL_INTERFACE_TYPE;

void
TC_PROTOCOL_INTERFACE_TYPE::finish_type (tree t)
{
  cerr << "finish_type: PROTOCOL_INTERFACE_TYPE" << t << endl;
};

void
TC_PROTOCOL_INTERFACE_TYPE::finish_decl (tree t)
{
  cerr << "finish_decl: PROTOCOL_INTERFACE_TYPE" << t << endl;
};

void
TC_PROTOCOL_INTERFACE_TYPE::finish_unit (tree t)
{
  cerr << "finish_unit: PROTOCOL_INTERFACE_TYPE" << t << endl;
};
