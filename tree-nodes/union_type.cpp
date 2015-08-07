#include "union_type.hpp"
TC_UNION_TYPE aTC_UNION_TYPE;

void
TC_UNION_TYPE::finish_type (tree t)
{
}

void
TC_UNION_TYPE::finish_decl (tree t)
{
  std::cerr << "TC_UNION_TYPE::finish_decl" << std::endl;
}

void
TC_UNION_TYPE::finish_unit (tree t)
{
}
