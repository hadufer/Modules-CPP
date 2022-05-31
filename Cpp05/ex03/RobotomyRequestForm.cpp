#include "RobotomyRequestForm.h"
#include <iostream>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request", 72, 5), m_target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f) : AForm("Robotomy Request", 72, 5), m_target(f.m_target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
    m_target = f.m_target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(const Bureaucrat &e) const
{
    if (!getIsSigned())
        throw FormNotSignedException();
    if (e.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    std::cout << "**Drill Noise**" << std::endl;
    if (rand()%2 == 1)
        std::cout << m_target << " has been robotomised" << std::endl;
    else
        throw RobotomysedFailedException();
}

char *RobotomyRequestForm::RobotomysedFailedException::what() const throw()
{
    return ((char *)"Robotomised Failed !");
}