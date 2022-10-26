/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:33:30 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/25 11:28:45 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "the default constractor called from WrongCat" << std::endl;
	type = "WrongCAT";
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << "the copy constractor called from WrongCat" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "the destractor called from WrongCat" << std::endl;
}

WrongCat &	WrongCat::operator=( WrongCat const & toCopy )
{
	if ( this != &toCopy )
	{
		this->type = toCopy.type;
	}
	return *this;
}

std::string WrongCat::getType() const
{
	return (type);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "am a WrongCat so I will not bark I meow" << std::endl;
}