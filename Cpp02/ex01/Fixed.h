#pragma once
#include <iostream>

class Fixed{
    private:
    int m_value;
    static const int m_bitPart = 8;

    public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();
    Fixed(const Fixed &f);
    Fixed &operator=(Fixed &f);
    int getRawBits() const;
    void setRawBits(int const raw);
    int toInt( void ) const;
    float toFloat( void ) const;
    Fixed &operator=(const Fixed &f);
};

std::ostream &operator<<(std::ostream &o, const Fixed &f);