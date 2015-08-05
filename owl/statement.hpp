#include "url.hpp"

class Statement {
public:
  Statement(Uri & sub,Uri & pred,Uri & obj);
  Statement(Uri & sub,Uri & pred,const char * obj);
  Statement(Uri & sub,Uri & pred,bool obj);
  Statement(Uri & sub,Uri & pred,int obj); 
}; 
