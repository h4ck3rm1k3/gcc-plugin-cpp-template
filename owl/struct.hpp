/*
  rdf wrapper for gcc record_types and field_decls
*/

#include "prop_wikipedia.hpp"
#include "prop_cppstd.hpp"
#include "dc.hpp"
#include "rdfs.hpp"
#include "owl.hpp"
#include <vector>
#include <iostream>
#include <strstream>
#include "librdfinterface.hpp"
#include "statement.hpp"

namespace gcc {
  static constexpr const char * prefix =
    "http://intros5r.com/2015/08/gcc-plugin.rdf#";

  template <class T, const char * N> class SimpleProperty {
    T val;
  public:
    SimpleProperty(T v): val(v) {}

    const char * get_name() const {
      return N;
    }
    T get_val() {
      return val;
    }
    Uri&  get_url() {
      return url;
    }
    static constexpr const char * name = N;
    static Uri url;
  };

  class Struct : public owl::NamedIndividual {

  public:
    Uri node_uri;
    static constexpr const CStandard standard = \
      "http://c0x.coding-guidelines.com/6.7.2.1.html";

    static constexpr const dc::description description=\
      "A C language structure";

    class FieldProperty {
      // struct_of_field_property
    public:
      static constexpr const char * field = "field_struct_property";
      static Uri uri; // the pointer from the field to the structure
    };

    class FieldDecl : public owl::NamedIndividual {
    public:
      static constexpr const char bit_field_str[]= "bit_field";
      SimpleProperty<bool,bit_field_str> bit_field;
      static constexpr const char bit_offset_str[]= "bit_offset";
      SimpleProperty<int,bit_offset_str>  bit_offset;
      static constexpr const char bit_size_str[]= "bit_size";
      SimpleProperty<bool,bit_size_str> bit_size;
      static constexpr const char offset_str[]= "offset_str";
      SimpleProperty<int,offset_str>  offset;

      template <class T> FieldDecl (T fld, Struct * parent);
    };


  public :
    Struct (const char * name);
    template <class T> void field_begin(T fld);

};

};
