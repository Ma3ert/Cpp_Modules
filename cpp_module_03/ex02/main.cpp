/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:58:47 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/22 10:24:21 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap Soldier("Soldier");
	FragTrap Frag;
	FragTrap copyFrag(Soldier);

	std::cout << "\n=========Frag vs soldier===========" << std::endl;
	
	Soldier.attack("Frag");
	Frag.takeDamage(2);
	Frag.beRepaired(1);
	Frag.attack("Soldier");
	Soldier.takeDamage(2);
	Soldier.beRepaired(1);

	std::cout << "\n============copysoldier vs soldier2 ==========" << std::endl;
	
	copyFrag.attack("Frag");
	Frag.takeDamage(2);
	Frag.beRepaired(1);
	Frag.attack("Soldier");
	copyFrag.takeDamage(2);
	copyFrag.beRepaired(1);
	
	std::cout << "\n============consume HP==========" << std::endl;

	for (int i = 0; i < 10; i++)
		copyFrag.takeDamage(2);

	std::cout << "\n============consume EP==========" << std::endl;

	for (int i = 0; i < 10; i++)
		Soldier.beRepaired(1);
		
	std::cout << "\n============destractor==========" << std::endl;
}