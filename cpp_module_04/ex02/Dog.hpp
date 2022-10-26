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
# include "Brain.hpp"

class Dog: public AbstractAnimal
{
	private:
		Brain *DogBrain;
	public:
		Dog();
		Dog(Brain const &newBrain);
		Dog( Dog const & src );
		~Dog();
		void		SetBrain(Brain *newBrain);
		Brain		*GetBrain(void) const;
		std::string	getType(void) const;
		void		makeSound(void) const;
		Dog 		&operator=( Dog const & rhs );
};

#endif