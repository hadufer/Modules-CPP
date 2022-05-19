#pragma once
#include <string>

class Harl {
    public:
    Harl();
    ~Harl();
    Harl(Harl &h);
    Harl &operator=(Harl &h);
    void complain(std::string level);

    private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};