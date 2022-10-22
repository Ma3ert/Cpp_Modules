/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:58:47 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/22 10:56:44 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap Soldier("Soldier");
	// DiamondTrap Diamond;
	// DiamondTrap copyDiamond(Diamond);

	// std::cout << "\n=========Diamond vs soldier===========" << std::endl;
	
	// Soldier.attack("Diamond");
	// Diamond.takeDamage(2);
	// Diamond.beRepaired(1);
	// Diamond.attack("Soldier");
	// Soldier.takeDamage(2);
	// Soldier.beRepaired(1);

	// std::cout << "\n============copysoldier vs soldier2 ==========" << std::endl;
	
	// copyDiamond.attack("Diamond");
	// Diamond.takeDamage(2);
	// Diamond.beRepaired(1);
	// Diamond.attack("Soldier");
	// copyDiamond.takeDamage(2);
	// copyDiamond.beRepaired(1);
	
	// std::cout << "\n============consume HP==========" << std::endl;

	// for (int i = 0; i < 10; i++)
	// 	copyDiamond.takeDamage(2);

	// std::cout << "\n============consume EP==========" << std::endl;

	// for (int i = 0; i < 10; i++)
	// 	Soldier.beRepaired(1);
	// std::cout << "\n----------------representation----------\n";
	Soldier.whoAmI();
	// Diamond.whoAmI();
	// copyDiamond.whoAmI();
	std::cout << "\n============destractor==========" << std::endl;
}