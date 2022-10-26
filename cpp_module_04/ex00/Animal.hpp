/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:27:53 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/26 15:41:34 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal( std::string newType);
		Animal( Animal const & src );
		virtual ~Animal();
		virtual	std::string	getType(void) const;
		virtual void		makeSound(void) const;
		Animal 				&operator=( Animal const & rhs );
};

#endif