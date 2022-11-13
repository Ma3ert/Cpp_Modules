/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:44:04 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/12 15:44:11 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
	private:
		T *a;
		size_t n;
	public:
		Array();
		Array(unsigned int N);
		Array( Array const & src );
		~Array();
		Array	&operator = ( Array const & rhs );
		T const	&operator [] ( size_t index ) const;
		T	 	&operator [] ( size_t index );
		size_t		size(void) const;
		class IndexOutOfRange : public std::exception
		{
			virtual char const *what() const throw();
		};
};

#include "Array.tpp"
