
#include "tcwrapper.hpp"
class TC_DO_STMT : public TCWrapper<DO_STMT> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
