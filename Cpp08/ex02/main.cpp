#include "MutantStack.h"
#include <iostream>
#include <vector>

void baseTest()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
}

void dequeTest()
{
    std::deque<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << *mstack.rbegin() << std::endl;
    mstack.pop_back();
    std::cout << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    //[...]
    mstack.push_back(0);
    std::deque<int>::iterator it = mstack.begin();
    std::deque<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
}


int main()
{
    std::cout << "BASE TEST:" << std::endl;
    baseTest();
    std::cout << "-----------------" << std::endl;
    std::cout << "DEQUE TEST:" << std::endl;
    dequeTest();
    std::cout << "-----------------" << std::endl;
    return 0;
}
