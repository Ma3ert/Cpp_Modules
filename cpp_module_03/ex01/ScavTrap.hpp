/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:36:32 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/21 16:39:55 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		void		guardGate();
		virtual	void attack(const std::string &target);
		ScavTrap	&operator = (ScavTrap const &toAssign);
		ScavTrap(ScavTrap const &toCopy);
		ScavTrap(std::string name);
		ScavTrap(void);
		~ScavTrap();
};

#endif