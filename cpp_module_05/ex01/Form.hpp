/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:30:38 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/30 07:40:02 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
#define Form_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	name;
		bool				sign;
		const int			gradeToSign;
		const int			gradeToExcute;
	public:
		Form();
		Form( std::string newName, int gradeToSign, int gradeToExcute);
		Form( Form const & src );
		~Form();
		const std::string	getName(void) const;
		bool				getSign(void) const;
		int					getSignGrade(void) const;
		int					getExcuteGrade(void) const;
		void				beSigned(Bureaucrat &B);
		void				setSign(void);
		Form				&operator=( Form const & rhs );
		class GradeTooHighException: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};
};

#endif