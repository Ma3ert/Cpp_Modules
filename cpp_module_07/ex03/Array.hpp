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

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
	private:
		T *a;
		unsigned int n;
	public:
		Array();
		Array(unsigned int N);
		Array( Array const & src );
		~Array();
		Array	&operator = ( Array const & rhs );
		T const	&operator [] ( unsigned int index ) const;
		T	 	&operator [] ( unsigned int index );
		int		size(void) const;
		class IndexOutOfRange : public std::exception
		{
			virtual char const *what() const throw();
		};
};

#endif