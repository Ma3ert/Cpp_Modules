/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:05:33 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/04 12:02:55 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"
#include <unistd.h>

int main()
{
	Weapon	slah("sbardila");
	HumanA	ma3ert("ma3ert", slah);
	std::cout << "gigachad flirting with frida" << std::endl;
	sleep(2);
	std::cout << "ma3ert saw it" << std::endl;
	sleep(2);
	std::cout << "ma3ert: gigachad nari 9awditiha " << std::endl;
	sleep(2);
	ma3ert.attack();
	sleep(2);
	slah.setType("fardi");
	HumanB	gigachad("gigachad");
	gigachad.setWeapon(slah);
	std::cout << "gigachad: nari drabni l3ayni " << std::endl;
	sleep(2);
	gigachad.attack();
	sleep(2);
	std::cout << "ma3ert is dead" << std::endl;
	std::cout << "frida is sad for ma3ert" << std::endl;
	return(0);
}