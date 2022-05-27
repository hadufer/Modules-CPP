#include "ClapTrap.h"
#include <iostream>
#include <string>

ClapTrap::ClapTrap()
{
	m_name = "";
	m_hitPoint = 10;
	m_energyPoint = 10;
	m_attackDamage = 0;
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	m_name = c.m_name;
	m_hitPoint = c.m_hitPoint;
	m_energyPoint = c.m_energyPoint;
	m_attackDamage = c.m_attackDamage;
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c)
{
	m_name = c.m_name;
	m_hitPoint = c.m_hitPoint;
	m_energyPoint = c.m_energyPoint;
	m_attackDamage = c.m_attackDamage;
	return *this;
}

ClapTrap::ClapTrap(std::string name)
{
	m_name = name;
	m_hitPoint = 10;
	m_energyPoint = 10;
	m_attackDamage = 0;
	std::cout << "ClapTrap Constructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (m_energyPoint < 0)
	{
		std::cout << "Not enough energy\n";
		return ;
	}
	m_energyPoint -= 1;
	std::cout << "ClapTrap " << m_name << " attacks " << target << " , causing " << m_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (m_energyPoint < 0)
	{
		std::cout << "Not enough energy\n";
		return ;
	}
	m_energyPoint -= 1;
	m_hitPoint -= amount;
	std::cout << "ClapTrap took " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (m_energyPoint < 0)
	{
		std::cout << "Not enough energy\n";
		return ;
	}
	m_energyPoint -= 1;
	m_hitPoint += amount;
	std::cout << "ClapTrap repaired himself for " << amount << " hitPoint" << std::endl;
}