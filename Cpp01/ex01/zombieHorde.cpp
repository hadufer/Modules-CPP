#include "Zombie.h"
#include <string>

Zombie* zombieHorde( int N, std::string t_name )
{
	Zombie *zombieHorde;

	zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombieHorde[i] = t_name;
	}
	return zombieHorde;
}