/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:05:40 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/05 13:49:27 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
	Zombie	firstZombie;
	Zombie	*secondZombie;

	firstZombie.Announce();
	secondZombie = newZombie("5o sbardila");
	secondZombie->Announce();
	randomChump("3chir sbardila");
	delete secondZombie;
}