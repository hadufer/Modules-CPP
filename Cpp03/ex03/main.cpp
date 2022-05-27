#include "DiamondTrap.h"

int	main()
{
	DiamondTrap sully("sully");

	sully.whoAmI();
	sully.attack("Bob");
	sully.beRepaired(2);
	sully.takeDamage(3);
	sully.highFivesGuys();
	sully.guardGate();
}