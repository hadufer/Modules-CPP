#pragma once

template<typename arrayType>
void iter(arrayType *arr, int arraySize, void (*f)(arrayType &a))
{
    for (int i = 0; i < arraySize; i++)
    {
        f(arr[i]);
    }
}