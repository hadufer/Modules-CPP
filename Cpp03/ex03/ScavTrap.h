#pragma once
#include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap {
    public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap &c);
    ScavTrap &operator=(const ScavTrap &c);
    void guardGate();
    void attack(std::string target);
};