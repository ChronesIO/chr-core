#pragma once

#include <optional>
#include <type_traits>

namespace chr
{
    template <class T> using Nullable = typename std::optional<T>;
    template <class T> using nla = Nullable<T>;

    constexpr auto nl = std::nullopt;

    template <class T> const auto nlo = nla<T>(nl);

    template <class T> constexpr auto nlv(T&& v) -> decltype(nla<T>(std::forward<T>(v)))
    {
        return nla<T>(std::forward<T>(v));
    }
}