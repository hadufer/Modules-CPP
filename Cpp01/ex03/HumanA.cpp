#include "HumanA.h"
#include "Weapon.h"
#include <string>
#include <iostream>

HumanA::HumanA(std::string const t_name, Weapon &w) : name(t_name), weapon(w)
{
}

HumanA::~HumanA()
{
	
}

HumanA &HumanA::operator=(const HumanA &h)
{
	name = h.name;
	weapon = h.weapon;
	return *this;
}

void HumanA::attack( void )
{
	std::cout << name << ": attacks with their " << weapon.getType() << std::endl;
}