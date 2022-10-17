/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:25:16 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/17 17:56:09 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(float const newX, float const newY)
{
	x = Fixed (newX);
	y = Fixed (newY);
}

Point::Point(Point const &toCopy) { *this = toCopy; }

Point::Point(void)
{
	x = Fixed(0);
	y = Fixed(0);
}

Point::~Point() { std::cout << "destractor called" << std::endl; }

Point	&Point::operator = (Point const &toAssign)
{
	if (this != &toAssign)
	{
		x = toAssign.x;
		y = toAssign.y;
	}
	return (*this);
}


Fixed	&Point::triangleArea(Point const A, Point const B)
{
	Fixed area( float((this->x * (A.y - B.y) + A.x * (B.y - this->y)+ B.x * (this->y - A.y)) / 2.0) );
	area.setRawBits(abs(area.getRawBits()));
	return (area);
}
