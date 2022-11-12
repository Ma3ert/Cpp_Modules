/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:06:14 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/12 23:31:15 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(): n(0)
{}

template <typename T>
Array<T>::Array(unsigned int N): n(N)
{
	a = new T[n];
}

template <typename T>
Array<T>::Array( Array const & src )
{
	*this = src;
}

template <typename T>
Array<T>::~Array()
{
	delete []n;
}

template <typename T>
Array<T>	&Array<T>::operator = ( Array const & rhs )
{
	this->n = rhs->n;
	if (this->a)
		delete []n;
	this->a = new T[rhs->n];
	for (int i = 0; i < n; ++i)
		this->a[i] = rhs[i];
	return (*this);
}

template <typename T>
T		&Array<T>::operator [] (unsigned int index)
{
	IndexOutOfRange objet;
	if (this->n < index)
		throw objet;
	else
		return (a[index]);
}

template <typename T>
T const	&Array<T>::operator [] (unsigned int index) const
{
	IndexOutOfRange objet;
	if (this->n < index)
		throw objet;
	else
		return (a[index]);
}

template <typename T>
int	Array<T>::size(void) const
{
	return (n);
}

template <typename T>
char const * Array<T>::IndexOutOfRange::what() const throw()
{
	return ("IndexOutOfRange");
}
