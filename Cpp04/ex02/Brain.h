#pragma once
#include <string>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain &b);
    Brain &operator=(const Brain &b);
    ~Brain();
};
