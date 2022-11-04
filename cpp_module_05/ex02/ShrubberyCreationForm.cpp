/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:21:03 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/04 10:04:11 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "param constractor called from shrubberycreation" << std::endl;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "default constractor called from shrubberycreation" << std::endl;
	this->target = "target";
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ): Form("ShrubberyCreationForm", src.getSignGrade(), src.getExcuteGrade())
{
	std::cout << "copy constractor called from shrubberycreation" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "destractor called from ShrubberyCreationForm" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & toAssign )
{
	std::cout << "" << std::endl;
	if ( this != &toAssign )
	{
		this->target = toAssign.target;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::excute(Bureaucrat const &excutor) const
{
	GradeTooLowException objet;
	std::ofstream fout(target + "_Shrubbery");
	if (excutor.getGrade() < this->getExcuteGrade() && this->getSign())
	{
		fout << "              v .   ._, |_  ., 	" << std::endl;
        fout << "   `-._//  .  / /    |/_ 			" << std::endl;
        fout <<  "      //  _/, y | /// 			" << std::endl;
        fout << " _/_.___//, /// -./|| 				" << std::endl;
        fout << "   `7-,--.`._||  / / , 			" << std::endl;
        fout << "   /'     `-. `./ / |/_.' 			" << std::endl;
        fout << "             |    |// 				" << std::endl;
        fout << "             |_    / 				" << std::endl;
        fout << "             |-   |				" << std::endl;
        fout << "             |   =| 				" << std::endl;
        fout << "             |    |				" << std::endl;
		fout << "----------------/ ,  . /--------._ " << std::endl;
	}
	else
		throw (objet);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */