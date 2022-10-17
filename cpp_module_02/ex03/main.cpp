/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:23:07 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/17 13:21:23 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

std::ostream	&operator << (std::ostream &out, const Fixed &param)
{
	out << param.toFloat();
	return (out);
}

int main( void ) 
{
	Point A(5, 2);
	Point B(1, 5);
	Point C(1, 1);
	Point D(2, 2);

	if (bsp(A, B, C, D))
		std::cout << "the point D on the ABC triangle !!!" << std::endl;
	else
		std::cout << "the point D not on the ABC triangle !!!" << std::endl;
}