/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:36:17 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/22 09:52:37 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap	&ScavTrap::operator = (ScavTrap const &toAssign)
{
	std::cout << "the assign operator called (scavtrap)" << std::endl;
	if (this != &toAssign)
	{
		this->HitPoint = toAssign.HitPoint;
		this->EnergyPoint= toAssign.EnergyPoint;
		this->AttackDamage = toAssign.AttackDamage;
		this->name = toAssign.name;
	}
	return(*this);
}

ScavTrap::ScavTrap(ScavTrap const &toCopy)
{
	std::cout << "the copy constrator called (scavtrap)" << std::endl;
	*this = toCopy;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "the param constrator called (scavtrap)" << std::endl;
	this->HitPoint = 100;
	this->EnergyPoint= 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(void)
{
	std::cout << "the default constrator called (scavtrap)" << std::endl;
	this->HitPoint = 100;
	this->EnergyPoint= 50;
	this->AttackDamage = 20;
	this->name = "Ma3ert";
}

ScavTrap::~ScavTrap()
{
	std::cout << "the destractor called (scavtrap)" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (useEnergyPoint())
	{	
		std::cout << this->name;
		std::cout << " Attack " << target;
		std::cout << " Causing " << this->AttackDamage;
		std::cout << " from ScavTrap" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "the scavtrap are now in the Gate keeper mode" << std::endl;
}