/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:57:39 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/21 16:12:17 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string name;
	public:
		DiamondTrap	&operator = (DiamondTrap const &toAssign);
		DiamondTrap(DiamondTrap const &toCopy);
		DiamondTrap(std::string name);
		DiamondTrap(void);
		void whoAmI();
		~DiamondTrap();
};

#endif