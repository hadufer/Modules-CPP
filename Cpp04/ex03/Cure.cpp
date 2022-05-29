#include "AMateria.h"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &a) : AMateria(a)
{
}


Cure::Cure(const std::string & type) : AMateria(type)
{
}

Cure &Cure::operator=(const Cure &a)
{
    m_type = a.m_type;
    return *this;
}

Cure::~Cure()
{
}

// std::string const & Cure::getType() const
// {
//     return m_type;
// }

Cure* Cure::clone() const
{
    return new Cure(m_type);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}