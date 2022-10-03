/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:06:07 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/03 18:56:26 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		std::string	&getType( void );
		void		setType( std::string newType);
		Weapon( std::string newType );
		Weapon( void );
};


#endif