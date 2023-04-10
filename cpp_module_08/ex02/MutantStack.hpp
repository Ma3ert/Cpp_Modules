/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:57:52 by Ma3ert            #+#    #+#             */
/*   Updated: 2023/01/21 20:55:00 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <algorithm>

template <typename T, typename container = std::deque<T> >
class	MutantStack : public std::stack<T, container>
{
	public	:
		typedef typename std::stack<T, container>::container_type::iterator	iterator;
		iterator	begin()
		{
			return this->c.begin();
		}
		iterator	end()
		{
			return this->c.end();
		}
	// private :
	// 	_Container	c;
};

// #include "MutantStack.tpp"

#endif