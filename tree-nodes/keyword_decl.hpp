
#include "tcwrapper.hpp"
class TC_KEYWORD_DECL : public TCWrapper<KEYWORD_DECL> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
