#pragma once

#include "./std-int.cc"

#define CHR_LEN_IMPL_SIZE_2(type)                                                                                     \
    inline ::chr::ul operator|(type first, ::chr::LengthOperatorType_ second)                                         \
    {                                                                                                                 \
        return first.size();                                                                                          \
    }

#define CHR_LEN_IMPL_SIZE(type)                                                                                       \
    CHR_LEN_IMPL_SIZE_2(const type&)                                                                                  \
    CHR_LEN_IMPL_SIZE_2(type&)                                                                                        \
    CHR_LEN_IMPL_SIZE_2(type&&)

#define CHR_LEN_IMPL_SIZE_T_2(type)                                                                                   \
    template <class T>::chr::ul operator|(type first, ::chr::LengthOperatorType_ second)                              \
    {                                                                                                                 \
        return first.size();                                                                                          \
    }

#define CHR_LEN_IMPL_SIZE_T(type)                                                                                     \
    CHR_LEN_IMPL_SIZE_T_2(const type<T>&)                                                                             \
    CHR_LEN_IMPL_SIZE_T_2(type<T>&)                                                                                   \
    CHR_LEN_IMPL_SIZE_T_2(type<T>&&)

#define CHR_LEN_IMPL_SIZE_TARGS_2(type)                                                                               \
    template <class... TArgs>::chr::ul operator|(type first, ::chr::LengthOperatorType_ second)                       \
    {                                                                                                                 \
        return first.size();                                                                                          \
    }

#define CHR_LEN_IMPL_SIZE_TARGS(type)                                                                                 \
    CHR_LEN_IMPL_SIZE_TARGS_2(const type<TArgs>&)                                                                     \
    CHR_LEN_IMPL_SIZE_TARGS_2(type<TArgs>&)                                                                           \
    CHR_LEN_IMPL_SIZE_TARGS_2(type<TArgs>&&)

namespace chr
{
    struct LengthOperatorType_
    {
    };

    constexpr LengthOperatorType_ len {};
}