/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:58:47 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/19 11:33:21 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Soldier("Soldier");
	ClapTrap Soldier1("Soldier1");
	ClapTrap CopySoldier(Soldier);

	std::cout << "\n=========soldier 1 vs soldier===========" << std::endl;
	
	Soldier.attack("Soldier1");
	Soldier1.takeDamage(2);
	Soldier1.attack("Soldier");
	Soldier.takeDamage(2);
	Soldier1.beRepaired(1);
	Soldier.beRepaired(1);

	std::cout << "\n============copysoldier vs soldier2 ==========" << std::endl;
	
	CopySoldier.attack("soldier2");

	std::cout << "\n============consume HP==========" << std::endl;

	for (int i = 0; i < 10; i++)
		CopySoldier.takeDamage(2);

	std::cout << "\n============consume EP==========" << std::endl;

	for (int i = 0; i < 10; i++)
		Soldier.beRepaired(1);
		
	std::cout << "\n============destractor==========" << std::endl;
}