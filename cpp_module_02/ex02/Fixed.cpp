/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:23:28 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/17 10:00:06 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

							/* constractors */

Fixed::Fixed(const int num) { value = num << Fraction; }

Fixed::Fixed(const float num) { value = num * (float)(1 << Fraction); }

Fixed::Fixed( void )
{
	value = 0;
}

Fixed::Fixed( Fixed const &toCopy)
{
	*this = toCopy;
}

Fixed::~Fixed() { std::cout << ' '; }

							/* operators */

Fixed	&Fixed::operator = (Fixed const &toAssign)
{
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
	Fixed		ret(((float)value / (float)objet.value));
	return (ret);
}
Fixed	Fixed::operator * (Fixed const &objet)
{
	Fixed		ret(this->toFloat() * objet.toFloat());
	return (ret);
}

Fixed	Fixed::operator + (Fixed const &objet)
{
	Fixed res;
	res.value = value + objet.value;
	return (res);
}

bool	Fixed::operator!= (Fixed const &toCompare)
{
	return (this->value != toCompare.value);
}

bool	Fixed::operator== (Fixed const &toCompare)
{
	return (this->value == toCompare.value);
}

bool	Fixed::operator<= (Fixed const &toCompare)
{
	return (this->value <= toCompare.value);
}

bool	Fixed::operator>= (Fixed const &toCompare)
{
	return (this->value >= toCompare.value);
}

bool	Fixed::operator> (Fixed const &toCompare)
{
	return (this->value > toCompare.value);
}

bool	Fixed::operator< (Fixed const &toCompare)
{
	return (this->value < toCompare.value);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;
	tmp.value = value--;
	return (tmp);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;
	tmp.value = value++;
	return (tmp);
}

Fixed	Fixed::operator--(void)
{
	Fixed	tmp;
	tmp.value = --value;
	return (tmp);
}

Fixed	Fixed::operator++(void)
{
	Fixed	tmp;
	tmp.value = ++value;
	return (tmp);
}

							/* function members*/

Fixed&	Fixed::Max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

Fixed&	Fixed::Min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);		
}

float	Fixed::toFloat(void) const { return (value / (float)(1 << Fraction)); }

int		Fixed::toInt(void) const { return (value >> Fraction); }

int 	Fixed::getRawBits( void ) const { return (value); }

void 	Fixed::setRawBits( int const raw ) 
{ 
	std::cout << "the setRawBits() called\n" << std::endl;
	value = raw; 
}
