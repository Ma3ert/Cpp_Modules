/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:28:23 by Ma3ert            #+#    #+#             */
/*   Updated: 2023/01/20 16:03:14 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

template <typename T>
int	easyfind(T table, int toFind)
{
	typename T::iterator begin = table.begin();
	typename T::iterator end = table.end();
	typename T::iterator pos = std::find(begin, end, toFind);

	if (pos == end)
		throw (std::exception());
	return (*pos);
}