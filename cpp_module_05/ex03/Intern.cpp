/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:09:42 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/01 10:37:39 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	std::cout << "default constractor called from Intern" << std::endl;
}

Intern::Intern( const Intern & src )
{
	std::cout << "param constractor called from Intern" << std::endl;
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	std::cout << "destractor called from Intern" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	std::cout << "from Intern" << std::endl;
	(void)rhs;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string	availableForm(int i)
{
	std::string	levels[3] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};
	return (levels[i]);
}

Form *Intern::makeForm(std::string nameForm, std::string targetForm) const
{
	int i = 0;
	Form *ret;
	FormNotFound notFound;
	while (availableForm(i) != nameForm && i != 3)
		i++;
	switch (i)
	{
		case 0:
			ret = new PresidentialPardonForm(targetForm);
			break;
		case 1:
			ret = new RobotomyRequestForm(targetForm);
			break;
		case 2:
			ret = new ShrubberyCreationForm(targetForm);
			break;
		default:
			throw(notFound);
			break;
	}
	std::cout << "Intern creates" << nameForm << std::endl;
	return (ret);
}

char const *Intern::FormNotFound::what() const throw()
{
	return ("FormNotFound");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */