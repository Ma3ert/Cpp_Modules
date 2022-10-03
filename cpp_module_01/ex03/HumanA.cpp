/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:08:51 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/03 18:40:47 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string humanName, Weapon &newWeapon)
{
	name = humanName;
	myWeapon = newWeapon;
}

void	HumanA::attack(void)
{
	std::cout << name << "attacks with their " << myWeapon.getType() << std::endl;
}