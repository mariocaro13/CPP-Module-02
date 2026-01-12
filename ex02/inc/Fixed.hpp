/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 14:34:59 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/12 14:59:13 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define MSG_DEFAULT_CONSTRUCTOR "Default constructor called"
# define MSG_COPY_CONSTRUCTOR "Copy constructor called"
# define MSG_COPY_ASSIGNMENT_OPERATOR "Copy assignment operator called"
# define MSG_DESTRUCTOR "Destructor called"

# define MSG_INT_CONSTRUCTOR "Int constructor called"
# define MSG_FLOAT_CONSTRUCTOR "Float constructor called"

# define MSG_GETRAWBITS "getRawBits member function called"
# define MSG_SETRAWBITS "setRawBits member function called"

class Fixed
{
private:
	int					_value;
	static const int	_fractionalBits = 8;
public:
	Fixed(void);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& rhs);
	~Fixed(void);

	Fixed(const int);
	Fixed(const float);

	int	getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

	bool operator>(const Fixed& rhs) const;
	bool operator<(const Fixed& rhs) const;
	bool operator>=(const Fixed& rhs) const;
	bool operator<=(const Fixed& rhs) const;
	bool operator==(const Fixed& rhs) const;
	bool operator!=(const Fixed& rhs) const;

	Fixed operator+(const Fixed& rhs) const;
	Fixed operator-(const Fixed& rhs) const;
	Fixed operator*(const Fixed& rhs) const;
	Fixed operator/(const Fixed& rhs) const;

	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);


	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);

	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
	
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
