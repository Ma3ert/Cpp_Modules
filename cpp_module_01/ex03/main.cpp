/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:05:33 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/06 14:04:09 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"
#include <unistd.h>

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}

// int main()
// {
// 	Weapon	slah("sbardila");
// 	HumanA	ma3ert("ma3ert", slah);
// 	std::cout << "gigachad flirting with frida" << std::endl;
// 	sleep(2);
// 	std::cout << "ma3ert saw it" << std::endl;
// 	sleep(2);
// 	std::cout << "ma3ert: gigachad nari 9awditiha " << std::endl;
// 	sleep(2);
// 	ma3ert.attack();
// 	sleep(2);
// 	slah.setType("fardi");
// 	HumanB	gigachad("gigachad");
// 	gigachad.setWeapon(slah);
// 	std::cout << "gigachad: nari drabni l3ayni " << std::endl;
// 	sleep(2);
// 	gigachad.attack();
// 	sleep(2);
// 	std::cout << "ma3ert is dead" << std::endl;
// 	sleep(2);
// 	std::cout << "frida is sad for ma3ert" << std::endl;
// 	return(0);
// }