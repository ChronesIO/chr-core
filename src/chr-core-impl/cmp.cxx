#include <iostream>
#include <memory>

#include "chr-core-impl/std/std-col.cc"
#include "chr-core-impl/std/std-fun.cc"
#include "chr-core-impl/std/std-mem.cc"
#include "chr-core-impl/std/std-typh.cc"
#include "inc"

auto test() -> void
{
    auto v = []() -> int { return 10; };
}