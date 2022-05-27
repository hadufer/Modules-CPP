#include "ClapTrap.h"
#include "FragTrap.h"

int	main()
{
	FragTrap tommy("tommy");

	tommy.attack("Bob");
	tommy.beRepaired(2);
	tommy.takeDamage(3);
	tommy.highFivesGuys();
}