/*
  
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
class Struct {

  static constexpr const CStandard standard = "http://c0x.coding-guidelines.com/6.7.2.1.html";
  static constexpr const dc::description description= "A C language structure";

  // instance properties
  rdfs::label name;


  template <class T, const char * N> class SimpleProperty {
    T val;
    //const char * name;
  public:
    SimpleProperty(T v): val(v) {}
  };
  class Field {
  public:

    static constexpr const char bit_field_str[]= "bit_field";
    SimpleProperty<bool,bit_field_str> bit_field;
    
    static constexpr const char bit_offset_str[]= "bit_offset";
    SimpleProperty<int,bit_offset_str>  bit_offset;

    static constexpr const char bit_size_str[]= "bit_size";
    SimpleProperty<bool,bit_size_str> bit_size;

    static constexpr const char offset_str[]= "offset_str";
    SimpleProperty<int,offset_str>  offset;

    template <class T> Field (T fld) :
      name(fld.name),
      bit_field(fld.bit_field),
      offset(fld.offset),
      bit_offset(fld.bit_offset),
      bit_size(fld.bit_size)
    {     
    }

    rdfs::label name;    
  };

  //std::vector<Field> fields;
public :
  Struct (const char * name) :
    name(name) {

    std::ostrstream ss;
    ss << "http://intros5r.com/struct/";
    ss << this;    
    std::string node_instance = ss.str();

    Uri node_uri(node_instance.c_str());
    Statement s(node_uri,rdf::type::uri,owl::NamedIndividual::uri);
  
    //ardf_context.
      // <http://webprotege.stanford.edu/RBhxcnBQl9lLJtsZM0XEPGH> rdf:type owl:NamedIndividual ;
      //                                                          rdfs:label "field1" .
  }

  template<class T> void field_begin(T fld) {
    Field f(fld);
  }
};
};
