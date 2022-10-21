/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:36:32 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/21 12:57:00 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		void		guardGate();
		ScavTrap	&operator = (ScavTrap const &toAssign);
		ScavTrap(ScavTrap const &toCopy);
		ScavTrap(std::string name);
		ScavTrap(void);
		~ScavTrap();
};

#endif