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


  template < class T> class SimpleProperty:
    public owl::ObjectProperty
  {
  protected:
    T val;
  public:
    SimpleProperty (T v):val (v)
    {
    }

    T get_val ()
    {
      return val;
    }
    //static constexpr const ConstUri2 uri = ConstUri2(prefix,N);
    //static Declaration<SimpleProperty<T,N>,owl::ObjectProperty> declaration;

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
      static Declaration<FieldProperty,owl::ObjectProperty> declaration;
    };

    class FieldDecl:public owl::Class
    {
    public:
      rdfs::label name;


      static constexpr const ConstUri2 uri = ConstUri2(prefix, "field_decl");	// The type of the item

      class BitField : public SimpleProperty < bool>
      {
      public:
        BitField(bool v):
          SimpleProperty< bool > (v)
        {
        }

        static constexpr const ConstUri2 uri = ConstUri2(prefix, "bit_field");	// The type of the item
        static Declaration<BitField,owl::ObjectProperty> declaration;

        librdf_node * get_node() const
        {
          if (val)
            {
              return node_create_from_string ("True");
            }
          else
            {
              return node_create_from_string ("False");
            }
        }


      } bit_field;

      class BitOffset : public SimpleProperty < int>
      {
      public:
        BitOffset(int v):
          SimpleProperty< int > (v)
        {
        }

        librdf_node * get_node() const
        {
          return node_create_from_string (std::to_string(val).c_str());
        }


        static constexpr const ConstUri2 uri = ConstUri2(prefix, "bit_offset");	// The type of the item
        static Declaration<BitOffset,owl::ObjectProperty> declaration;
      } bit_offset;

      class BitSize : public SimpleProperty < int >
      {
      public:
        BitSize(int v):
          SimpleProperty< int > (v)
        {
        }
        static constexpr const ConstUri2 uri = ConstUri2(prefix, "bit_size");	// The type of the item
        static Declaration<BitSize,owl::ObjectProperty> declaration;
        librdf_node * get_node() const
        {
          return node_create_from_string (std::to_string(val).c_str());
        }

      } bit_size;

      class Offset : public SimpleProperty < int >
      {
      public:
        Offset(int v):
          SimpleProperty< int > (v)
        {
        }
        static constexpr const ConstUri2 uri = ConstUri2(prefix, "offset");	// The type of the item
        static Declaration<Offset,owl::ObjectProperty> declaration;
        librdf_node * get_node() const
        {
          return node_create_from_string (std::to_string(val).c_str());
        }
      } offset;

      static Declaration<FieldDecl,owl::Class> declaration;

      template < class T > FieldDecl (T fld,
                                      Struct *
                                      parent):name (fld.
                                                    name),
                                              bit_field (fld.bit_field),
                                              offset (fld.offset),
                                              bit_offset (fld.bit_offset),
                                              bit_size (fld.bit_size)
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
            Statement s1 (node_uri, rdf::type::uri, Struct::FieldDecl::uri);
            Statement s2 (node_uri, rdfs::label::uri, name);
            Statement s3 (node_uri, Struct::FieldProperty::uri, parent->node_uri);
            Statement s_bit_field (node_uri, BitField::uri, bit_field);
            Statement s_offset (node_uri, Offset::uri, offset);
            Statement s_bitoffset (node_uri, BitOffset::uri,bit_offset);
            Statement s_bitsize (node_uri, BitSize::uri,bit_size);
          }
      }
    };
  public:
    Struct (const char *name);
    template < class T > void field_begin (T fld);
  };
};
