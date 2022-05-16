#include "Zombie.h"

int main()
{
	Zombie *tom;
	Zombie billy("billy");

	tom = newZombie("tom");
	tom->announce();
	billy.announce();

	randomChump("tommy");
	delete tom;
}