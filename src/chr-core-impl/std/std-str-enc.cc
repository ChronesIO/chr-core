#pragma once

#include <codecvt>
#include <locale>

#include "./std-str.cc"

namespace chr
{
    using Encoder = std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>>;

    inline auto to_str(const wstr& s) -> str
    {
        Encoder ec;
        return ec.to_bytes(s);
    }
    inline auto to_wstr(const str& s) -> wstr
    {
        Encoder ec;
        return ec.from_bytes(s);
    }
}