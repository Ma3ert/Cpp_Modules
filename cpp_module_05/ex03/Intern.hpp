/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:09:39 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/31 17:42:02 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
#include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern( Intern const & src );
		~Intern();
		Form *makeForm(std::string nameForm, std::string targetForm) const;
		Intern &		operator=( Intern const & rhs );
		class FormNotFound: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};
};

#endif /* ********************************************************** INTERN_H */