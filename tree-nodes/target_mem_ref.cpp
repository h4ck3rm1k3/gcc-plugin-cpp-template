
#include "target_mem_ref.hpp"
TC_TARGET_MEM_REF aTARGET_MEM_REF;

void
TC_TARGET_MEM_REF::finish_type (tree t)
{
  cerr << "finish_type: TARGET_MEM_REF" << t << endl;
};

void
TC_TARGET_MEM_REF::finish_decl (tree t)
{
  cerr << "finish_decl: TARGET_MEM_REF" << t << endl;
};

void
TC_TARGET_MEM_REF::finish_unit (tree t)
{
  cerr << "finish_unit: TARGET_MEM_REF" << t << endl;
};
