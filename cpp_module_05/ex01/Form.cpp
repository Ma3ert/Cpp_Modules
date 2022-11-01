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

Form::Form(std::string newName, int ToSign, int ToExcute): name(newName),
	gradeToSign(ToSign), gradeToExcute(ToExcute)
{
	std::cout << "param constractor called from Form" << std::endl;
	GradeTooHighException high;
	GradeTooLowException Low;
	if (ToSign < 1 || ToExcute < 1)
		throw (high);
	else if (ToSign > 150 || ToExcute > 150)
		throw (Low);
	sign = false;
}

Form::Form(void) : name("Ma3ert"), gradeToSign(150), gradeToExcute(150)
{
	std::cout << "default constractor called from Form" << std::endl;
	sign = false;
}

Form::Form( const Form & toAssign ) : name(toAssign.name),
	gradeToSign(toAssign.gradeToSign), gradeToExcute(toAssign.gradeToExcute)
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

void	Form::setSign(void)
{
	sign = true;
}

int	Form::getExcuteGrade(void) const
{
	return (gradeToExcute);
}

char const *Form::GradeTooHighException::what() const throw()
{
	return ("GradetooHighException");
}

char const *Form::GradeTooLowException::what() const throw()
{
	return ("GradetooLowException");
}

Form &Form::operator = ( Form const & toCopy )
{
	if ( this != &toCopy )
	{
		this->sign = false;
	}
	return *this;
}

void Form::beSigned(Bureaucrat const &B)
{
	GradeTooLowException low;
	if (B.getGrade() > this->getSignGrade())
		throw (low);
	this->sign = true;
}

std::ostream	&operator << (std::ostream &out, const Form &param)
{
	out << param.getName();
	out << ", grade to sign: " << param.getSignGrade() << ", grade to excute: ";
	out << param.getExcuteGrade() << ", signed" << param.getSign();
	return (out);
}
