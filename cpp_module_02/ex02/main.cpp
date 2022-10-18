/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:23:07 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/18 10:49:26 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream	&operator << (std::ostream &out, const Fixed &param)
{
	out << param.toFloat();
	return (out);
}

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed(2.3f) * Fixed(2) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << "this is the max " << Fixed::Max( a, b ) << std::endl;
	std::cout << "this is the min " << Fixed::Min( a, b ) << std::endl;
	return 0;
}