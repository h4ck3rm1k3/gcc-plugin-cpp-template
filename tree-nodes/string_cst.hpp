
#include "tcwrapper.hpp"
class TC_STRING_CST : public TCWrapper<STRING_CST> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
