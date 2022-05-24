#include "ClapTrap.h"

int	main()
{
	ClapTrap test("hello");
	ClapTrap lol;

	test.attack("Bob");
	test.beRepaired(2);
	test.takeDamage(3);
}