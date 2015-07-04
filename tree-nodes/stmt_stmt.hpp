
#include "tcwrapper.hpp"
class TC_STMT_STMT : public TCWrapper<STMT_STMT> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
