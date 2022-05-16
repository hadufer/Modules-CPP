#pragma once
#include <string>

class Zombie {
	private:
		std::string name;
	public:
		Zombie(std::string name = "");
		Zombie(const Zombie &z);
		~Zombie();
		Zombie &operator=(const Zombie &z);
		Zombie &operator=(std::string name);
		Zombie *newZombie(std::string name);
		void	randomChump(std::string name);
		void	announce(void);
};

Zombie* zombieHorde( int N, std::string t_name );