/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbstractAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:27:53 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/25 13:17:15 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AbstractAnimal_HPP
# define AbstractAnimal_HPP

# include <iostream>
# include <string>

class AbstractAnimal
{
	protected:
		std::string type;
	public:
		AbstractAnimal();
		AbstractAnimal( std::string newType);
		AbstractAnimal( AbstractAnimal const & src );
		virtual ~AbstractAnimal();
		virtual	std::string	getType(void) const;
		virtual void		makeSound(void) const;
		AbstractAnimal 				&operator=( AbstractAnimal const & rhs );
};

#endif