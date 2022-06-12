#pragma once

#include "./std-ato.cc"
#include "./std-int.cc"

#define _CHR__STD_INT_ATO__NUMERIC_ATOMIC_1(type) using Atomic##type = std::atomic<type>;
#define _CHR__STD_INT_ATO__NUMERIC_ATOMIC_2(type) using ato_##type = std::atomic<type>;

#define _CHR__STD_INT_ATO__NUMERIC_ATOMIC(type1, type2)                                                               \
    _CHR__STD_INT_ATO__NUMERIC_ATOMIC_1(type1)                                                                        \
    _CHR__STD_INT_ATO__NUMERIC_ATOMIC_2(type2)

namespace chr
{
    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(Int8, i8)
    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(Int16, i16)
    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(Int32, i32)
    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(Int64, i64)

    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(UInt8, u8)
    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(UInt16, u16)
    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(UInt32, u32)
    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(UInt64, u64)

    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(Byte, byte)
    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(SByte, sbyte)

    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(Float32, f32)
    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(Float64, f64)

    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(Long, il)
    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(ULong, ul)

    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(VoidPtr, vp)

    _CHR__STD_INT_ATO__NUMERIC_ATOMIC(IntPtr, ip)
    _CHR__STD_INT_ATO__NUMERIC_ATOMIC_1(SIntPtr)
}