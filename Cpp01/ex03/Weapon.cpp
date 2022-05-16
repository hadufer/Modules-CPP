#include "Weapon.h"
#include <string>

Weapon::Weapon(std::string t_name)
{
	name = t_name;
}

Weapon::Weapon(const Weapon &w)
{
	name = w.name;
}

Weapon::~Weapon()
{

}

Weapon &Weapon::operator=(const Weapon &w)
{
	name = w.name;
	return *this;
}

void Weapon::setType(std::string t_name)
{
	name = t_name;
}

std::string Weapon::getType( void )
{
	return (name);
}