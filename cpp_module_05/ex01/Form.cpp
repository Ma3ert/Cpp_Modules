/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:30:40 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/30 07:43:39 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string newName, int ToSign, int ToExcute): name(newName)
{
	std::cout << "param constractor called from Form" << std::endl;
	setSignGrade(ToSign);
	setExcuteGrade(ToExcute);
	sign = false;
}

Form::Form(void) : name("Ma3ert")
{
	std::cout << "default constractor called from Form" << std::endl;
	setSignGrade(150);
	setExcuteGrade(150);
	sign = false;
}

Form::Form( const Form & toAssign ) : name(toAssign.name)
{
	std::cout << "copy constractor called from Form" << std::endl;
	*this = toAssign;
}

Form::~Form()
{
	std::cout << "the destractor called from Form" << std::endl;
}

const std::string Form::getName(void) const {return (name);}

int	Form::getSignGrade(void) const
{
	return (gradeToSign);
}

bool	Form::getSign(void) const
{
	return (sign);
}

int	Form::getExcuteGrade(void) const
{
	return (gradeToExcute);
}

void Form::setSignGrade(int newGrade)
{
	GradeTooHighException high;
	GradeTooLowException Low;
	if (newGrade < 1)
		throw (high);
	else if (newGrade > 150)
		throw (Low);
	else
		gradeToSign = newGrade;
}

void Form::setExcuteGrade(int newGrade)
{
	GradeTooHighException high;
	GradeTooLowException Low;
	if (newGrade < 1)
		throw (high);
	else if (newGrade > 150)
		throw (Low);
	else
		gradeToExcute = newGrade;
}

char const *Form::GradeTooHighException::what() const throw()
{
	return ("GradetooHighException");
}

char const *Form::GradeTooLowException::what() const throw()
{
	return ("GradetooLowException");
}

Form &Form::operator=( Form const & toCopy )
{
	if ( this != &toCopy )
	{
		this->gradeToExcute = toCopy.gradeToExcute;
		this->gradeToSign = toCopy.gradeToSign;
		this->sign = false;
	}
	return *this;
}

void Form::beSigned(Bureaucrat &B)
{
	GradeTooLowException low;
	B.signForm(*this);
	if (B.getGrade() > this->getSignGrade())
		throw (low);
	this->sign = true;
}
