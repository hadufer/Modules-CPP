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
    Fixed operator-(const Fixed &b) const;
    Fixed operator+(const Fixed &b) const;
    Fixed operator*(const Fixed &b) const;
    Fixed operator/(const Fixed &b) const;
    bool operator>(const Fixed &b) const;
    bool operator<(const Fixed &b) const;
    bool operator>=(const Fixed &b) const;
    bool operator<=(const Fixed &b) const;
    bool operator==(const Fixed &b) const;
    bool operator!=(const Fixed &b) const;
};

std::ostream &operator<<(std::ostream &o, const Fixed &f);