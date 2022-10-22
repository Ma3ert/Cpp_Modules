/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:36:17 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/22 09:57:41 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap	&FragTrap::operator = (FragTrap const &toAssign)
{
	std::cout << "the assign operator called (Fragtrap)" << std::endl;
	if (this != &toAssign)
	{
		this->HitPoint = toAssign.HitPoint;
		this->EnergyPoint= toAssign.EnergyPoint;
		this->AttackDamage = toAssign.AttackDamage;
		this->name = toAssign.name;
	}
	return(*this);
}

FragTrap::FragTrap(FragTrap const &toCopy)
{
	std::cout << "the copy constrator called (Fragtrap)" << std::endl;
	*this = toCopy;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "the param constrator called (Fragtrap)" << std::endl;
	this->HitPoint = 100;
	this->EnergyPoint= 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(void)
{
	std::cout << "the default constrator called (Fragtrap)" << std::endl;
	this->HitPoint = 100;
	this->EnergyPoint= 100;
	this->AttackDamage = 30;
	this->name = "Ma3ert";
}

FragTrap::~FragTrap()
{
	std::cout << "the destractor called (Fragtrap)" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "the Fragtrap want to high fives" << std::endl;
}