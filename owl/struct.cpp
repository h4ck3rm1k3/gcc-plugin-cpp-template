#include "struct.hpp"

//#include <gcc-plugin.h>
//#include <coretypes.h>
//#include <tree.h>
#include "rdf.hpp"
//#include "record_context.hpp"
//#include "field.hpp"// from parent dir

namespace gcc
{

    template < class T > Struct::FieldDecl::FieldDecl (T fld,
						       Struct *
						       parent):name (fld.
								     name),
    bit_field (fld.bit_field), offset (fld.offset),
    bit_offset (fld.bit_offset), bit_size (fld.bit_size)
  {

    if (fld.name)
      {
	std::cerr << "StructField NAME:" << fld.name << endl;
	Uri node_uri (std::string (std::string (doc_url) +
				   std::string ("struct/") +
				   std::string (parent->name) +
				   std::string ("/field/") +
				   std::string (name)).c_str ());
	  std::cerr << "StructField URI:" << node_uri.c_str () << endl;
	Uri li = LocalUrl (Struct::FieldDecl::uri).uri ();
	Statement s1 (node_uri, rdf::type::url, li);
	Statement s2 (node_uri, rdfs::label::url, name);
	Statement s3 (node_uri, Struct::FieldProperty::uri, parent->node_uri);

	//(fld.bit_field),
	Statement s_bit_field (node_uri, bit_field.get_url (),
			       bit_field.get_val ());
	//offset(fld.offset),
	Statement s_offset (node_uri, offset.get_url (), offset.get_val ());
	//bit_offset(fld.bit_offset),
	Statement s_bitoffset (node_uri, bit_offset.get_url (),
			       bit_offset.get_val ());
	//bit_size(fld.bit_size)
	Statement s_bitsize (node_uri, bit_size.get_url (),
			     bit_size.get_val ());
      }
  }
  




  Struct::Struct (const char *name):name (name)
    {
      if (name)
        {
          std::cerr << "Struct NAME:" << name << endl;
          std::string node_instance = std::string (std::string (doc_url) +
                                                   std::string ("struct/") +
                                                   std::string (name));
          std::cerr << "URL:" << node_instance << endl;
          node_uri = node_instance.c_str ();
          Statement s1 (node_uri, rdf::type::url, Struct::url);
          Statement s2 (node_uri,
                        rdfs::label::url,
                        name);
        }
    }

  template < class T > void Struct::field_begin (T fld)
    {
      FieldDecl f (fld, this);
    }

  constexpr ConstUri2 gcc::Struct::url;

  constexpr ConstUri2 gcc::Struct::standard;
  constexpr ConstUri2 gcc::CStandard::uri;
  owl::Class::Declaration<Struct> gcc::Struct::declaration;

  static const Statement s1( gcc::Struct::uri,
                                       gcc::CStandard::uri,
                                       gcc::Struct::standard);
  
}
