/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:21:03 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/31 11:27:45 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5)
{
	std::cout << "param constractor called from PresidentialPardon" << std::endl;
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardon", 25, 5)
{
	std::cout << "default constractor called from PresidentialPardon" << std::endl;
	this->target = "target";
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ): Form("PresidentialPardon", 25, 5)
{
	std::cout << "copy constractor called from PresidentialPardon" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "the destractor called from PresidentialPardonForm" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const & toAssign )
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

void	PresidentialPardonForm::excute(Bureaucrat const &excutor) const
{
	GradeTooLowException objet;
	if (excutor.getGrade() < this->getExcuteGrade() && this->getSign())
		std::cout << "Informs that " << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	else
		throw (objet);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */