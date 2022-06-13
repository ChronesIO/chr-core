#pragma once

#include <functional>

namespace chr
{
    template <class T> using RefWrapper = std::reference_wrapper<T>;
    template <class T> using rw = RefWrapper<T>;

    template <class T> constexpr auto Ref(T& v) noexcept -> RefWrapper<T> { return std::ref(v); }
    template <class T> constexpr auto Ref(RefWrapper<T> v) noexcept -> RefWrapper<T> { return std::ref(v); }
    template <class T> void Ref(const T&&) = delete;

    template <class T> constexpr auto CRef(const T& v) noexcept -> RefWrapper<const T> { return std::cref(v); }
    template <class T> constexpr auto CRef(RefWrapper<T> v) noexcept -> RefWrapper<const T> { return std::cref(v); }
    template <class T> void CRef(const T&&) = delete;

    template <class T> constexpr auto ref(T& v) noexcept -> rw<T> { return std::ref(v); }
    template <class T> constexpr auto ref(rw<T> v) noexcept -> rw<T> { return std::ref(v); }
    template <class T> void ref(const T&&) = delete;

    template <class T> constexpr auto cref(const T& v) noexcept -> rw<const T> { return std::cref(v); }
    template <class T> constexpr auto cref(rw<T> v) noexcept -> rw<const T> { return std::cref(v); }
    template <class T> void cref(const T&&) = delete;
}