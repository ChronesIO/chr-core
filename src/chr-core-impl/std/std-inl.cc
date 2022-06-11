#pragma once

#include <initializer_list>

namespace chr
{
    template<class T> using InitList = std::initializer_list<T>;
    template<class T> using inl = InitList<T>;
}