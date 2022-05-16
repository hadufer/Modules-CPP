#pragma once
#include <string>

class Weapon{
	private:
		std::string name;
	public:
		Weapon(std::string name = "");
		Weapon(const Weapon &w);
		~Weapon();
		Weapon &operator=(const Weapon &w);
		void setType(std::string name);
		std::string getType( void );
};