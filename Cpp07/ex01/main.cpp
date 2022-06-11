#include "iter.h"
#include <iostream>

void addOne(int &a)
{
    a += 1;
}

void addOneToString(std::string &a)
{
    a += '1';
}

int main()
{
    int arraySize = 5;
    int array[] = {1, 1, 1, 1, 1};
    std::string array2[] = {"hello", "world", "im", "hassan", "lul"};
    std::cout << "test with array of std::string :" << std::endl;
    iter<std::string>(array2, arraySize, addOneToString);
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << array2[i] << std::endl;
    }
    std::cout << std::endl << "test with array of int:" << std::endl;
    iter<int>(array, arraySize, addOne);
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << array[i] << std::endl;
    }
}