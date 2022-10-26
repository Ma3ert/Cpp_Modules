/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:33:30 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/25 09:13:28 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "the default constractor called from Dog" << std::endl;
	type = "DOG";
}

Dog::Dog( const Dog & src )
{
	std::cout << "the copy constractor called from Dog" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "the destractor called from Dog" << std::endl;
}


Dog &	Dog::operator=( Dog const & toCopy )
{
	if ( this != &toCopy )
	{
		this->type = toCopy.type;
	}
	return *this;
}

std::string Dog::getType(void) const
{
	return (type);
}

void	Dog::makeSound(void) const
{
	std::cout << "am a dog so I will bark" << std::endl;
}