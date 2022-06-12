#pragma once

#include <thread>

namespace chr
{
    using Thread = std::thread;
    using thread = Thread;

    using JThread = std::jthread;
    using jthread = JThread;
}