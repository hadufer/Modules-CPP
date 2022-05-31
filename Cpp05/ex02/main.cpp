#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Bureaucrat.h"
#include <iostream>
#include <exception>

int main()
{
    AForm		*shrubForm = new ShrubberyCreationForm("home");
	Bureaucrat	boss("Hassan", 1);
	Bureaucrat	slave("Benoit", 140);

	boss.signForm(*shrubForm);
    boss.executeForm(*shrubForm);
	std::cout << *shrubForm << std::endl;
	std::cout << boss << std::endl;
	boss.executeForm(*shrubForm);
    try
    {
	    slave.executeForm(*shrubForm);
    }
	catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    delete shrubForm;
}