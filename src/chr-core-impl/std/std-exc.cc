#pragma once

#include <exception>
#include <stdexcept>

#include "./std-str.cc"

namespace chr
{
    using exc = std::exception;
    using err = std::runtime_error;

    using exc_ref = const exc&;
    using err_ref = const err&;

    template <class T> inline auto rethrow(T&& e) -> void { std::throw_with_nested(e); }
    inline auto rethrow(const String& s)->void { std::throw_with_nested(err(s)); }
}