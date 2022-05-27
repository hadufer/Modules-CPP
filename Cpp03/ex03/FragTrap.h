#pragma once
#include "ClapTrap.h"
#include "ScavTrap.h"

class FragTrap : virtual public ClapTrap {
    public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(const FragTrap &c);
    FragTrap &operator=(const FragTrap &c);
    void highFivesGuys(void);
};