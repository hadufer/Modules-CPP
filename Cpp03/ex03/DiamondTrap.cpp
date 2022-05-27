#include "DiamondTrap.h"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    m_attackDamage = FragTrap::m_hitPoint;
    m_energyPoint = ScavTrap::m_energyPoint;
    m_hitPoint = FragTrap::m_hitPoint;
}

DiamondTrap::DiamondTrap(const DiamondTrap &s)
{
    DiamondTrap::m_name = s.m_name;
    m_attackDamage = s.m_attackDamage;
    m_energyPoint = s.m_energyPoint;
    m_hitPoint = s.m_hitPoint;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    m_name = name;
    m_attackDamage = FragTrap::m_hitPoint;
    m_energyPoint = ScavTrap::m_energyPoint;
    m_hitPoint = FragTrap::m_hitPoint;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &s)
{
    m_name = s.m_name;
    m_attackDamage = s.m_attackDamage;
    m_energyPoint = s.m_energyPoint;
    m_hitPoint = s.m_hitPoint;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is : " << m_name << " and the name of my super-class ClapTrap is " << ClapTrap::m_name << std::endl;
}