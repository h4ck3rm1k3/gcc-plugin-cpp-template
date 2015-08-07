
#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "cp/cp-tree.h"
#include "namespace_decl.hpp"

void
TC_NAMESPACE_DECL::finish_unit (tree t)
{

  tree a = DECL_NAMESPACE_ALIAS (t);
  if (a)
    call_type_ret < CallBack, int >(a, CallBack::finish_unit_callback);

  tree n = NAMESPACE_LEVEL (t)->names;
  n = TREE_CHAIN (n);
  while (n)
    {
      call_type_ret < CallBack, int >(n, CallBack::finish_unit_callback);
      n = TREE_CHAIN (n);
    }
}

TC_NAMESPACE_DECL a;
