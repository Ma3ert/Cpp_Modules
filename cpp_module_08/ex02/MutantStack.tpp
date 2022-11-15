/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:00:16 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/15 16:27:12 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template <typename T, class Container>
MutantStack<T, Container>::MutantStack() {}

template <typename T, class Container>
MutantStack<T, Container>::MutantStack( const MutantStack<T, Container> & src ) { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template <typename T, class Container>
MutantStack<T, Container>::~MutantStack() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template <typename T, class Container>
MutantStack<T, Container>	&MutantStack<T, Container>::operator=( MutantStack const & rhs )
{
	if (*this != rhs)
		this->c = rhs.c;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */