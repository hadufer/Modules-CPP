#include "FragTrap.h"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    m_attackDamage = 30;
    m_energyPoint = 100;
    m_hitPoint = 100;
}

FragTrap::FragTrap(const FragTrap &s)
{
    m_name = s.m_name;
    m_attackDamage = s.m_attackDamage;
    m_energyPoint = s.m_energyPoint;
    m_hitPoint = s.m_hitPoint;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    m_name = name;
    m_hitPoint = 100;
    m_energyPoint = 100;
    m_attackDamage = 30;
}

FragTrap &FragTrap::operator=(const FragTrap &s)
{
    m_name = s.m_name;
    m_attackDamage = s.m_attackDamage;
    m_energyPoint = s.m_energyPoint;
    m_hitPoint = s.m_hitPoint;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << m_name << " want a high five !" << std::endl;
}