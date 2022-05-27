#include "ScavTrap.h"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    m_attackDamage = 20;
    m_energyPoint = 50;
    m_hitPoint = 100;
}

ScavTrap::ScavTrap(const ScavTrap &s) : ClapTrap(s)
{
    m_name = s.m_name;
    m_attackDamage = s.m_attackDamage;
    m_energyPoint = s.m_energyPoint;
    m_hitPoint = s.m_hitPoint;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    m_name = name;
    m_hitPoint = 100;
    m_energyPoint = 50;
    m_attackDamage = 20;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s)
{
    m_name = s.m_name;
    m_attackDamage = s.m_attackDamage;
    m_energyPoint = s.m_energyPoint;
    m_hitPoint = s.m_hitPoint;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(std::string target)
{
    if (m_energyPoint < 0)
	{
		std::cout << "Not enough energy\n";
		return ;
	}
	m_energyPoint -= 1;
	std::cout << "ScavTrap " << m_name << " attacks " << target << " , causing " << m_attackDamage << " points of damage!" << std::endl;

}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap: " << m_name << " is in Gate keeper mode" << std::endl;
}