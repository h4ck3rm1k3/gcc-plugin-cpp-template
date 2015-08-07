#include "tcwrapper.hpp"
class TC_TRANSLATION_UNIT_DECL:public TCWrapper < TRANSLATION_UNIT_DECL >
{
public:
  TC_TRANSLATION_UNIT_DECL ();
  void finish_unit (tree t);
};
