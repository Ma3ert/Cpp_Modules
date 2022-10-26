/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:33:30 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/25 09:14:03 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "the default constractor called from Cat" << std::endl;
	type = "CAT";
}

Cat::Cat( const Cat & src )
{
	std::cout << "the copy constractor called from Cat" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "the destractor called from Cat" << std::endl;
}

Cat &	Cat::operator=( Cat const & toCopy )
{
	if ( this != &toCopy )
	{
		this->type = toCopy.type;
	}
	return *this;
}

std::string Cat::getType() const
{
	return (type);
}

void	Cat::makeSound(void) const
{
	std::cout << "am a Cat so I will not bark I meow" << std::endl;
}