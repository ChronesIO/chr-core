#pragma once

#include <functional>

namespace chr
{
    template <class TRet, class... TArgs> using Func = std::function<TRet(TArgs...)>;
    template <class TRet, class... TArgs> using func = Func<TRet, TArgs...>;

    template <class TSig> using Func2 = std::function<TSig>;
    template <class TSig> using func2 = Func<TSig>;

    template <class... TArgs> using Action = Func<void, TArgs...>;
    template <class... TArgs> using action = Action<TArgs...>;

    template <class T> using Predicate = Func<bool, T>;
    template <class T> using predicate = Predicate<T>;

    template <class T, class TClass>
    auto MemberFunc(T TClass::*f) noexcept
        -> std::invoke_result_t<decltype(&std::mem_fn<T, TClass>), decltype(std::forward<T TClass::*>(f))>
    {
        return std::mem_fn(std::forward<T TClass::*>(f));
    }

    template <class T, class TClass>
    auto func_mem(T TClass::*f) noexcept
        -> std::invoke_result_t<decltype(&std::mem_fn<T, TClass>), decltype(std::forward<T TClass::*>(f))>
    {
        return std::mem_fn(std::forward<T TClass::*>(f));
    }
}