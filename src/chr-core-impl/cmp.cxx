#include <iostream>
#include <memory>

#include "chr-core-impl/std/std-fun.cc"
#include "inc"

void test()
{
    using namespace chr;

    str s = "Hello World";

    str s2 = "Hello World 2";

    sp<int> a = sp_new<int>(10);

}