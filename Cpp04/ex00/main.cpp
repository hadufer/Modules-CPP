#include "Animal.h"
#include <iostream>

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *metaK = new WrongAnimal();
    const WrongAnimal *k = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << metaK->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    metaK->makeSound();
    k->makeSound();
    delete meta;
    delete j;
    delete i;
    delete metaK;
    delete k;
    return 0;
}
