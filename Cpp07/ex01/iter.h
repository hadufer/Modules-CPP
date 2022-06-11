#pragma once

template<typename arrayType>
void iter(const arrayType *arr, int arraySize, void (*f)(const arrayType &a))
{
    for (int i = 0; i < arraySize; i++)
    {
        f(arr[i]);
    }
}