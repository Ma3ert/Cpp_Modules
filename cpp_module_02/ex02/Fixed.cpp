/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:23:28 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/12 14:15:35 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

							/* constractors */

Fixed::Fixed(const int num) { value = num << Fraction; }

Fixed::Fixed(const float num) { value = num * (float)(1 << Fraction); }

Fixed::Fixed( void )
{ 
	std::cout << "the default constractor called\n" << std::endl;
	value = 0;
}

Fixed::Fixed( Fixed const &toCopy)
{ 
	std::cout << "the copy constractor called\n" << std::endl;
	*this = toCopy;
}

Fixed::~Fixed() { std::cout << "the destructor called\n" << std::endl; }

							/* operators */

Fixed	&Fixed::operator = (Fixed const &toAssign)
{
	std::cout << "the assign operator called\n" << std::endl;
	if (this != &toAssign)
		value = toAssign.value;
	return (*this);
}

Fixed	Fixed::operator - (Fixed const &objet)
{
	std::cout << "the sub operator called\n" << std::endl;
	Fixed res;
	res.value = value - objet.value;
	return (res);
}

Fixed	Fixed::operator / (Fixed const &objet)
{
	std::cout << "the div operator called\n" << std::endl;
	Fixed		ret(((float)value / (float)objet.value));
	return (ret);
}
Fixed	Fixed::operator * (Fixed const &objet)
{
	std::cout << "the multi operator called\n" << std::endl;
	Fixed		ret(this->toFloat() * objet.toFloat());
	return (ret);
}

Fixed	Fixed::operator + (Fixed const &objet)
{
	std::cout << "the plus operator called\n" << std::endl;
	Fixed res;
	res.value = value + objet.value;
	std::cout << "the plus operator end\n" << std::endl;
	return (res);
}

							/* function members*/

float	Fixed::toFloat(void) const { return (value / (float)(1 << Fraction)); }

int		Fixed::toInt(void) const { return (value >> Fraction); }

int 	Fixed::getRawBits( void ) const 
{
	std::cout << "the getRawBits() called\n" << std::endl;
	return (value);
}

void 	Fixed::setRawBits( int const raw ) 
{ 
	std::cout << "the setRawBits() called\n" << std::endl;
	value = raw; 
}
