/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:58:17 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/03 18:56:40 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string &Weapon::getType(void)
{
	std::string	&typeREF = type;
	return (typeREF);
}

void	Weapon::setType( std::string newType) { type = newType; }

Weapon::Weapon( std::string newType ) { setType( newType ); }

Weapon::Weapon(void) 
{
	setType( "sbardila" );
}