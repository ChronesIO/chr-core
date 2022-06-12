#pragma once

#include <variant>

namespace chr
{
    template <class... TArgs> using Variant = std::variant<TArgs...>;
    template <class... TArgs> using vri = Variant<TArgs...>;
}