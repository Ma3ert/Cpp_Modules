/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:36:32 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/22 10:24:34 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		void			highFivesGuys(void);
		virtual void	attack(const std::string &target);
		FragTrap		&operator = (FragTrap const &toAssign);
		FragTrap(FragTrap const &toCopy);
		FragTrap(std::string name);
		FragTrap(void);
		~FragTrap();
};

#endif