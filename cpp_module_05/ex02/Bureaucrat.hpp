/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:30:38 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/31 12:37:11 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

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
		void	excuteForm(Form const &form) const;
		void	signForm(Form &F) const;
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

#endif