/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAbstractAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:45:44 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/25 09:13:43 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAbstractAnimal.hpp"


WrongAbstractAnimal::WrongAbstractAnimal(std::string newType)
{
	std::cout << "param constractor called from WrongAbstractAnimal" << std::endl;
	type = newType;
}

WrongAbstractAnimal::WrongAbstractAnimal(void)
{
	std::cout << "default constractor called from WrongAbstractAnimal" << std::endl;
	type = "ma3ert";
}

WrongAbstractAnimal::WrongAbstractAnimal( const WrongAbstractAnimal & toAssign )
{
	std::cout << "copy constractor called from WrongAbstractAnimal" << std::endl;
	*this = toAssign;
}

WrongAbstractAnimal::~WrongAbstractAnimal()
{
	std::cout << "the destractor called from WrongAbstractAnimal" << std::endl;
}


WrongAbstractAnimal &WrongAbstractAnimal::operator=( WrongAbstractAnimal const & toCopy )
{
	if ( this != &toCopy )
	{
		this->type = toCopy.type;
	}
	return *this;
}

std::string WrongAbstractAnimal::getType(void) const
{
	return (type);
}

void	WrongAbstractAnimal::makeSound() const
{
	std::cout << "WrongAbstractAnimal make sound" << std::endl;
}
