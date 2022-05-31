#include "AForm.h"
#include <string>

class PresidentialPardonForm : public AForm {
    private:
        std::string m_target;
    public:
        PresidentialPardonForm(std::string target = "noTarget");
        PresidentialPardonForm(const PresidentialPardonForm &f);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &f);
        ~PresidentialPardonForm();
        void execute(const Bureaucrat &e) const;
        class PresidentialPardonFailedException : public std::exception{
            char *what() const throw();
        };
};