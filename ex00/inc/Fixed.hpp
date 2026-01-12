/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:28:33 by mcaro-ro          #+#    #+#             */
/*   Updated: 2026/01/12 12:57:57 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

# define MSG_DEFAULT_CONSTRUCTOR "Default constructor called"
# define MSG_COPY_CONSTRUCTOR "Copy constructor called"
# define MSG_COPY_ASSIGNMENT_OPERATOR "Copy assignment operator called"
# define MSG_DESTRUCTOR "Destructor called"

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

	int	getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
