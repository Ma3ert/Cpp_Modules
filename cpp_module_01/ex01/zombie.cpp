/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:57:13 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/05 13:52:16 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void	Zombie::setName(void)
{
	std::cout << "can you please name your zombie: ";
	getline(std::cin, name);
}

void	Zombie::setName(std::string newName)	{name = newName;}

Zombie::~Zombie(void)	{ std::cout << name << std::endl; }

void	Zombie::Announce(void)
{
	std::cout << name << ": wa 7na ktaaaaaaar" << std::endl;
}