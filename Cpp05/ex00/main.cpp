#include "Bureaucrat.h"
#include <iostream>

int main()
{
    Bureaucrat dec("decrementException", 150);
    Bureaucrat inc("incrementException", 1);
    try
    {
        Bureaucrat constructTest("lel", 160);
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout <<  dec << std::endl;
    std::cout <<  inc << std::endl;

    try
    {
        inc.incrementGrade();
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        dec.decrementGrade();
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }

    dec.incrementGrade();
    inc.decrementGrade();

    std::cout <<  dec << std::endl;
    std::cout <<  inc << std::endl;
}