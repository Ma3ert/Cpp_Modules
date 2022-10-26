/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:33:30 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/26 16:18:20 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(Brain const &newBrain)
{
	std::cout << "the default constractor called from Dog" << std::endl;
	type = "DOG";
	DogBrain = new Brain(newBrain);
}

Dog::Dog()
{
	std::cout << "the default constractor called from Dog" << std::endl;
	type = "DOG";
	DogBrain = new Brain;
}

Dog::Dog( const Dog & src )
{
	std::cout << "the copy constractor called from Dog" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "the destractor called from Dog" << std::endl;
	delete this->DogBrain;
}


Dog &	Dog::operator=( Dog const & toCopy )
{
	if ( this != &toCopy )
	{
		this->type = toCopy.type;
		this->DogBrain = new Brain();
		*this->DogBrain = *toCopy.DogBrain;
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

void	Dog::SetBrain(Brain *newBrain)
{
	this->DogBrain = new Brain;
	*this->DogBrain = *newBrain;
}

Brain	*Dog::GetBrain(void) const
{
	return (DogBrain);
}