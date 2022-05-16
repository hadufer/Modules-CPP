#include "Zombie.h"

int main()
{
	Zombie *zombHorde;
	int N = 3;

	zombHorde = zombieHorde(N, "Bob");
	for (int i = 0; i < N; i++)
	{
		zombHorde[i].announce();
	}
	delete [] zombHorde;
}