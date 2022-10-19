/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:23:28 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/18 12:02:14 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		Fixed::toInt(void) const { return (value >> Fraction); }

Fixed::Fixed(const int num) 
{
	std::cout << "the int constrator called" << std::endl;
	value = num << Fraction; 
}

float	Fixed::toFloat(void) const { return (value / (float)(1 << Fraction)); }

Fixed::Fixed(const float num) 
{
	std::cout << "the float constrator called" << std::endl;
	value = num * (float)(1 << Fraction);
}

Fixed	&Fixed::operator = (Fixed const &toAssign)
{
	std::cout << "the assign operator called" << std::endl;
	if (this != &toAssign)
		value = toAssign.value;
	return (*this);
}

Fixed::Fixed( void )
{ 
	std::cout << "the default constractor called" << std::endl;
	value = 0;
}

Fixed::Fixed( Fixed const &toCopy)
{ 
	std::cout << "the copy constractor called" << std::endl;
	*this = toCopy;
}

Fixed::~Fixed() { std::cout << "the destructor called" << std::endl; }

int 	Fixed::getRawBits( void ) const 
{
	std::cout << "the getRawBits() called" << std::endl;
	return (value); }

void 	Fixed::setRawBits( int const raw ) 
{ 
	std::cout << "the setRawBits() called" << std::endl;
	value = raw; 
}
