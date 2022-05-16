#pragma once
#include "Weapon.h"
#include <string>

class HumanA{
	private:
		std::string name;
		Weapon		&weapon;
	public:
		HumanA(std::string name, Weapon &w);
		HumanA(const HumanA &w);
		~HumanA();
		HumanA &operator=(const HumanA &w);
		void attack( void );
};