/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:21:03 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/31 11:27:45 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45)
{
	std::cout << "param constractor called from RobotomyRequest" << std::endl;
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequest", 72, 45)
{
	std::cout << "default constractor called from RobotomyRequest" << std::endl;
	this->target = "target";
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ): Form("RobotomyRequest", 72, 45)
{
	std::cout << "copy constractor called from RobotomyRequest" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "the destractor called from RobotomyRequestForm" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & toAssign )
{
	std::cout << "the assign operator called" << std::endl;
	if ( this != &toAssign )
	{
		this->target = toAssign.target;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::excute(Bureaucrat const &excutor) const
{
	GradeTooLowException objet;
	static int	random;
	if (excutor.getGrade() < this->getExcuteGrade())
	{
		if (random % 2)
		{
			std::cout << target << " has been robotomized" << std::endl;
		}
		else
			std::cout << target << " robotomy failed" << std::endl;
		random++;
		if (random == 10)
			random = 0;
	}
	else
		throw (objet);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */