#pragma once

#include <any>

#include "./std-inl.cc"

namespace chr
{
    using Any = std::any;
    using any = Any;

    template <class T> auto AnyTo(Any& a) -> T { return std::any_cast<T>(std::forward<Any&>(a)); }
    template <class T> auto AnyTo(Any&& a) -> T { return std::any_cast<T>(std::forward<Any&&>(a)); }
    template <class T> auto AnyTo(const Any& a) -> T { return std::any_cast<T>(std::forward<const Any&>(a)); }
    template <class T> auto AnyTo(Any* a) noexcept -> T* { return std::any_cast<T>(std::forward<Any*>(a)); }
    template <class T> auto AnyTo(const Any* a) noexcept -> T*
    {
        return std::any_cast<T>(std::forward<const Any*>(a));
    }

    template <class T> auto any_to(any& a) -> T { return std::any_cast<T>(std::forward<any&>(a)); }
    template <class T> auto any_to(any&& a) -> T { return std::any_cast<T>(std::forward<any&&>(a)); }
    template <class T> auto any_to(const any& a) -> T { return std::any_cast<T>(std::forward<const any&>(a)); }
    template <class T> auto any_to(any* a) noexcept -> T* { return std::any_cast<T>(std::forward<any*>(a)); }
    template <class T> auto any_to(const any* a) noexcept -> T*
    {
        return std::any_cast<T>(std::forward<const any*>(a));
    }

    template <class T, class... TArgs> auto AnyNew(TArgs&&... args) -> Any
    {
        return std::make_any<T, TArgs...>(std::forward<TArgs>(args)...);
    }
    template <class T, class TI, class... TArgs> auto AnyNew(inl<TI> il, TArgs&&... args) -> Any
    {
        return std::make_any<T, TI, TArgs...>(std::forward<inl<TI>>(il), std::forward<TArgs>(args)...);
    }

    template <class T, class... TArgs> auto any_new(TArgs&&... args) -> any
    {
        return std::make_any<T>(std::forward<TArgs>(args)...);
    }
    template <class T, class TI, class... TArgs> auto any_new(inl<TI> il, TArgs&&... args) -> any
    {
        return std::make_any<T, TI>(std::forward<inl<TI>>(il), std::forward<TArgs>(args)...);
    }
}