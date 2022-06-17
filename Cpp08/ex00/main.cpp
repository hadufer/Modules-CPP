#include "easyFind.h"
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <iterator>
#include <iostream>

void    testVector(int i)
{
    std::vector<int> c;

    for (size_t i = 0; i < 20; i++)
    {
        c.push_back(i);
    }
    std::vector<int>::iterator a = easyfind(c, i);
    std::cout << *a << std::endl;
}

void    testDeque(int i)
{
    std::deque<int> c;

    for (size_t i = 0; i < 20; i++)
    {
        if (i % 2)
            c.push_back(i);
        else
            c.push_front(i);
    }
    std::deque<int>::iterator a = easyfind(c, i);
    std::cout << *a << std::endl;
}

void    testList(int i)
{
    std::list<int> c;

    for (size_t i = 0; i < 20; i++)
    {
        if (i % 2)
            c.push_back(i);
        else
            c.push_front(i);
    }
    std::list<int>::iterator a = easyfind(c, i);
    std::cout << *a << std::endl;
}

int main()
{
    testDeque(3);
    testList(5);
    testVector(2);
    try
    {
        testDeque(51);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
