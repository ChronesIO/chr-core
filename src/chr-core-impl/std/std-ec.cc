#pragma once

#include <utility>

namespace chr
{
    template <class T, class U = T>
    constexpr T ec(T& obj, U&& value) noexcept(
        std::is_nothrow_move_constructible_v<T>&& std::is_nothrow_assignable_v<T&, U>)
    {
        return std::exchange(obj, value);
    }
}