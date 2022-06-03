#include <iostream>
#include <stdint.h>

struct Data{
    int theData;
};

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserealize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data *ptr = new Data;
    ptr->theData = 42;

    std::cout << "ptr address: " << &ptr << std::endl;
    uintptr_t serializedPtr = serialize(ptr);
    std::cout << "serializedPtr address: " << &ptr << std::endl;
    ptr = deserealize(serializedPtr);
    std::cout << "deserializedPtr address: "<< &ptr << std::endl;
    std::cout << "OMG It's the same value magic maybe? 🤔" << std::endl;
    delete ptr;
}