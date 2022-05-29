#include "Form.h"
#include "Bureaucrat.h"
#include <iostream>
#include <exception>

int main()
{
    Bureaucrat b("boss", 1);
    Bureaucrat slave("slave", 150);
    Form bossForm("bossForm", 1, 1);
    Form normalForm("normalForm", 75, 75);

    b.signForm(bossForm);
    std::cout << bossForm << std::endl;
    slave.signForm(normalForm);
    std::cout << normalForm << std::endl;
}