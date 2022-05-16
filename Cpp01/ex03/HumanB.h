#pragma once
#include "Weapon.h"
#include <string>

class HumanB{
	private:
		std::string name;
		Weapon		*weapon;
		int			hasWeapon;
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon w);
		HumanB(const HumanB &w);
		~HumanB();
		HumanB &operator=(const HumanB &w);
		void attack( void );
		void setWeapon(Weapon &w);
};