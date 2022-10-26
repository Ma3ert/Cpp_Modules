/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:27:53 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/25 09:11:34 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongANIMAL_HPP
# define WrongANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal( std::string newType);
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal();
		std::string	getType(void) const;
		void	makeSound(void) const;
		WrongAnimal &		operator=( WrongAnimal const & rhs );
};

#endif