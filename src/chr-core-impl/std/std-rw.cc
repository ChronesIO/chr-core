#pragma once

#include <functional>

namespace chr
{
    template <class T> using RefWrapper = std::reference_wrapper<T>;
    template <class T> using rw = RefWrapper<T>;
}