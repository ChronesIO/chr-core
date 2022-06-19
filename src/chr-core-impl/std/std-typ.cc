#pragma once

#include <typeinfo>

#include "./std-any.cc"
#include "./std-int.cc"
#include "./std-str.cc"

namespace chr
{
    using Hash = ULong;
    using hash = Hash;

    using Type = std::type_info;
    using type = Type;

    using TypeRef = const Type&;
    using type_ref = TypeRef;

    template <class T> auto TypeHash() -> Hash { return typeid(T).hash_code(); }
    template <class T> auto typeh() -> hash { return typeid(T).hash_code(); }

    template <class T> auto TypeName() -> String { return typeid(T).name(); }
    template <class T> auto typen() -> str { return typeid(T).name(); }
}