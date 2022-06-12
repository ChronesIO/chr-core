#pragma once

#include "./std-ato.cc"
#include "./std-str.cc"

#define _CHR__STD_STR_ATO__NUMERIC_ATOMIC_1(type) using Atomic##type = std::atomic<type>;
#define _CHR__STD_STR_ATO__NUMERIC_ATOMIC_2(type) using ato_##type = std::atomic<type>;

#define _CHR__STD_STR_ATO__NUMERIC_ATOMIC(type1, type2)                                                               \
    _CHR__STD_STR_ATO__NUMERIC_ATOMIC_1(type1)                                                                        \
    _CHR__STD_STR_ATO__NUMERIC_ATOMIC_2(type2)

namespace chr
{
    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(String, str)
    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(WString, wstr)
}