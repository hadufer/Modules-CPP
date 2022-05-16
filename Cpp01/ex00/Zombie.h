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
		Zombie *newZombie(std::string name);
		void	randomChump(std::string name);
		void	announce(void);
};

Zombie* newZombie( std::string t_name );
void randomChump( std::string t_name );