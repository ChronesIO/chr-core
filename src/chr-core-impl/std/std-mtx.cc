#pragma once

#include <mutex>

namespace chr
{
    using Mutex = std::mutex;
    using mtx = Mutex;

    using RecMutex = std::recursive_mutex;
    using mtx_rec = RecMutex;

    template <class T> using LockGuard = std::lock_guard<T>;

    using Lock = LockGuard<Mutex>;
    using lock = Lock;

    using RecLock = LockGuard<RecMutex>;
    using lock_rec = RecLock;

    const auto LockDefer = std::defer_lock;
    const auto lock_defer = LockDefer;

    const auto LockTry = std::try_to_lock;
    const auto lock_try = LockTry;

    const auto LockAdopt = std::adopt_lock;
    const auto lock_adopt = LockAdopt;
}