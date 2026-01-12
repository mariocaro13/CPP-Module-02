/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 14:35:11 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/12 15:02:22 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) 
{
	std::cout << MSG_DEFAULT_CONSTRUCTOR << std::endl;
}

Fixed::Fixed(const Fixed& other) : _value(other._value)
{
	std::cout << MSG_COPY_CONSTRUCTOR << std::endl;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << MSG_COPY_ASSIGNMENT_OPERATOR << std::endl;

	if (this != &rhs)
		_value = rhs._value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << MSG_DESTRUCTOR << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << MSG_INT_CONSTRUCTOR << std::endl;
	_value = n << _fractionalBits;
}

Fixed::Fixed(const float f)
{
	std::cout << MSG_FLOAT_CONSTRUCTOR << std::endl;
	_value = static_cast<int>(roundf(f * (1 << _fractionalBits)));
}


int	Fixed::getRawBits(void) const
{
	std::cout << MSG_GETRAWBITS << std::endl;
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << MSG_SETRAWBITS << std::endl;
	_value = raw;
}

int	Fixed::toInt(void) const
{
	return (_value >> _fractionalBits);
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(_value) / (1 << _fractionalBits));
}


std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}


bool Fixed::operator>(const Fixed& rhs) const
{
	return (_value > rhs._value);
}

bool Fixed::operator<(const Fixed& rhs) const
{
	return (_value < rhs._value);
}

bool Fixed::operator>=(const Fixed& rhs) const
{
	return (_value >= rhs._value);
}

bool Fixed::operator<=(const Fixed& rhs) const
{
	return (_value <= rhs._value);
}

bool Fixed::operator==(const Fixed& rhs) const
{
	return (_value == rhs._value);
}

bool Fixed::operator!=(const Fixed& rhs) const
{
	return (_value != rhs._value);
}



Fixed Fixed::operator+(const Fixed& rhs) const 
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}


Fixed& Fixed::operator++()
{
	_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	_value++;
	return(temp);
}

Fixed& Fixed::operator--()
{
	_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	_value--;
	return(temp);
}


Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return ((a < b) ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return ((a < b) ? a : b);
}


Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return ((a > b) ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return ((a > b) ? a : b);
}
