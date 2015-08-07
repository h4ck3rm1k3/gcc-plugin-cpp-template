
#include "mem_ref.hpp"
TC_MEM_REF aMEM_REF;

void
TC_MEM_REF::finish_type (tree t)
{
  cerr << "finish_type: MEM_REF" << t << endl;
};

void
TC_MEM_REF::finish_decl (tree t)
{
  cerr << "finish_decl: MEM_REF" << t << endl;
};

void
TC_MEM_REF::finish_unit (tree t)
{
  cerr << "finish_unit: MEM_REF" << t << endl;
};
