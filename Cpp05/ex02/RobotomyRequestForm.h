#pragma once
#include <exception>
#include <exception>
#include "AForm.h"

class RobotomyRequestForm : public AForm {
    private:
        std::string m_target;
    public:
        RobotomyRequestForm(std::string target = "noTarget");
        RobotomyRequestForm(const RobotomyRequestForm &f);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &f);
        ~RobotomyRequestForm();
        void execute(const Bureaucrat &e) const;
        class RobotomysedFailedException : public std::exception{
            char *what() const throw();
        };
};