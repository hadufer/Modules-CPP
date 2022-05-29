#include "Form.h"
#include <iostream>

Form::Form(const std::string name, int gradeToSign, int gradeToExecute) : m_name(name), m_gradeToSign(gradeToSign), m_gradeToExecute(gradeToExecute)
{
        if (gradeToSign > 150 || gradeToExecute > 150)
            throw Form::GradeTooLowException();
        else if (gradeToSign < 1  || gradeToExecute < 1)
            throw Form::GradeTooHighException();
        else
            m_isSigned = 0;
}

Form::Form(const Form &b) : m_name(b.m_name), m_gradeToSign(b.m_gradeToSign), m_gradeToExecute(b.m_gradeToExecute)
{
        if (b.m_gradeToSign > 150 || b.m_gradeToExecute > 150)
            throw Form::GradeTooLowException();
        else if (b.m_gradeToSign < 1  || b.m_gradeToExecute < 1)
            throw Form::GradeTooHighException();
        else
            m_isSigned = b.m_isSigned;
}

Form &Form::operator=(const Form &b)
{
        if (b.m_gradeToSign > 150 || b.m_gradeToExecute > 150)
            throw Form::GradeTooLowException();
        else if (b.m_gradeToSign < 1  || b.m_gradeToExecute < 1)
            throw Form::GradeTooHighException();
        else
            m_isSigned = b.m_isSigned;
    return *this;
}

Form::~Form()
{}

char *Form::GradeTooHighException::what() const throw()
{
    return (char *)"GradeTooHighException";
}

char *Form::GradeTooLowException::what() const throw()
{
    return (char *)"GradeTooLowException";
}

const std::string Form::getName() const
{
    return m_name;
}

bool Form::getIsSigned() const
{
    return m_isSigned;
}

int Form::getGradeToSign() const
{
    return m_gradeToSign;
}

int Form::getGradeToExecute() const
{
    return m_gradeToExecute;
}

void Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > m_gradeToSign)
        throw Form::GradeTooLowException();
    m_isSigned = 1;
}

std::ostream& operator<<(std::ostream &stream, Form &f)
{
    std::cout << "Form name: " << f.getName() << " Form isSigned: " << (f.getIsSigned() ? "true" : "false") << " Form gradeToSign: " << f.getGradeToSign() << " Form gradeToExecute " << f.getGradeToExecute();
    return stream;
}
