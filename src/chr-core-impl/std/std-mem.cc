#pragma once

#include <memory>

namespace chr
{
    template <class T> using SharedPtr = std::shared_ptr<T>;
    template <class T> using WeakPtr = std::weak_ptr<T>;
    template <class T> using UniquePtr = std::unique_ptr<T>;

    template <class T> using sp = SharedPtr<T>;
    template <class T> using wp = WeakPtr<T>;
    template <class T> using up = UniquePtr<T>;

    template <class T> using SharedPtrRef = const SharedPtr<T>&;
    template <class T> using WeakPtrRef = const WeakPtr<T>&;
    template <class T> using UniquePtrRef = const UniquePtr<T>&;

    template <class T> using sp_ref = SharedPtrRef<T>;
    template <class T> using wp_ref = WeakPtrRef<T>;
    template <class T> using up_ref = UniquePtrRef<T>;

    template <class T> struct SharedObj : std::enable_shared_from_this<T>
    {
        CHR_PROP(get = GetSharedSelf)
        SharedPtr<T> SharedSelf;
        CHR_ND auto GetSharedSelf() -> SharedPtr<T> { return this->shared_from_this(); }
        CHR_ND auto GetSharedSelf() const -> SharedPtr<T> { return this->shared_from_this(); }

        CHR_PROP(get = GetSharedSelf)
        sp<T> sp_self;

        CHR_PROP(get = GetWeakSelf)
        WeakPtr<T> WeakSelf;
        CHR_ND auto GetWeakSelf() noexcept -> WeakPtr<T> { return this->weak_from_this(); }
        CHR_ND auto GetWeakSelf() const noexcept -> WeakPtr<T> { return this->weak_from_this(); }

        CHR_PROP(get = GetWeakSelf)
        wp<T> wp_self;
    };
    template <class T> using sp_obj = SharedObj<T>;

    template <class T, class... TArgs> auto SharedNew(TArgs&&... args) -> SharedPtr<T>
    {
        return std::make_shared<T>(std::forward<TArgs>(args)...);
    }

    template <class T, class... TArgs> auto UniqueNew(TArgs&&... args) -> UniquePtr<T>
    {
        return std::make_unique<T>(std::forward<TArgs>(args)...);
    }

    template <class T, class... TArgs> auto sp_new(TArgs&&... args) -> sp<T>
    {
        return std::make_shared<T>(std::forward<TArgs>(args)...);
    }

    template <class T, class... TArgs> auto up_new(TArgs&&... args) -> up<T>
    {
        return std::make_unique<T>(std::forward<TArgs>(args)...);
    }
}