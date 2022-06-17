#pragma once
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <iterator>
#include <exception>

template <typename Container>
typename Container::iterator easyfind(Container &t, int i)
{
    typename Container::iterator ret = std::find(t.begin(), t.end(), i);
    if (ret == t.end())
        throw std::exception();
    return ret;
}