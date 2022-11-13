/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:06:14 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/13 13:51:26 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
Array<T>::Array(): n(0)
{
	this->a = new T;
}

template <typename T>
Array<T>::Array(unsigned int N): n(N)
{
	a = new T[n];
}

template <typename T>
Array<T>::Array( Array const & src ): n(0)
{
	*this = src;
}

template <typename T>
Array<T>::~Array()
{
	delete []a;
}

template <typename T>
Array<T>	&Array<T>::operator = ( Array const & rhs )
{
	if (this->size())
		delete []this->a;
	this->n = rhs.n;
	this->a = new T[rhs.n];
	for (size_t i = 0; i < n; ++i)
		this->a[i] = rhs[i];
	return (*this);
}

template <typename T>
T		&Array<T>::operator [] (size_t index)
{
	IndexOutOfRange objet;
	if (this->n < index)
		throw objet;
	else
		return (a[index]);
}

template <typename T>
T const	&Array<T>::operator [] (size_t index) const
{
	IndexOutOfRange objet;
	if (this->n < index)
		throw objet;
	else
		return (a[index]);
}

template <typename T>
size_t	Array<T>::size(void) const
{
	return (n);
}

template <typename T>
char const * Array<T>::IndexOutOfRange::what() const throw()
{
	return ("IndexOutOfRange");
}
