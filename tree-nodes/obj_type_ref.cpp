
#include "obj_type_ref.hpp"
TC_OBJ_TYPE_REF aOBJ_TYPE_REF;

void
TC_OBJ_TYPE_REF::finish_type (tree t)
{
  cerr << "finish_type: OBJ_TYPE_REF" << t << endl;
};

void
TC_OBJ_TYPE_REF::finish_decl (tree t)
{
  cerr << "finish_decl: OBJ_TYPE_REF" << t << endl;
};

void
TC_OBJ_TYPE_REF::finish_unit (tree t)
{
  cerr << "finish_unit: OBJ_TYPE_REF" << t << endl;
};
