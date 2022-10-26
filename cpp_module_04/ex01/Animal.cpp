/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:45:44 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/26 15:42:16 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal(std::string newType)
{
	std::cout << "param constractor called from animal" << std::endl;
	type = newType;
}

Animal::Animal(void)
{
	std::cout << "default constractor called from animal" << std::endl;
	type = "ma3ert";
}

Animal::Animal( const Animal & toAssign )
{
	std::cout << "copy constractor called from animal" << std::endl;
	*this = toAssign;
}

Animal::~Animal()
{
	std::cout << "the destractor called from animal" << std::endl;
}


Animal &Animal::operator=( Animal const & toCopy )
{
	if ( this != &toCopy )
	{
		this->type = toCopy.type;
	}
	return *this;
}

std::string Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "animal make sound" << std::endl;
}
