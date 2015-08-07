
#include "tcwrapper.hpp"
class TC_MESSAGE_SEND_EXPR:public TCWrapper < MESSAGE_SEND_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
