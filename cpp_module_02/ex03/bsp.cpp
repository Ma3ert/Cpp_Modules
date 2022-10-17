/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:43:22 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/17 21:48:33 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed abcArea(a.triangleArea(b, c).toFloat());
	Fixed abpArea(a.triangleArea(b, point).toFloat());
	Fixed bcpArea(b.triangleArea(c, point).toFloat());
	Fixed acpArea(a.triangleArea(c, point).toFloat());

	std::cout << "abc " << abcArea << std::endl;
	std::cout << "abp " << abpArea << std::endl;
	std::cout << "bcp " << bcpArea << std::endl;
	std::cout << "acp " << acpArea << std::endl;
	return (abcArea == abpArea + bcpArea + acpArea);
}