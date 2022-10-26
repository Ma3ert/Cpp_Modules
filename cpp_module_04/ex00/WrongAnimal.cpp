/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:45:44 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/25 09:13:43 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(std::string newType)
{
	std::cout << "param constractor called from Wronganimal" << std::endl;
	type = newType;
}

WrongAnimal::WrongAnimal(void)
{
	std::cout << "default constractor called from Wronganimal" << std::endl;
	type = "ma3ert";
}

WrongAnimal::WrongAnimal( const WrongAnimal & toAssign )
{
	std::cout << "copy constractor called from Wronganimal" << std::endl;
	*this = toAssign;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "the destractor called from Wronganimal" << std::endl;
}


WrongAnimal &WrongAnimal::operator=( WrongAnimal const & toCopy )
{
	if ( this != &toCopy )
	{
		this->type = toCopy.type;
	}
	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wronganimal make sound" << std::endl;
}
