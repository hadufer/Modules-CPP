#pragma once
#include "Form.h"
#include <exception>
#include <string>

class Form;

class Bureaucrat{
    private:
        const std::string m_name;
        int m_grade;
    public:
        Bureaucrat(const std::string name = "", int grade = 0);
        Bureaucrat(const Bureaucrat &b);
        Bureaucrat &operator=(const Bureaucrat &b);
        ~Bureaucrat();
        int getGrade() const;
        const std::string getName() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(Form &f);
        class GradeTooHighException : public std::exception {
            public:
                char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                char *what() const throw();
        };
};

std::ostream& operator<<(std::ostream &stream, Bureaucrat &b);