/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:58:47 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/19 19:44:52 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap Soldier("Soldier");
	ScavTrap scav;
	ScavTrap copyscav(scav);

	std::cout << "\n=========scav vs soldier===========" << std::endl;
	
	Soldier.attack("scav");
	scav.takeDamage(2);
	scav.beRepaired(1);
	scav.attack("Soldier");
	scav.guardGate();
	Soldier.takeDamage(2);
	Soldier.beRepaired(1);

	std::cout << "\n============copysoldier vs soldier2 ==========" << std::endl;
	
	copyscav.attack("scav");
	scav.takeDamage(2);
	scav.beRepaired(1);
	scav.attack("Soldier");
	copyscav.guardGate();
	copyscav.takeDamage(2);
	copyscav.beRepaired(1);
	
	std::cout << "\n============consume HP==========" << std::endl;

	for (int i = 0; i < 5; i++)
		copyscav.takeDamage(2);

	std::cout << "\n============consume EP==========" << std::endl;

	for (int i = 0; i < 5; i++)
		Soldier.beRepaired(1);
		
	std::cout << "\n============destractor==========" << std::endl;
}