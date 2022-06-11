#pragma once

#include <deque>
#include <list>
#include <map>
#include <queue>
#include <stack>
#include <unordered_map>
#include <vector>

#include "./std-len.cc"

namespace chr
{
    template <class T> using Vector = std::vector<T>;
    template <class T> using List = std::deque<T>;
    template <class T> using Queue = std::queue<T>;
    template <class T> using Stack = std::stack<T>;
    template <class T> using Chain = std::list<T>;

    template <class T> using vec = Vector<T>;
    template <class T> using list = List<T>;
    template <class T> using queue = Queue<T>;
    template <class T> using stack = Stack<T>;
    template <class T> using chain = Chain<T>;

    template <class TKey, class TValue> using Dictionary = std::map<TKey, TValue>;
    template <class TKey, class TValue> using HashDictionary = std::unordered_map<TKey, TValue>;

    CHR_LEN_IMPL_SIZE_T(vec)
    CHR_LEN_IMPL_SIZE_T(list)
    CHR_LEN_IMPL_SIZE_T(queue)
    CHR_LEN_IMPL_SIZE_T(stack)
    CHR_LEN_IMPL_SIZE_T(chain)
}