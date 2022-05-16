#include "Zombie.h"
#include <iostream>

Zombie* newZombie( std::string t_name )
{
	Zombie *newZomb;

	(void)t_name;
	newZomb = new Zombie( t_name );
	return (newZomb);
}