#pragma once

#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <unordered_map>

namespace chr
{
    template<class T> using Vector = std::vector<T>;
    template<class T> using List = std::deque<T>;
    template<class T> using Queue = std::queue<T>;
    template<class T> using Stack = std::stack<T>;
    template<class T> using Chain = std::list<T>;

    template<class T> using vec = Vector<T>;
    template<class T> using list = List<T>;

    template<class TKey, class TValue> using Dictionary = std::map<TKey, TValue>;
    template<class TKey, class TValue> using HashDictionary = std::unordered_map<TKey, TValue>;
}