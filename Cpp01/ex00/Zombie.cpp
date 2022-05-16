#include "Zombie.h"
#include <iostream>

Zombie::Zombie(std::string t_name)
{
	name = t_name;
}

Zombie::~Zombie()
{
	std::cout << name << " IS DEAD" << std::endl;
}

Zombie &Zombie::operator=(const Zombie &z)
{
	name = z.name;
	return *this;
}

Zombie::Zombie(const Zombie &z)
{
	name = z.name;
}

void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}