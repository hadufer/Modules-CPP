#include "AMateria.h"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &a) : AMateria(a)
{
}


Ice::Ice(const std::string & type) : AMateria(type)
{
}

Ice &Ice::operator=(const Ice &a)
{
    m_type = a.m_type;
    return *this;
}

Ice::~Ice()
{
}

Ice* Ice::clone() const
{
    return new Ice(m_type);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}