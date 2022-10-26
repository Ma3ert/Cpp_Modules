/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:34:54 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/26 14:19:11 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"
# include "AbstractAnimal.hpp"

class Cat: public AbstractAnimal
{
	private:
		Brain *CatBrain;
	public:
		Cat();
		Cat(Brain const &newBrain);
		Cat( Cat const & src );
		~Cat();
		void		SetBrain(Brain *newBrain);
		Brain		*GetBrain(void) const;
		std::string	getType(void) const;
		void		makeSound(void) const;
		Cat 		&operator=( Cat const & rhs );
};

#endif