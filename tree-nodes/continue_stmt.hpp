
#include "tcwrapper.hpp"
class TC_CONTINUE_STMT : public TCWrapper<CONTINUE_STMT> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
