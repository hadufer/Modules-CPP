#include "PresidentialPardonForm.h"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Request", 25, 5), m_target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f) : AForm("Presidential Pardon Request", 25, 5), m_target(f.m_target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
    m_target = f.m_target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(const Bureaucrat &e) const
{
    if (!getIsSigned())
        throw FormNotSignedException();
    if (e.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    std::cout << m_target << " has been given pardon by Zaphod Beeblebrox" << std::endl;
}

char *PresidentialPardonForm::PresidentialPardonFailedException::what() const throw()
{
    return ((char *)"Presidential Pardon Failed !");
}