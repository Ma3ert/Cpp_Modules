/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAbstractAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:27:53 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/25 09:11:34 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAbstractAnimal_HPP
# define WrongAbstractAnimal_HPP

# include <iostream>
# include <string>

class WrongAbstractAnimal
{
	protected:
		std::string type;
	public:
		WrongAbstractAnimal();
		WrongAbstractAnimal( std::string newType);
		WrongAbstractAnimal( WrongAbstractAnimal const & src );
		virtual ~WrongAbstractAnimal();
		std::string	getType(void) const;
		void	makeSound(void) const;
		WrongAbstractAnimal &		operator=( WrongAbstractAnimal const & rhs );
};

#endif