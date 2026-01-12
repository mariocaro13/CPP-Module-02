/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:42:24 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/12 13:04:15 by mcaro-ro         ###   ########.fr       */
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
