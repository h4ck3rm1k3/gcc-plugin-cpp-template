
#include "tcwrapper.hpp"
class TC_CILK_SYNC_STMT : public TCWrapper<CILK_SYNC_STMT> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
