#pragma once

#include "./std-int.cc"

#define _CHR__STD_INT_LIM__NUMERIC_TYPE(type, value) \
    constexpr ULong type = value;

#define _CHR__STD_INT_LIM__NUMERIC_TYPE_SUFFIX(type, value, suffix) \
    _CHR__STD_INT_LIM__NUMERIC_TYPE(type##suffix, value)

#define _CHR__STD_INT_LIM__NUMERIC_TYPE_MIN_MAX(type, macro_pre_type) \
    _CHR__STD_INT_LIM__NUMERIC_TYPE_SUFFIX(type, macro_pre_type##_MIN, Min)\
    _CHR__STD_INT_LIM__NUMERIC_TYPE_SUFFIX(type, macro_pre_type##_MAX, Max)

#define _CHR__STD_INT_LIM__NUMERIC_TYPE_MIN0_MAX(type, macro_pre_type) \
    _CHR__STD_INT_LIM__NUMERIC_TYPE_SUFFIX(type, 0, Min) \
    _CHR__STD_INT_LIM__NUMERIC_TYPE_SUFFIX(type, macro_pre_type##_MAX, Max)

namespace chr
{
    _CHR__STD_INT_LIM__NUMERIC_TYPE_MIN_MAX(Int8, INT8);
    _CHR__STD_INT_LIM__NUMERIC_TYPE_MIN_MAX(Int16, INT16);
    _CHR__STD_INT_LIM__NUMERIC_TYPE_MIN_MAX(Int32, INT32);
    _CHR__STD_INT_LIM__NUMERIC_TYPE_MIN_MAX(Int64, INT64);

    _CHR__STD_INT_LIM__NUMERIC_TYPE_MIN0_MAX(UInt8, UINT8);
    _CHR__STD_INT_LIM__NUMERIC_TYPE_MIN0_MAX(UInt16, UINT16);
    _CHR__STD_INT_LIM__NUMERIC_TYPE_MIN0_MAX(UInt32, UINT32);
    _CHR__STD_INT_LIM__NUMERIC_TYPE_MIN0_MAX(UInt64, UINT64);
}