/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:06:01 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/04 11:51:03 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		*myWeapon;
		std::string	name;
	public:
		void	attack(void);
		HumanA(std::string humanName, Weapon &newWeapon);
};

#endif