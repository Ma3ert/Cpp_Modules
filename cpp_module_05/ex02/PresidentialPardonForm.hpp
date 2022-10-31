/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:21:13 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/31 11:26:11 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm :public Form
{
	private:
		std::string			target;
	public:
		void	beSigned(Bureaucrat &B);
		void	excute(Bureaucrat const &excutor) const;
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();
		PresidentialPardonForm	&operator=( PresidentialPardonForm const & rhs );
};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ******************************************* PresidentialPardonForm_H */