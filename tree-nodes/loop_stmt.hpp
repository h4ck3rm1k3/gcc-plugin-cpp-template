
#include "tcwrapper.hpp"
class TC_LOOP_STMT : public TCWrapper<LOOP_STMT> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
