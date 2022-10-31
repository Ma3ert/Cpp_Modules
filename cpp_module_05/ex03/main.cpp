/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:13:06 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/31 18:04:24 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat name("name", 150);
	Intern	inter;
	Form *ptr;
	std::cout << "==========failed test==========" << std::endl;
	try
	{
		ptr = inter.makeForm("sbardila", "target");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "==========success test==========" << std::endl;
	try
	{
		ptr = inter.makeForm("Presidential Pardon", "target");
		name.signForm(*ptr);
		ptr->excute(name);
		delete ptr;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "=========des-============" << std::endl;
}
