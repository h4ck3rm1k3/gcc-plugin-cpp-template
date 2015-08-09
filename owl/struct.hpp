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
#include "gcc.hpp"

namespace gcc
{
  
  class LocalUri
  {
    const char * _uri;
  public:
    constexpr LocalUri (const char *uri):_uri (uri)
    {
    }
    
    const char *c_str () const
    {
      return std::string (std::string (prefix.c_str()) + std::string (_uri)).c_str ();
    }
    
    Uri uri () const
    {
      return Uri (std::
		  string (std::string (prefix.c_str()) + std::string (_uri)).c_str ());
    }
  };

  template < class T, const char *N > class SimpleProperty:owl::ObjectProperty
  {
    T val;
  public:
      SimpleProperty (T v):val (v)
    {
    }

    const char *get_name () const
    {
      return N;
    }
    T get_val ()
    {
      return val;
    }
    //    const Uri & get_uri ()    {      return uri;    }
    static constexpr const ConstUri2 name = ConstUri2(prefix,N);

  };

  class Struct:public owl::Class
  {

  public: // static owl ontology section

    static constexpr ConstUri2 uri = ConstUri2(prefix,"record_type");
    
    static constexpr const TConstStatement1 standard =
      TConstStatement1(uri,
                       gcc::CStandard::uri,
                       "http://c0x.coding-guidelines.com/6.7.2.1.html");
    
    static constexpr const TConstStatement1 description =
      TConstStatement1(uri,
                       dc::description::uri,
                       "A C language structure");


    static Declaration<Struct,owl::Class> declaration;   

  public: // dynamic property section
    Uri node_uri;
    rdfs::label name;

  public: //
        
    class FieldProperty:public owl::ObjectProperty
    {
      // struct_of_field_property
    public:
      static constexpr const ConstUri2 uri = ConstUri2(prefix, "field_struct_property");
    };

    class FieldDecl:public owl::Class
    {
    public:
      rdfs::label name;
      static constexpr const char *uri = "field_decl";	// The type of the item
      static constexpr const char bit_field_str[] = "bit_field";
        SimpleProperty < bool, bit_field_str > bit_field;
      static constexpr const char bit_offset_str[] = "bit_offset";
        SimpleProperty < int, bit_offset_str > bit_offset;
      static constexpr const char bit_size_str[] = "bit_size";
        SimpleProperty < int, bit_size_str > bit_size;
      static constexpr const char offset_str[] = "offset_str";
        SimpleProperty < int, offset_str > offset;

      //template < class T > FieldDecl (T fld, Struct * parent);
      template < class T > FieldDecl (T fld,
                                      Struct *
                                      parent):name (fld.
                                                    name),
                                              bit_field (fld.bit_field), offset (fld.offset),
                                              bit_offset (fld.bit_offset), bit_size (fld.bit_size)
      {
        
        if (fld.name)
          {
            std::cerr << "StructField NAME:" << fld.name << endl;
            Uri node_uri (std::string (std::string (doc_uri) +
                                       std::string ("struct/") +
                                       std::string (parent->name) +
                                       std::string ("/field/") +
                                       std::string (name)).c_str ());
            std::cerr << "StructField URI:" << node_uri.c_str () << endl;
            Uri li = LocalUri (Struct::FieldDecl::uri).uri ();
            Statement s1 (node_uri, rdf::type::uri, li);
            Statement s2 (node_uri, rdfs::label::uri, name);
            Statement s3 (node_uri, Struct::FieldProperty::uri, parent->node_uri);
            
            //(fld.bit_field),
            Statement s_bit_field (node_uri, bit_field.name,
                                   bit_field.get_val ());
            //offset(fld.offset),
            Statement s_offset (node_uri, offset.name, offset.get_val ());
            //bit_offset(fld.bit_offset),
            Statement s_bitoffset (node_uri, bit_offset.name,
                                   bit_offset.get_val ());
            //bit_size(fld.bit_size)
            Statement s_bitsize (node_uri, bit_size.name,
                                 bit_size.get_val ());
          }
      }
    };
  public:
    Struct (const char *name);
    template < class T > void field_begin (T fld);
  };
};
