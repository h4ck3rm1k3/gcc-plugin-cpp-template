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
};


class ConstStatement{
public:
  //constexpr ConstStatement(const ConstUri&, Uri&, const char*&) {}
  constexpr ConstStatement(const ConstUri&, const ConstUri&, const ConstUri&) {}
  constexpr ConstStatement(const ConstUri&, const ConstUri2&, const ConstUri&) {}
};
