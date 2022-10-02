/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:57:13 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/02 20:23:41 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void	Zombie::setName( void )
{
	std::cout << "can you please name your zombie: ";
	getline(std::cin, name);
}

void	Zombie::setName( std::string newName )	{name = newName;}

Zombie::Zombie( std::string newName )	{ setName(newName); }

Zombie::Zombie( void )	{ setName(); }

Zombie::~Zombie( void )	{ std::cout << name << " aymchi yt9awed" << std::endl; }

void	Zombie::Announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}