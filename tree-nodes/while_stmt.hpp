
#include "tcwrapper.hpp"
class TC_WHILE_STMT : public TCWrapper<WHILE_STMT> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
