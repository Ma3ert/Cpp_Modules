/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:57:41 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/22 11:02:00 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap	&ClapTrap::operator = (ClapTrap const &toAssign)
{
	std::cout << "the assign operator called" << std::endl;
	if (this != &toAssign)
	{
		this->name = toAssign.name;
		this->HitPoint = toAssign.HitPoint;
		this->EnergyPoint = toAssign.EnergyPoint;
		this->AttackDamage = toAssign.AttackDamage;
	}
	return (*this);
}

ClapTrap::ClapTrap(ClapTrap const &toCopy)
{
	std::cout << "the copy constrator called" << std::endl;
	*this = toCopy;
}

ClapTrap::ClapTrap(std::string name): HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
	std::cout << "param constractor called" << std::endl;
	this->name = name;
}

ClapTrap::ClapTrap(void): HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
	std::cout << "default constractor called" << std::endl;
	name = "Ma3ert";
}

ClapTrap::~ClapTrap()
{
	std::cout << "the destractor called" << std::endl;
}

bool	ClapTrap::useEnergyPoint(void)
{
	if (EnergyPoint <= 0)
	{
		std::cout << name << " don't have enough energypoint !!!" << std::endl;
		return (false);
	}
	if (HitPoint <= 0)
	{
		std::cout << name << " don't have enough hitpoint !!!" << std::endl;
		return (false);
	}
	EnergyPoint--;
	return (true);
}

void ClapTrap::attack(const std::string& target)
{
	if (useEnergyPoint())
	{	
		std::cout << "ClapTrap " << this->name;
		std::cout << " Attack " << target;
		std::cout << " Causing " << this->AttackDamage << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (useEnergyPoint())
	{
		HitPoint -= amount;
		if (HitPoint < 0)
			HitPoint = 0;
		std::cout << "ClapTrap " << this->name;
		std::cout << " take -" << amount << " HP";
		std::cout << " of damage" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (useEnergyPoint())
	{
		std::cout << "ClapTrap " << this->name;
		std::cout << " repair itself +" << amount;
		std::cout << " HP" << std::endl;
	}
}	