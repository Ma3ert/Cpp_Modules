/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:57:04 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/02 20:14:57 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie( std::string newName );
		Zombie( void );
		void	setName( std::string newName );
		void	setName( void );
		void Announce( void );
		~Zombie( void );
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif