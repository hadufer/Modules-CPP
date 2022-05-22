#include "Fixed.h"
#include <iostream>
#include <cmath>

Fixed::Fixed(const int value) : m_value(value << m_bitPart)
{
    // int tmpValue = value;

    std::cout << "Int constructor called\n";
    // for (int i = 0; tmpValue > 0; i++)
    // {
    //     m_value |= ((tmpValue % 2) << i);
    //     tmpValue /= 2;
    // }
    // std::cout << m_value << std::endl;
    // for (int i = 15; i >= 0; i--)
    // {
    //     if (m_value & (1 << i))
    //     {
    //         std::cout << '1';
    //     }
    //     else
    //         std::cout << '0';
    // }
    // std::cout << std::endl;
    
}

Fixed::Fixed(const float value) : m_value((int)roundf(value * (1 << 8)))
{
    std::cout << "Float constructor called\n";
    m_value = value;
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
    {
        if (m_value & (1 << i))
        {
            std::cout << '1';
        }
        else
            std::cout << '0';
    }
}

Fixed::Fixed(Fixed &f)
{
    std::cout << "Copy constructor called\n";
    m_value = f.m_value;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(Fixed &f)
{
    std::cout << "Copy assignement operator called\n";
    m_value = f.getRawBits();
    return *this;
}

int Fixed::getRawBits()
{
    std::cout << "getRawBits member function called\n";
    return m_value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    m_value = raw;
}

float Fixed::toFloat() const
{
    return roundf(m_value);
}

int Fixed::toInt() const
{
    return m_value;
}