/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:30:40 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/02 09:41:29 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string newName, int newGrade): name(newName)
{
	std::cout << "param constractor called from Bureaucrat" << std::endl;
	setGrade(newGrade);
}

Bureaucrat::Bureaucrat(void) : name("Ma3ert")
{
	std::cout << "default constractor called from Bureaucrat" << std::endl;
	setGrade(150);
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

int	Bureaucrat::getGrade(void) const
{
	return (grade);
}

void Bureaucrat::setGrade(int newGrade)
{
	GradeTooHighException high;
	GradeTooLowException Low;
	if (newGrade < 1)
		throw (high);
	else if (newGrade > 150)
		throw (Low);
	else
		grade = newGrade;
}

void Bureaucrat::inc(void)
{
	GradeTooHighException objet;
	if (grade == 1)
		throw (objet);
	else
		grade--;
}

void	Bureaucrat::dec(void)
{
	GradeTooLowException objet;
	if (grade == 150)
		throw (objet);
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

const std::string Bureaucrat::getName(void) const {return (name);}

std::ostream	&operator << (std::ostream &out, const Bureaucrat &param)
{
	out << param.getName() << ", bureacrat grade " << param.getGrade();
	return (out);
}