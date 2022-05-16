#include "HumanB.h"
#include "Weapon.h"
#include <string>
#include <iostream>

HumanB::HumanB(std::string const t_name)
{
	name = t_name;
	weapon = NULL;
	hasWeapon = 0;
}

HumanB::HumanB(std::string const t_name, Weapon w)
{
	name = t_name;
	weapon = &w;
	hasWeapon = 1;
}

HumanB::~HumanB()
{
	
}

void HumanB::setWeapon(Weapon &w)
{
	if (w.getType() == "")
	{
		std::cout << "New weapon must exist!" << std::endl;
		return;
	}
	weapon = &w;
	hasWeapon = 1;
}

void HumanB::attack( void )
{
	if (hasWeapon && weapon)
		std::cout << name << ": attacks with their " << weapon->getType() << std::endl;
}

HumanB &HumanB::operator=(const HumanB &h)
{
	name = h.name;
	weapon = h.weapon;
	hasWeapon = h.hasWeapon;

	return *this;
}