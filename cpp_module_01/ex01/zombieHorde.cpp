/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:45:20 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/05 13:52:29 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int		i = 0;
	Zombie	*zombies;

	zombies = new Zombie[ N ];
	while (i < N)
	{
		zombies[i].setName(name);
		i++;
	}
	return (zombies);
}
