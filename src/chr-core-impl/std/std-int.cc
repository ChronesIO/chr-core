#pragma once

#include <cstdint>

namespace chr
{
    using Int8 = int8_t;
    using Int16 = int16_t;
    using Int32 = int32_t;
    using Int64 = int64_t;

    using UInt8 = uint8_t;
    using UInt16 = uint16_t;
    using UInt32 = uint32_t;
    using UInt64 = uint64_t;

    using i8 = Int8;
    using i16 = Int16;
    using i32 = Int32;
    using i64 = Int64;

    using u8 = UInt8;
    using u16 = UInt16;
    using u32 = UInt32;
    using u64 = UInt64;

    using Byte = u8;
    using byte = Byte;

    using SByte = i8;
    using sbyte = SByte;

    using Float32 = float;
    using Float64 = double;

    using f32 = Float32;
    using f64 = Float64;

    using Long = long long;
    using il = Long;

    using ULong = unsigned long long;
    using ul = ULong;
}

namespace chr
{
    using Void = void;

    using VoidPtr = Void*;
    using vp = VoidPtr;

    static_assert(sizeof(void*) == sizeof(UInt64));
    using IntPtr = UInt64;
    using ip = IntPtr;

    static_assert(sizeof(void*) == sizeof(Int64));
    using SIntPtr = Int64;
}