/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:12:48 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/03 18:30:13 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*myWeapon;
		std::string	name;
	public:
		HumanB(std::string humanName);
		void	setWeapon(Weapon newWeapon);
		void	attack(void);
};

#endif