#pragma once
#include <string>

class ClapTrap{
	private:
	std::string m_name;
	int m_hitPoint;
	int m_energyPoint;
	int m_attackDamage;
	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &c);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &c);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};