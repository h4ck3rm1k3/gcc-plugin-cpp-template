
#include "tcwrapper.hpp"
class TC_CONSTRUCTOR : public TCWrapper<CONSTRUCTOR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
