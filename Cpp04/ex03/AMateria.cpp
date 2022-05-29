#include "AMateria.h"
#include <string>
#include <iostream>

AMateria::AMateria() : m_type("")
{
}

AMateria::AMateria(const AMateria &a)
{
    m_type = a.m_type;
}


AMateria::AMateria(const std::string & type) : m_type( type )
{
}

AMateria &AMateria::operator=(const AMateria &a)
{
    m_type = a.m_type;
    return *this;
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
    return m_type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "Basic Amateria cannot be used on " << target.getName() << std::endl;
}
