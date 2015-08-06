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
  static constexpr const char * doc_url =
    "http://intros5r.com/2015/08/example.rdf#";

  class LocalUrl
  {
    const char * url;
  public:
    constexpr LocalUrl(const char * url)
      :url(url) {}
    const char * c_str() const{
      return std::string(std::string(prefix) + std::string(url)).c_str();
    }
    Uri uri() const{
      return Uri(std::string(std::string(prefix) + std::string(url)).c_str());
    }
  };

  template <class T, const char * N> class SimpleProperty : owl::ObjectProperty{
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

  class Struct : public owl::Class {

  public:
    Uri node_uri;
    rdfs::label name;
    static constexpr const CStandard standard = \
      "http://c0x.coding-guidelines.com/6.7.2.1.html";

    static constexpr const dc::description description=\
      "A C language structure";

    static constexpr const char * uri = "record_type"; // the type of the item

    class FieldProperty : public owl::ObjectProperty {
      // struct_of_field_property
    public:
      static constexpr const char * field = "field_struct_property";
      static Uri uri; // the pointer from the field to the structure
    };

    class FieldDecl : public owl::Class {
    public:
      rdfs::label name;
      static constexpr const char * uri = "field_decl"; // The type of the item
      static constexpr const char bit_field_str[]= "bit_field";
      SimpleProperty<bool,bit_field_str> bit_field;
      static constexpr const char bit_offset_str[]= "bit_offset";
      SimpleProperty<int,bit_offset_str>  bit_offset;
      static constexpr const char bit_size_str[]= "bit_size";
      SimpleProperty<int,bit_size_str> bit_size;
      static constexpr const char offset_str[]= "offset_str";
      SimpleProperty<int,offset_str>  offset;

      template <class T> FieldDecl (T fld, Struct * parent);
    };


  public :
    Struct (const char * name);
    template <class T> void field_begin(T fld);

};

};
