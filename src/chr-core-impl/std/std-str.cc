#pragma once

#include <sstream>
#include <string>

namespace chr
{
    using String = std::string;
    using str = String;

    using WString = std::wstring;
    using wstr = WString;

    using StringStream = std::stringstream;
    using strs = StringStream;

    using WStringStream = std::wstringstream;
    using wstrs = WStringStream;

    template <class... TArgs> inline auto str_build(TArgs&&... args) -> str
    {
        strs ss;
        (ss << ... << args);
        return ss.str();
    }
    template <class... TArgs> inline auto wstr_build(TArgs&&... args) -> wstr
    {
        wstrs ss;
        (ss << ... << args);
        return ss.str();
    }
}