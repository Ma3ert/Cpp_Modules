/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:33:30 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/26 16:23:16 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(Brain const &newBrain)
{
	std::cout << "the default constractor called from Cat" << std::endl;
	type = "CAT";
	this->CatBrain = new Brain(newBrain);
}

Cat::Cat()
{
	std::cout << "the default constractor called from Cat" << std::endl;
	type = "CAT";
	this->CatBrain = new Brain;
}

Cat::Cat( const Cat & src )
{
	std::cout << "the copy constractor called from Cat" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "the destractor called from Cat" << std::endl;
	delete this->CatBrain;
}

Cat &	Cat::operator=( Cat const & toCopy )
{
	if ( this != &toCopy )
	{
		this->type = toCopy.type;
		this->CatBrain = new Brain();
		*this->CatBrain = *toCopy.CatBrain;
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

void	Cat::SetBrain(Brain *newBrain)
{
	this->CatBrain = new Brain;
	*this->CatBrain = *newBrain;
}

Brain	*Cat::GetBrain(void) const { return (CatBrain); }
