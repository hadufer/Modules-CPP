#include "DiamondTrap.h"

int	main()
{
	DiamondTrap sully("sully");

	sully.attack("Bob");
	sully.beRepaired(2);
	sully.takeDamage(3);
	sully.whoAmI();
	sully.highFivesGuys();
	sully.guardGate();
}