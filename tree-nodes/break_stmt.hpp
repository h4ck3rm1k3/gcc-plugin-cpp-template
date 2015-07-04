
#include "tcwrapper.hpp"
class TC_BREAK_STMT : public TCWrapper<BREAK_STMT> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
