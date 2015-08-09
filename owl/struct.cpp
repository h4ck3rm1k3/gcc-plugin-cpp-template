#include "struct.hpp"

//#include <gcc-plugin.h>
//#include <coretypes.h>
//#include <tree.h>
#include "rdf.hpp"
//#include "record_context.hpp"
//#include "field.hpp"// from parent dir

namespace gcc
{



  Struct::Struct (const char *name):name (name)
    {
      if (name)
        {
          std::cerr << "Struct NAME:" << name << endl;
          std::string node_instance = std::string (std::string (doc_uri) +
                                                   std::string ("struct/") +
                                                   std::string (name));
          std::cerr << "URL:" << node_instance << endl;
          node_uri = node_instance.c_str ();
          Statement s1 (node_uri, rdf::type::uri, Struct::uri);
          Statement s2 (node_uri,
                        rdfs::label::uri,
                        name);
        }
    }

  template < class T > void Struct::field_begin (T fld)
    {
      FieldDecl f (fld, this);
    }

  constexpr ConstUri2 gcc::Struct::uri;
  constexpr ConstUri2 gcc::Struct::FieldProperty::uri;

  //constexpr ConstUri2 gcc::Struct::standard;
  constexpr ConstUri2 gcc::CStandard::uri;

  constexpr TConstStatement1 gcc::Struct::standard;
  constexpr TConstStatement1 gcc::Struct::description;

  
  Declaration<Struct,owl::Class> gcc::Struct::declaration(standard,description);


}
