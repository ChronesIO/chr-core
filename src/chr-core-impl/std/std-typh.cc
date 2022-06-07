#pragma once

#include <typeinfo>

#include "./std-int.cc"

namespace chr
{
    using Hash = ULong;
    using hash = Hash;

    template <class T> auto TypeHash() -> Hash { return typeid(T).hash_code(); }
    template <class T> auto typeh() -> hash { return typeid(T).hash_code(); }
}