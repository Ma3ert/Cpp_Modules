/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:57:52 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/15 16:26:58 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <algorithm>

template <typename T, class Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
	public:
		MutantStack();
		MutantStack( MutantStack const & src );
		~MutantStack();
		MutantStack &		operator=( MutantStack const & rhs );
		typedef typename Container::iterator	iterator;
		iterator begin(void) { return this->c.begin(); }
		iterator end(void) { return this->c.end(); }
};

#include "MutantStack.tpp"

#endif