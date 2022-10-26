/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbstractAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:45:44 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/26 10:32:34 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AbstractAnimal.hpp"


AbstractAnimal::AbstractAnimal(std::string newType)
{
	std::cout << "param constractor called from AbstractAnimal" << std::endl;
	type = newType;
}

AbstractAnimal::AbstractAnimal(void)
{
	std::cout << "default constractor called from AbstractAnimal" << std::endl;
	type = "ma3ert";
}

AbstractAnimal::AbstractAnimal( const AbstractAnimal & toAssign )
{
	std::cout << "copy constractor called from AbstractAnimal" << std::endl;
	*this = toAssign;
}

AbstractAnimal::~AbstractAnimal()
{
	std::cout << "the destractor called from AbstractAnimal" << std::endl;
}


AbstractAnimal &AbstractAnimal::operator=( AbstractAnimal const & toCopy )
{
	if ( this != &toCopy )
	{
		this->type = toCopy.type;
	}
	return *this;
}

std::string AbstractAnimal::getType(void) const
{
	return (type);
}

void	AbstractAnimal::makeSound() const
{
	std::cout << "AbstractAnimal make sound" << std::endl;
}
