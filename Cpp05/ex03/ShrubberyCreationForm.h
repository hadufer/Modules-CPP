#pragma once
#include <exception>
#include <exception>
#include "AForm.h"


class ShrubberyCreationForm : public AForm {
    private:
        std::string m_target;
    public:
        ShrubberyCreationForm(std::string target = "noTarget");
        ShrubberyCreationForm(const ShrubberyCreationForm &f);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &f);
        ~ShrubberyCreationForm();
        void execute(const Bureaucrat &e) const;
        class FileOpenException : public std::exception{
            char *what() const throw();
        };
};