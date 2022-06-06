#pragma once

#include <typeinfo>

#include "./std-int.cc"

namespace chr
{
    using Hash = ULong;
    using hash = Hash;

    inline auto typeh(const std::type_info &t) -> Hash
    { return t.hash_code(); }
}