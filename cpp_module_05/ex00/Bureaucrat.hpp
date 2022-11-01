/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:30:38 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/01 13:35:08 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		std::string const	name;
		int					grade;
	public:
		Bureaucrat();
		Bureaucrat( std::string newName, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		int	getGrade(void) const;
		const std::string getName(void) const;
		void setGrade(int newGrade);
		Bureaucrat	&operator=( Bureaucrat const & rhs );
		class GradeTooHighException: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual char const *what() const throw();
		};
		void	inc();
		void	dec();
};

std::ostream	&operator << (std::ostream &out, const Bureaucrat &param);

#endif