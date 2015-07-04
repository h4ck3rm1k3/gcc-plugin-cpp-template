
#include "tcwrapper.hpp"
class TC_OMP_CLAUSE : public TCWrapper<OMP_CLAUSE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
