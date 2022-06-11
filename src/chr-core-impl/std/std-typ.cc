#pragma once

#include <typeinfo>

#include "./std-any.cc"
#include "./std-int.cc"
#include "./std-str.cc"

namespace chr
{
    using Hash = ULong;
    using hash = Hash;

    template <class T> auto TypeHash() -> Hash { return typeid(T).hash_code(); }
    template <class T> auto typeh() -> hash { return typeid(T).hash_code(); }

    inline auto TypeHash(const Any& a) -> Hash { return a.type().hash_code(); }
    inline auto typeh(const any& a) -> hash { return a.type().hash_code(); }

    template <class T> auto TypeName() -> String { return typeid(T).name(); }
    template <class T> auto typen() -> str { return typeid(T).name(); }

    inline auto TypeName(const Any& a) -> String { return a.type().name(); }
    inline auto typen(const any& a) -> str { return a.type().name(); }
}