#pragma once

#if __has_include(<format>)

#include <format>

#include "./std-str.cc"

namespace chr
{
    template <class... TArgs> auto Format(TArgs&&... args) -> decltype(std::format(args...))
    {
        return std::format(args...);
    }

    template <class... TArgs> auto fmt(TArgs&&... args) -> decltype(std::format(args...))
    {
        return std::format(args...);
    }
}

#endif