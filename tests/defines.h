template <class F> void define_generic_class_name(const char * name){
  //const F * p =0;
}


/* template <class F> class define_generic_field { */
/*  public: */
/*   //const F & data; */
/*   define_generic_field(F, const char * name, const int a,const int b, const int c, const int d ); */
/* }; */

template <class F> void define_generic_field (F, const char * name, const int a,const int b, const int c, const int d ) {}

template <class F> void define_generic_bitfield (const char * name, const int a,const int b, const int c, const int d ) {};
