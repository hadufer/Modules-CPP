#include "Animal.h"
#include <iostream>

void    printTest(Animal *a)
{
    a->makeSound();
}

int main()
{
    // Animal instance;

    Cat *testCat = new Cat();
    Dog *testDog = new Dog();

    std::cout << std::endl;
    // here is why Abstract class (Interfaces) are usefull
    printTest(testCat);
    printTest(testDog);

    std::cout << std::endl;
    delete testCat;
    delete testDog;
}
