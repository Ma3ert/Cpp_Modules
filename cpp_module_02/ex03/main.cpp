/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:23:07 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/17 21:51:45 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <unistd.h>

std::ostream	&operator << (std::ostream &out, const Fixed &param)
{
	out << param.toFloat();
	return (out);
}

int main( void ) 
{
	// Point A(5, 2);
	// Point B(1, 5);
	// Point C(1, 1);
	// Point D(2, 2);


	std::cout << "\n=============success test==============\n" << std::endl;

	if (bsp(Point(5, 2), Point(1, 5), Point(1, 1), Point(2, 2)))
		std::cout << "the point D on the ABC triangle !!!" << std::endl;
	else
		std::cout << "the point D not on the ABC triangle !!!" << std::endl;

	std::cout << "\n=============failure test==============\n" << std::endl;

	if (bsp(Point(5, 2), Point(1, 5), Point(1, 1), Point(32, 2)))
		std::cout << "the point D on the ABC triangle !!!" << std::endl;
	else
		std::cout << "the point D not on the ABC triangle !!!" << std::endl;
}