#include <string>
#include "url.hpp"
#include "librdfinterface.hpp"

Uri::Uri(const char * url) {
  uri=librdf_new_uri(rdf_world::get_world(), (const unsigned char*)url);
  }

Uri::Uri(const char * base, const char * url) {
  std::string s(base);
  s += std::string(url);
  uri=librdf_new_uri(rdf_world::get_world(), (const unsigned char*)(s.c_str()));
  }

Uri::~Uri() {
    librdf_free_uri(uri);
  }

librdf_uri* Uri::get_uri() {
    return uri;
  }


