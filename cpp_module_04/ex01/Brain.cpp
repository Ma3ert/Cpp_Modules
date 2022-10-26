/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:01:38 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/25 12:16:26 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "defaul constractor called from brain" << std::endl;
	for (int i = 0; i < 100 ; ++i)
		this->ideas[i] = 'h';
}

Brain::Brain( const Brain & toCopy )
{
	std::cout << "copy constractor called from brain" << std::endl;
	*this = toCopy;
}

Brain::~Brain()
{
	std::cout << "destractor called from brain" << std::endl;
}

Brain &Brain::operator=( Brain const & toAssign )
{
	std::cout << "assign operator called from brain" << std::endl;
	if ( this != &toAssign )
	{}
	return *this;
}
