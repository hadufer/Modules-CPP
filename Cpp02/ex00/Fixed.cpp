#include "Fixed.h"
#include <iostream>

Fixed::Fixed(int value)
{
    std::cout << "Default constructor called\n";
    m_value = value;
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