
#include "tcwrapper.hpp"
class TC_EXIT_STMT : public TCWrapper<EXIT_STMT> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
