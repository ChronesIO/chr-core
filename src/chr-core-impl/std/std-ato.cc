#pragma once

#include <atomic>

namespace chr
{
    template <class T> using Atomic = std::atomic<T>;
    template <class T> using ato = Atomic<T>;
}