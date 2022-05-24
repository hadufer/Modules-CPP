#include "Fixed.h"
#include <iostream>
#include <cmath>

Fixed::Fixed() : m_value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int value) : m_value(value << m_bitPart)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float value) : m_value((int)roundf(value * (1 << 8)))
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called\n";
	m_value = f.m_value;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
	return m_value;
}

void Fixed::setRawBits(int const raw)
{
	m_value = raw;
}

float Fixed::toFloat() const
{
	return ((float)m_value / (1 << m_bitPart));
}

int Fixed::toInt() const
{
	return ((int)(roundf((float)m_value / (1 << m_bitPart))));
}

Fixed &Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignement operator called\n";
	m_value = f.getRawBits();
	return *this;
}

Fixed Fixed::operator-(const Fixed &b) const
{
	return (Fixed(toFloat() - b.toFloat()));
}

Fixed Fixed::operator+(const Fixed &b) const
{
	return (Fixed(toFloat() + b.toFloat()));
}

Fixed Fixed::operator*(const Fixed &b) const
{
	return (Fixed(toFloat() * b.toFloat()));
}

Fixed Fixed::operator/(const Fixed &b) const
{
	return (Fixed(toFloat() / b.toFloat()));
}

bool Fixed::operator<(const Fixed &b) const
{
	return ( toFloat() < b.toFloat() ? 1 : 0);
}

bool Fixed::operator>(const Fixed &b) const
{
	return ( toFloat() > b.toFloat() ? 1 : 0);
}

bool Fixed::operator>=(const Fixed &b) const
{
	return ( toFloat() >= b.toFloat() ? 1 : 0);
}

bool Fixed::operator<=(const Fixed &b) const
{
	return ( toFloat() <= b.toFloat() ? 1 : 0);
}

bool Fixed::operator==(const Fixed &b) const
{
	return ( toFloat() == b.toFloat() ? 1 : 0);
}

bool Fixed::operator!=(const Fixed &b) const
{
	return ( toFloat() != b.toFloat() ? 1 : 0);
}

// Fixed &Fixed::operator++()
// {
// 	m_value = toFloat() + 1;
// 	return *this;
// }

// Fixed Fixed::operator++(int)
// {
// 	Fixed ret = *this;
// 	ret.m_value = toFloat() + 1;
// 	return ret;
// }

// Fixed &Fixed::operator--()
// {
// 	m_value = ((toFloat() - 1) > 1 ? (toFloat() - 1) : toFloat());
// 	return *this;
// }

// Fixed Fixed::operator--(int)
// {
// 	Fixed ret = *this;
// 	ret.m_value = ((toFloat() - 1) > 1 ? (toFloat() - 1) : toFloat());
// 	return ret;
// }

std::ostream &operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return o;
}