#include <iostream>
#include <memory>

#include "chr-core-impl/std/inc"
#include "chr-core-impl/std/std-fun.cc"
#include "chr-core-impl/std/std-mem.cc"
#include "chr-core-impl/std/std-nul.cc"
#include "inc"

auto test() -> void
{
    using namespace chr;

    auto l2 = "Hello World" | len;
    auto l3 = any_new<str>("Hello World");
}