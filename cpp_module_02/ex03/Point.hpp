/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:25:40 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/17 21:43:59 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const	x;
		Fixed const	y;
	public:
		Point			&operator = (Point const &toAssign);
		Fixed			triangleArea(Point const &A, Point const &B) const ;
		Point(Point const &toCopy);
		Point(float const newX, float const newY);
		Point(void);
		~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif