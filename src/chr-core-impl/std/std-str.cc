#pragma once

#include <sstream>
#include <string>

#include "./std-len.cc"

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

    CHR_LEN_IMPL_SIZE(str)
    CHR_LEN_IMPL_SIZE(wstr)

    template <class... TArgs> auto StringBuild(TArgs&&... args) -> String
    {
        strs ss;
        (ss << ... << args);
        return ss.str();
    }
    template <class... TArgs> auto WStringBuild(TArgs&&... args) -> WString
    {
        wstrs ss;
        (ss << ... << args);
        return ss.str();
    }

    template <class... TArgs> auto str_build(TArgs&&... args) -> str
    {
        strs ss;
        (ss << ... << args);
        return ss.str();
    }
    template <class... TArgs> auto wstr_build(TArgs&&... args) -> wstr
    {
        wstrs ss;
        (ss << ... << args);
        return ss.str();
    }
}