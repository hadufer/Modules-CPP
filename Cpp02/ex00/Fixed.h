#pragma once

class Fixed{
    private:
    int m_value;
    static const int m_bitPart = 8;

    public:
    Fixed(int value = 0);
    ~Fixed();
    Fixed(Fixed &f);
    Fixed &operator=(Fixed &f);
    int getRawBits();
    void setRawBits(int const raw);
};