#include <string>
#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "memory address of string =" << &string << std::endl;
	std::cout << "memory address of stringPTR =" << stringPTR << std::endl;
	std::cout << "memory address of stringREF =" << &stringREF << std::endl;

	std::cout << "value address of string =" << string << std::endl;
	std::cout << "value address of stringPTR =" << *stringPTR << std::endl;
	std::cout << "value address of stringREF =" << stringREF << std::endl;

}