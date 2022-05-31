#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Bureaucrat.h"
#include "Intern.h"
#include <iostream>
#include <exception>

int main()
{
    Intern someRandomIntern;
    AForm* rrf = NULL;
    try
    {
        rrf = someRandomIntern.makeForm("robotomy Request", "Bender");
        std::cout << "Intern creates " << rrf->getName() << std::endl;
    }
    catch(const Intern::FormNameNotFoundException& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete rrf;
}