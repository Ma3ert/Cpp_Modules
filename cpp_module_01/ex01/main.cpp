/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:25:32 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/05 13:52:32 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
	Zombie	*zombies;

	zombies = zombieHorde(10, "sbardilat");
	for (int i = 0; i < 10; i++)
		zombies[i].Announce();
	delete []zombies;
}
