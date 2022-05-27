#pragma once
#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap : public ScavTrap, public FragTrap {
    private:
    std::string m_name;
    public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap &c);
    using ScavTrap::attack;
    DiamondTrap &operator=(const DiamondTrap &c);
    void whoAmI();
};