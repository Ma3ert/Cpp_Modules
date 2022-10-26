/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:25:16 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/17 21:45:27 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <unistd.h>

Point a;
Point b;

b  = a;

Point::Point(float const newX, float const newY) : x(newX), y(newY)
{
	// std::cout << "param" << std::endl;
}

Point::Point(Point const &toCopy) { *this = toCopy; }

Point::Point(void):x(0), y(0)
{
	printf("default\n");
}

Point::~Point() {}

Point	&Point::operator = (Point const &toAssign)
{
	Point	ref(toAssign.x.toFloat(), toAssign.y.toFloat());
	*this = ref;
	return (*this);
}


Fixed	Point::triangleArea(Point const &A, Point const &B) const
{
	Fixed area((this->x * (A.y - B.y) + A.x * (B.y - this->y)+ B.x * (this->y - A.y)) / 2.0f);
	area.setRawBits(abs(area.getRawBits()));
	return (area);
}
