/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:23:28 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/07 18:29:39 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed	&Fixed::operator = (Fixed &toAssign) 
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

Fixed::Fixed( Fixed &toCopy)
{ 
	std::cout << "the copy constractor called" << std::endl;
	value = toCopy.value;
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
