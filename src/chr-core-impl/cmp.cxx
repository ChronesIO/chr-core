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

    auto a = memf(&sp<int>::get);
    auto b = a(sp_new<int>());
    auto c = memf(&up<int>::release);

    auto n = nlo<int>;
    auto n2 = nlo<str>;
    n2 = "hi";
}