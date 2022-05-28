#include "Brain.h"
#include <iostream>

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &b)
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = b.ideas[i];
    }
}

Brain &Brain::operator=(const Brain &b)
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = b.ideas[i];
    }
    return *this;
}
