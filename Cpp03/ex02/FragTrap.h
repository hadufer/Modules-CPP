#pragma once
#include "ClapTrap.h"
#include "ScavTrap.h"

class FragTrap : public ClapTrap {
    public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(const FragTrap &c);
    FragTrap &operator=(const FragTrap &c);
    void highFivesGuys(void);
};