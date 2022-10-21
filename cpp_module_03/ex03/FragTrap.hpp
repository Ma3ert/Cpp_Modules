/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:36:32 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/21 12:56:37 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		void		highFivesGuys(void);
		FragTrap	&operator = (FragTrap const &toAssign);
		FragTrap(FragTrap const &toCopy);
		FragTrap(std::string name);
		FragTrap(void);
		~FragTrap();
};

#endif