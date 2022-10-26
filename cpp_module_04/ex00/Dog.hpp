/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:34:54 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/26 14:19:11 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "AbstractAnimal.hpp"

class Dog: public AbstractAnimal
{
	public:
		Dog();
		Dog( Dog const & src );
		~Dog();
		std::string	getType(void) const;
		void		makeSound(void) const;
		Dog 		&operator=( Dog const & rhs );
};

#endif