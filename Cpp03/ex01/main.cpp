#include "ClapTrap.h"
#include "ScavTrap.h"

int	main()
{
	ScavTrap jhony("jhony");

	jhony.attack("Bob");
	jhony.beRepaired(2);
	jhony.takeDamage(3);
}