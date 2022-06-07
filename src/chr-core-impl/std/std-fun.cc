#pragma once

#include <functional>

namespace chr
{
    template<class TRet, class... TArgs> using Func = std::function<TRet(TArgs...)>;
    template<class TRet, class... TArgs> using func = Func<TRet, TArgs...>;

    template<class TSig> using Func2 = std::function<TSig>;
    template<class TSig> using func2 = Func<TSig>;

    template<class... TArgs> using Action = Func<void, TArgs...>;
    template<class... TArgs> using action = Action<TArgs...>;

    template<class T> using Predicate = Func<bool, T>;
    template<class T> using predicate = Predicate<T>;
}