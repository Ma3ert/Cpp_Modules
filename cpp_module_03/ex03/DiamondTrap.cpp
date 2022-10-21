/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:57:41 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/19 19:41:57 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap	&DiamondTrap::operator = (DiamondTrap const &toAssign)
{
	std::cout << "the assign operator called (DiamondTrap)" << std::endl;
	if (this != &toAssign)
	{
		this->name = toAssign.name;
		this->HitPoint = toAssign.HitPoint;
		this->EnergyPoint = toAssign.EnergyPoint;
		this->AttackDamage = toAssign.AttackDamage;
	}
	return (*this);
}

DiamondTrap::DiamondTrap(DiamondTrap const &toCopy)
{
	std::cout << "the copy constrator called (DiamondTrap)" << std::endl;
	*this = toCopy;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	std::cout << "the param constrator called (DiamondTrap)" << std::endl;
	this->name = name;
	this->HitPoint = 100;
	this->AttackDamage = 30;
}

DiamondTrap::DiamondTrap(void)
{
	std::cout << "the default constrator called (DiamondTrap)" << std::endl;
	name = "Ma3ert";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "the destractor called (DiamondTrap)" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << name;
	std::cout << " clap name " << ClapTrap::name << std::endl;
}