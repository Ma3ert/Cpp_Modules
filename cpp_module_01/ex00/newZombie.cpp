/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:23:40 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/02 20:19:04 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *namedZombie;

	namedZombie = new Zombie(name);
	return (namedZombie);
}