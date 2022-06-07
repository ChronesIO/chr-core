#pragma once

#include <limits>

namespace chr
{
    template <class T> constexpr bool IsSigned = std::numeric_limits<T>::is_signed;
    template <class T> constexpr bool IsUnsigned = !std::numeric_limits<T>::is_signed;
    template <class T> constexpr bool IsInteger = std::numeric_limits<T>::is_integer;
    template <class T> constexpr bool IsExact = std::numeric_limits<T>::is_exact;
    template <class T> constexpr bool HasInfinity = std::numeric_limits<T>::has_infinity;

    template <class T> constexpr T MinValue = std::numeric_limits<T>::min();
    template <class T> constexpr T MaxValue = std::numeric_limits<T>::max();
}