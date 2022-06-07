#pragma once

#include "./std-int.cc"
#include "./std-str.cc"

#define _CHR__STD_STR_CNV__TO_STR(type)                                                                               \
    inline auto to_str(type v)->str                                                                                   \
    {                                                                                                                 \
        return std::to_string(v);                                                                                     \
    }
#define _CHR__STD_STR_CNV__TO_WSTR(type)                                                                              \
    inline auto to_wstr(type v)->wstr                                                                                 \
    {                                                                                                                 \
        return std::to_wstring(v);                                                                                    \
    }

#define _CHR__STD_STR_CNV__TO_STR_WSTR(type)                                                                          \
    _CHR__STD_STR_CNV__TO_STR(type)                                                                                   \
    _CHR__STD_STR_CNV__TO_WSTR(type)

#define _CHR__STD_STR_CNV__TO_STR__STREAM(type)                                                                       \
    inline auto to_str(type v)->str                                                                                   \
    {                                                                                                                 \
        strs ss;                                                                                                      \
        ss << v;                                                                                                      \
        return ss.str();                                                                                              \
    }
#define _CHR__STD_STR_CNV__TO_WSTR__STREAM(type)                                                                      \
    inline auto to_wstr(type v)->wstr                                                                                 \
    {                                                                                                                 \
        wstrs ss;                                                                                                     \
        ss << v;                                                                                                      \
        return ss.str();                                                                                              \
    }

#define _CHR__STD_STR_CNV__TO_STR_WSTR__STREAM(type)                                                                  \
    _CHR__STD_STR_CNV__TO_STR__STREAM(type)                                                                           \
    _CHR__STD_STR_CNV__TO_WSTR__STREAM(type)

namespace chr
{
    _CHR__STD_STR_CNV__TO_STR_WSTR(Int8);
    _CHR__STD_STR_CNV__TO_STR_WSTR(Int16);
    _CHR__STD_STR_CNV__TO_STR_WSTR(Int32);
    _CHR__STD_STR_CNV__TO_STR_WSTR(Int64);

    _CHR__STD_STR_CNV__TO_STR_WSTR(UInt8);
    _CHR__STD_STR_CNV__TO_STR_WSTR(UInt16);
    _CHR__STD_STR_CNV__TO_STR_WSTR(UInt32);
    _CHR__STD_STR_CNV__TO_STR_WSTR(UInt64);

    _CHR__STD_STR_CNV__TO_STR_WSTR(Float32);
    _CHR__STD_STR_CNV__TO_STR_WSTR(Float64);

    _CHR__STD_STR_CNV__TO_STR_WSTR__STREAM(VoidPtr);
}