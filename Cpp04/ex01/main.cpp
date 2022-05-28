#include "Animal.h"
#include <iostream>

int main()
{
    const Animal* j = new Dog();
    std::cout << std::endl;
    const Cat* i = new Cat();
    std::cout << std::endl;
    const Animal* k = new Cat(*i);

    std::cout << std::endl;
    delete k;
    std::cout << std::endl;
    delete j;
    std::cout << std::endl;
    delete i;
    std::cout << std::endl;
}
