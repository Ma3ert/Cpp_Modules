/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:57:39 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/18 12:34:22 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int			HitPoint;
		int			EnergyPoint;
		int			AttackDamage;
	public:
		ClapTrap	&operator = (ClapTrap const &toAssign);
		bool		useEnergyPoint(void);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap(ClapTrap const &toCopy);
		ClapTrap(std::string name);
		ClapTrap(void);
		~ClapTrap();
};

#endif