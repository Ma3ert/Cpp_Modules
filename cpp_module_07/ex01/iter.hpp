/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:08:50 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/13 16:51:16 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; }

template <typename T>
void iter(T *array, int lenght, void (*f)(T const &))
{
	for (int i = 0; i < lenght; ++i)
		f(array[i]);
}

#endif