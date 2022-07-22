#pragma once

#include <type_traits>

namespace chr
{
    template <class T1, class T2> constexpr bool IsSame = std::is_same_v<T1, T2>;

    template <class T> constexpr bool IsVoid = std::is_void_v<T>;
    template <class T> constexpr bool IsNullPtr = std::is_null_pointer_v<T>;
    template <class T> constexpr bool IsIntegral = std::is_integral_v<T>;
    template <class T> constexpr bool IsFloat = std::is_floating_point_v<T>;
    template <class T> constexpr bool IsArray = std::is_array_v<T>;
    template <class T> constexpr bool IsEnum = std::is_enum_v<T>;
    template <class T> constexpr bool IsUnion = std::is_union_v<T>;
    template <class T> constexpr bool IsClass = std::is_class_v<T>;
    template <class T> constexpr bool IsFunc = std::is_function_v<T>;
    template <class T> constexpr bool IsPtr = std::is_pointer_v<T>;

    template <bool T1, class T2> using EnableIf = std::enable_if_t<T1, T2>;

    template <class T, class TClass> constexpr bool Inherits = std::is_base_of_v<TClass, T>;
}