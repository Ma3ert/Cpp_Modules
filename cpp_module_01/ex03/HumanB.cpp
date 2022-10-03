/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:13:04 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/03 18:33:02 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon newWeapon) { myWeapon = &newWeapon; }

HumanB::HumanB(std::string humanName) { name = humanName; myWeapon = NULL; }

void	HumanB::attack(void)
{
	if (!myWeapon)
		std::cout << name << "DO NOT HAVE A WEAPON TO ATTACK !!!!" << std::endl;
	else
		std::cout << name << " attacks with their " << myWeapon->getType() << std::endl;
}