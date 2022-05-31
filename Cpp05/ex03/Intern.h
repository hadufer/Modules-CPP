#pragma once
#include "AForm.h"

class Intern {
    public:
        Intern();
        Intern(const Intern &i);
        Intern &operator=(const Intern &i);
        ~Intern();
        AForm *makeForm(std::string formName,std::string formTarget);
        class FormNameNotFoundException : std::exception {
            public:
                char *what() const throw();
        };
};