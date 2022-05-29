#pragma once
#include "Bureaucrat.h"
#include <string>

class Bureaucrat;

class Form{
    private:
        const std::string m_name;
        bool m_isSigned;
        int m_gradeToSign;
        int m_gradeToExecute;
    public:
        Form(const std::string name = "", int gradeToSign = 150, int gradeToExecute = 150);
        Form(const Form &f);
        Form &operator=(const Form &f);
        ~Form();
        const std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(const Bureaucrat &b);
        class GradeTooHighException : public std::exception {
            public:
                char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                char *what() const throw();
        };
};

std::ostream& operator<<(std::ostream &stream, Form &f);