#pragma once

#include <exception>
#include <stdexcept>

#include "./std-str.cc"

namespace chr
{
    using Exception = std::exception;
    using exc = Exception;

    using Error = std::runtime_error;
    using err = Error;

    using ExceptionRef = const Exception&;
    using exc_ref = ExceptionRef;

    using ErrorRef = const Error&;
    using err_ref = ErrorRef;

    template <class T> inline auto rethrow(T&& e) -> void { std::throw_with_nested(e); }
    inline auto rethrow(const str& s) -> void { std::throw_with_nested(err(s)); }
}