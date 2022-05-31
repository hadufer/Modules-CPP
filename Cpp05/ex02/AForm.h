#pragma once
#include "Bureaucrat.h"
#include <string>

class Bureaucrat;

class AForm{
    private:
        const std::string m_name;
        bool m_isSigned;
        const int m_gradeToSign;
        const int m_gradeToExecute;
    public:
        AForm(const std::string name = "", int gradeToSign = 150, int gradeToExecute = 150);
        AForm(const AForm &f);
        AForm &operator=(const AForm &f);
        virtual ~AForm();
        const std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(const Bureaucrat &b);
        virtual void execute(Bureaucrat const & executor) const = 0;
        class GradeTooHighException : public std::exception {
            public:
                char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                char *what() const throw();
        };
        class FormNotSignedException : public std::exception {
            public:
                char *what() const throw();
        };
};

std::ostream& operator<<(std::ostream &stream, AForm &f);