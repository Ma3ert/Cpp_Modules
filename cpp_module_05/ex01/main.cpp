/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:20:57 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/31 09:37:48 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

std::ostream	&operator << (std::ostream &out, const Bureaucrat &param)
{
	out << param.getName() << ", bureacrat grade " << param.getGrade();
	return (out);
}

std::ostream	&operator << (std::ostream &out, const Form &param)
{
	out << param.getName();
	out << ", grade to sign: " << param.getSignGrade() << ", grade to excute: ";
	out << param.getExcuteGrade() << ", signed" << param.getSign();
	return (out);
}
int main()
{
	try
	{
		Bureaucrat	first("name", 21);
		Form 		ff("form", 22, 21);
		ff.beSigned(first);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "======================\n";
	try
	{
		Bureaucrat	first("name", 21);
		Form 		ff("form", 0, 2);
		ff.beSigned(first);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "======================\n";
	try
	{
		Bureaucrat	first("name", 21);
		Form 		ff("form", 3, 2);
		ff.beSigned(first);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "======================\n";
	
}