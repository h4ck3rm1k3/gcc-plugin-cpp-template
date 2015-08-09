#include <string>
#include <iostream>
#include "url.hpp"
#include "librdfinterface.hpp"

Uri::Uri (const char *url):
uri (0)
{
  if (url)
    {
      std::cerr << "URI:" << url << std::endl;
      uri =
	librdf_new_uri (rdf_world::get_world (), (const unsigned char *) url);
    }
  else
    {
      std::cerr << "URI: NULL!" << std::endl;
    }
}

Uri::Uri ():uri (0)
{
}

Uri::Uri (const char *base, const char *url):
uri (0)
{
  if (base && url)
    {
      std::string s (std::string (base) + std::string (url));
      std::cerr << "URI:" << s.c_str () << std::endl;
      uri =
	librdf_new_uri (rdf_world::get_world (),
			(const unsigned char *) (s.c_str ()));
    }
  else
    {
      std::cerr << "URI and BASE NULL!" << std::endl;
    }
}

Uri::~Uri ()
{
  if (uri)
    {
      librdf_free_uri (uri);
    }
}

librdf_uri * Uri::get_uri () const
{
  return uri;
}

Uri & Uri::operator = (const char *url)
{
  if (uri)
    {
      librdf_free_uri (uri);
    }
  uri = librdf_new_uri (rdf_world::get_world (), (const unsigned char*)url);
  return *this;
}

librdf_uri * ConstUri2::get_uri () const
{
  return librdf_new_uri (rdf_world::get_world (),
                        (const unsigned char*)std::string(std::string(prefix) + std::string(path)).c_str());
}

librdf_uri * ConstUri::get_uri () const
{
  return librdf_new_uri (rdf_world::get_world (),
                        (const unsigned char*)std::string(uri).c_str());
}

const char * ConstUri2::c_str () const
{
  return std::string(std::string(prefix) + std::string(path)).c_str();
}


std::ostream& operator<< (std::ostream& os, const ConstUri2& o)
{
  os << o.c_str();
  return os;
}

std::ostream& operator<< (std::ostream& os, const Uri & o)
{
  os << o.c_str();
  return os;
  
}
