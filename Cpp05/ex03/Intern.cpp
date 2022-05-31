#include "Intern.h"
#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

Intern::Intern()
{
}

Intern::Intern(const Intern &b)
{
    (void)b;
}

Intern &Intern::operator=(const Intern &b)
{
    (void)b;
    return *this;
}

Intern::~Intern()
{}

AForm *PresidentialPardonFormPtr(std::string formTarget)
{
    return new PresidentialPardonForm(formTarget);
}

AForm *ShrubberyCreationFormPtr(std::string formTarget)
{
    return new ShrubberyCreationForm(formTarget);
}


AForm *RobotomyRequestFormPtr(std::string formTarget)
{
    return new RobotomyRequestForm(formTarget);
}


AForm *Intern::makeForm(std::string formName,std::string formTarget)
{
        std::string nameDispatchList[3] = {"Robotomy Request", "Shrubbery Creation", "Presidential Pardon"};
        AForm *(*funcptr[])(std::string formTarget) = {RobotomyRequestFormPtr, ShrubberyCreationFormPtr, PresidentialPardonFormPtr};
        for (int i = 0; i < 3; i++)
        {
            if (nameDispatchList[i] == formName)
                return funcptr[i](formTarget);
        }
        throw FormNameNotFoundException();
        return NULL;
}

char *Intern::FormNameNotFoundException::what() const throw()
{
    return ((char *)"FormNameNotFoundException");
}