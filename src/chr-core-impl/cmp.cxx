#include <iostream>
#include <memory>

#include "chr-core-impl/std/inc"
#include "inc"

auto test() -> void
{
    using namespace chr;

    wstr a1 = to_wstr("Hi") + to_wstr(10);
    str a2 = to_str(a1 + L" Hi");
}