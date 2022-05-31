#include "AForm.h"
#include <iostream>

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute) : m_name(name), m_gradeToSign(gradeToSign), m_gradeToExecute(gradeToExecute)
{
        if (gradeToSign > 150 || gradeToExecute > 150)
            throw AForm::GradeTooLowException();
        else if (gradeToSign < 1  || gradeToExecute < 1)
            throw AForm::GradeTooHighException();
        else
            m_isSigned = 0;
}

AForm::AForm(const AForm &b) : m_name(b.m_name), m_gradeToSign(b.m_gradeToSign), m_gradeToExecute(b.m_gradeToExecute)
{
        if (b.m_gradeToSign > 150 || b.m_gradeToExecute > 150)
            throw AForm::GradeTooLowException();
        else if (b.m_gradeToSign < 1  || b.m_gradeToExecute < 1)
            throw AForm::GradeTooHighException();
        else
            m_isSigned = b.m_isSigned;
}

AForm &AForm::operator=(const AForm &b)
{
        if (b.m_gradeToSign > 150 || b.m_gradeToExecute > 150)
            throw AForm::GradeTooLowException();
        else if (b.m_gradeToSign < 1  || b.m_gradeToExecute < 1)
            throw AForm::GradeTooHighException();
        else
            m_isSigned = b.m_isSigned;
    return *this;
}

AForm::~AForm()
{}

char *AForm::GradeTooHighException::what() const throw()
{
    return (char *)"GradeTooHighException";
}

char *AForm::GradeTooLowException::what() const throw()
{
    return (char *)"GradeTooLowException";
}

char *AForm::FormNotSignedException::what() const throw()
{
    return (char *)"FormNotSignedException";
}

const std::string AForm::getName() const
{
    return m_name;
}

bool AForm::getIsSigned() const
{
    return m_isSigned;
}

int AForm::getGradeToSign() const
{
    return m_gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return m_gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > m_gradeToSign)
        throw AForm::GradeTooLowException();
    m_isSigned = 1;
}

std::ostream& operator<<(std::ostream &stream, AForm &f)
{
    std::cout << "AForm name: " << f.getName() << " AForm isSigned: " << (f.getIsSigned() ? "true" : "false") << " AForm gradeToSign: " << f.getGradeToSign() << " AForm gradeToExecute " << f.getGradeToExecute();
    return stream;
}
