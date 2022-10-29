/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:30:40 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/29 12:25:39 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string newName): name(newName)
{
	std::cout << "param constractor called from Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(void) : name("Ma3ert")
{
	std::cout << "default constractor called from Bureaucrat" << std::endl;;
}

Bureaucrat::Bureaucrat( const Bureaucrat & toAssign ) : name(toAssign.name)
{
	std::cout << "copy constractor called from Bureaucrat" << std::endl;
	*this = toAssign;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "the destractor called from Bureaucrat" << std::endl;
}

int	Bureaucrat::getGrade(void)
{
	return (grade);
}

void Bureaucrat::setGrade(int newGrade)
{
	if (newGrade < 1)
		throw (GradeTooHighException);
	else if (newGrade > 150)
		throw (GradeTooLowException);
	else
		grade = newGrade;
}

void Bureaucrat::inc(void)
{
	if (grade == 1)
		throw (GradeTooHighException);
	else
		grade--;
}

void	Bureaucrat::dec(void)
{
	if (grade == 150)
		throw (GradeTooLowException);
	else
		grade++;
}

char const *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradetooHighException");
}

char const *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GradetooLowException");
}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const & toCopy )
{
	if ( this != &toCopy )
	{
		this->grade = toCopy.grade;
	}
	return *this;
}