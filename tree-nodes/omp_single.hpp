
#include "tcwrapper.hpp"
class TC_OMP_SINGLE : public TCWrapper<OMP_SINGLE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
