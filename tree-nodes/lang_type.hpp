
#include "tcwrapper.hpp"
class TC_LANG_TYPE : public TCWrapper<LANG_TYPE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
