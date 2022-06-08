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

    auto a = chr::memf(&sp<int>::get);
    auto b = a(sp_new<int>());
    auto c = chr::memf(&up<int>::release);

    auto n = nlo<int>;
}