#include "Bureaucrat.h"
#include "AForm.h"
#include <iostream>
#include <exception>

Bureaucrat::Bureaucrat(const std::string name, int grade) : m_name(name), m_grade(grade)
{
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        m_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : m_name(b.m_name)
{
        if (b.m_grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (b.m_grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            m_grade = b.m_grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
        if (b.m_grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (b.m_grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            m_grade = b.m_grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{}

int Bureaucrat::getGrade() const
{
    return m_grade;
}

const std::string Bureaucrat::getName() const
{
    return m_name;
}

void Bureaucrat::incrementGrade()
{
        if (m_grade - 1 < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            m_grade -= 1;
}

void Bureaucrat::decrementGrade()
{
        if (m_grade + 1 > 150)
            throw Bureaucrat::GradeTooLowException();
        else
            m_grade += 1;
}

void Bureaucrat::signForm(AForm &f)
{
    try
    {
        f.beSigned(*this);
        std::cout << m_name << " signed " << f.getName() << std::endl;
    }
    catch(const AForm::GradeTooHighException& e)
    {
        std::cerr << "couldn't sign " << f.getName() << " because " << e.what() << std::endl;
    }
    catch(const AForm::GradeTooLowException& e)
    {
        std::cerr << "couldn't sign " << f.getName() << " because " << e.what() << std::endl;
    }
}

char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return (char *)"GradeTooHighException";
}

char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return (char *)"GradeTooLowException";
}

std::ostream& operator<<(std::ostream &stream, Bureaucrat &b)
{
    std::cout << b.getName() << ", bureaucrat grade " << b.getGrade();
    return stream;
}

void Bureaucrat::executeForm(AForm const & form)
{
    form.execute(*this);
    std::cout << m_name << " executed " << form.getName() << std::endl;
}