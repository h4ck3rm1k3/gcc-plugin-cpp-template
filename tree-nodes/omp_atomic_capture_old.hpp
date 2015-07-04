
#include "tcwrapper.hpp"
class TC_OMP_ATOMIC_CAPTURE_OLD : public TCWrapper<OMP_ATOMIC_CAPTURE_OLD> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
