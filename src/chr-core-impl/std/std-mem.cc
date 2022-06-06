#pragma once

#include <memory>

namespace chr
{
    template<class T> using SharedPtr = std::shared_ptr<T>;
    template<class T> using WeakPtr = std::weak_ptr<T>;
    template<class T> using UniquePtr = std::unique_ptr<T>;

    template<class T> using sp = SharedPtr<T>;
    template<class T> using wp = WeakPtr<T>;
    template<class T> using up = UniquePtr<T>;

    template<class T, class... TArgs>
    auto sp_new(TArgs &&... args) -> SharedPtr<T>
    { return std::make_shared<T>(std::forward<TArgs>(args)...); }

    template<class T, class... TArgs>
    auto up_new(TArgs &&... args) -> UniquePtr<T>
    { return std::make_unique<T>(std::forward<TArgs>(args)...); }
}