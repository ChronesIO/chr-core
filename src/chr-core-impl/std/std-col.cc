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

    template <class T> using VectorRef = const Vector<T>&;
    template <class T> using ListRef = const List<T>&;
    template <class T> using QueueRef = const Queue<T>&;
    template <class T> using StackRef = const Stack<T>&;
    template <class T> using ChainRef = const Chain<T>&;

    template <class T> using vec = Vector<T>;
    template <class T> using list = List<T>;
    template <class T> using queue = Queue<T>;
    template <class T> using stack = Stack<T>;
    template <class T> using chain = Chain<T>;

    template <class T> using vec_ref = VectorRef<T>;
    template <class T> using list_ref = ListRef<T>;
    template <class T> using queue_ref = QueueRef<T>;
    template <class T> using stack_ref = StackRef<T>;
    template <class T> using chain_ref = ChainRef<T>;

    template <class TKey, class TValue> using Dictionary = std::map<TKey, TValue>;
    template <class TKey, class TValue> using HashDictionary = std::unordered_map<TKey, TValue>;

    template <class TKey, class TValue> using DictionaryRef = const Dictionary<TKey, TValue>&;
    template <class TKey, class TValue> using HashDictionaryRef = const HashDictionary<TKey, TValue>&;

    CHR_LEN_IMPL_SIZE_T(vec)
    CHR_LEN_IMPL_SIZE_T(list)
    CHR_LEN_IMPL_SIZE_T(queue)
    CHR_LEN_IMPL_SIZE_T(stack)
    CHR_LEN_IMPL_SIZE_T(chain)
}