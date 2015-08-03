#include <string>
#include "url.hpp"
#include "librdfinterface.hpp"

Uri::Uri(const char * url) {
  uri=librdf_new_uri(rdf_world::get_world(), (const unsigned char*)url);
  }

Uri::Uri():uri(0) { }

Uri::Uri(const char * base, const char * url) {
  std::string s(base);
  s += std::string(url);
  uri=librdf_new_uri(rdf_world::get_world(), (const unsigned char*)(s.c_str()));
  }

Uri::~Uri() {
  if (uri) {
    librdf_free_uri(uri);
  }
  }

librdf_uri* Uri::get_uri() {
    return uri;
  }


Uri & Uri::operator = (const char * url) {
  if (uri) {
    librdf_free_uri(uri);
  }
  uri=librdf_new_uri(rdf_world::get_world(), (const unsigned char*)url);
}
