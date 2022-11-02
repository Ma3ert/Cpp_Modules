/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:13:06 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/02 10:55:09 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat name("name", 2);
	try
	{
		std::cout << "----------------------\n";
		PresidentialPardonForm pr("target");
		std::cout << "----------------------\n";
		RobotomyRequestForm rb("target");
		std::cout << "----------------------\n";
		ShrubberyCreationForm sh("target");
	
		std::cout << "-------sign pr--------" << std::endl;
		pr.beSigned(name);
		std::cout << "-------sign rb--------" << std::endl;
		rb.beSigned(name);
		std::cout << "-------sign sh--------" << std::endl;
		sh.beSigned(name);

		std::cout << "-------excute pr------" << std::endl;
		name.excuteForm(pr);
		std::cout << "-------excute rb------" << std::endl;
		name.excuteForm(rb);
		std::cout << '\n';
		name.excuteForm(rb);
		std::cout << '\n';
		name.excuteForm(rb);
		std::cout << '\n';
		name.excuteForm(rb);
		std::cout << "-------excute sh------" << std::endl;
		name.excuteForm(sh);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "==========grade low to sign===========" << std::endl;
	try
	{
		name.setGrade(150);
		PresidentialPardonForm pr("pr");
		name.signForm(pr);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "==========grade low to excute===========" << std::endl;
	try
	{
		name.setGrade(150);
		PresidentialPardonForm pr("pr");
		name.excuteForm(pr);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
