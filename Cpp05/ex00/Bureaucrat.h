#pragma once
#include <exception>
#include <string>

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