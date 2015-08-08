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

namespace gcc
{
  constexpr const ConstUri prefix =
    "http://intros5r.com/2015/08/gcc-plugin.rdf#";
  
  constexpr const ConstUri doc_url =
    "http://intros5r.com/2015/08/example.rdf#";

  class LocalUrl
  {
    const char *url;
  public:
      constexpr LocalUrl (const char *url):url (url)
    {
    }
    const char *c_str () const
    {
      return std::string (std::string (prefix.c_str()) + std::string (url)).c_str ();
    }
    Uri uri () const
    {
      return Uri (std::
		  string (std::string (prefix.c_str()) + std::string (url)).c_str ());
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
    Uri & get_url ()
    {
      return url;
    }
    static constexpr const ConstUri2 name = ConstUri2(prefix,N);

  };

  class Struct:public owl::Class
  {

  public:
    Uri node_uri;
    rdfs::label name;
    static constexpr const
      CStandard standard = "http://c0x.coding-guidelines.com/6.7.2.1.html";

    static constexpr const dc::description description =
      "A C language structure";

    //static constexpr ConstUri2 url = ConstUri2(prefix,"record_type");
    static constexpr ConstUri2 gcc_url = {prefix,"record_type"};
    
    //static constexpr const owl::Class::Declaration declaration = { Struct::uri };
    
    class FieldProperty:public owl::ObjectProperty
    {
      // struct_of_field_property
    public:
      static constexpr const ConstUri2 uri = {prefix, "field_struct_property"};

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

        template < class T > FieldDecl (T fld, Struct * parent);
    };


  public:  

    /*
      if I add this to the c file then I get a linker error
     */
    Struct (const char *name):name (name)
    {
      if (name)
        {
          std::cerr << "Struct NAME:" << name << endl;
          std::string node_instance = std::string (std::string (doc_url) +
                                                   std::string ("struct/") +
                                                   std::string (name));
          std::cerr << "URL:" << node_instance << endl;
          node_uri = node_instance.c_str ();
          Statement s1 (node_uri, rdf::type::url, Struct::gcc_url);
          Statement s2 (node_uri,
                        rdfs::label::url,
                        name);
        }
    }

      template < class T > void field_begin (T fld);

  };


};
