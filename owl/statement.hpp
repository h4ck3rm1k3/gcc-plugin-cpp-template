#pragma once
#include "url.hpp"

class Statement
{
public:
  Statement (const Uri & sub, const Uri & pred, const Uri & obj);
  Statement (const Uri & sub, const Uri & pred, const char *obj);
  Statement (const Uri & sub, const Uri & pred, bool obj);
  Statement (const Uri & sub, const Uri & pred, int obj);
  Statement (const Uri & sub, const ConstUri2 & pred, const ConstUri2 &obj);
  Statement (const ConstUri2&s,
             const ConstUri2&p,
             const ConstUri2&o);
  //  Statement (const Uri & sub, const ConstUri2 & pred, const ConstUri &obj);
};


class ConstStatement{
  const ConstUri2& s;
  const ConstUri2& p;
  const ConstUri2& o;
public:
  //constexpr ConstStatement(const ConstUri&, Uri&, const char*&) {}
  //constexpr ConstStatement(const ConstUri&, const ConstUri&, const ConstUri&) {}
  constexpr ConstStatement(const ConstUri2&s,
                           const ConstUri2&p,
                           const ConstUri2&o):s(s),p(p),o(o)
  {    
  }
};
