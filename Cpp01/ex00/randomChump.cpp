#include "Zombie.h"
#include <iostream>

void randomChump( std::string t_name )
{
	Zombie newZomb(t_name);

	newZomb.announce();
}