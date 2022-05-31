#include "ShrubberyCreationForm.h"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation", 145, 137), m_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &f) : AForm("Shrubbery Creation", 145, 137), m_target(f.m_target)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
    m_target = f.m_target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::execute(const Bureaucrat &e) const
{
    std::ofstream Ofile;
    std::string finalName = m_target + "_shrubbery";

    if (!getIsSigned())
        throw FormNotSignedException();
    if (e.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    Ofile.open(finalName.c_str());
    if (Ofile.good() == false)
    {
        throw FileOpenException();
    }
    Ofile << "       _-_" << std::endl;
    Ofile << "    /~~   ~~\\" << std::endl;
    Ofile << " /~~         ~~\\" << std::endl;
    Ofile << "{               }" << std::endl;
    Ofile << " \\  _-     -_  /" << std::endl;
    Ofile << "   ~  \\ //  ~" << std::endl;
    Ofile << "_- -   | | _- _" << std::endl;
    Ofile << "  _ -  | |   -_" << std::endl;
    Ofile << "      // \\\\" << std::endl;
}

char *ShrubberyCreationForm::FileOpenException::what() const throw()
{
    return ((char *)"Error while opening file");
}