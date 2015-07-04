
#include "tcwrapper.hpp"
class TC_CILK_SPAWN_STMT : public TCWrapper<CILK_SPAWN_STMT> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
