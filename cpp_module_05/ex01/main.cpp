/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:20:57 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/30 08:05:53 by Ma3ert           ###   ########.fr       */
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
		Bureaucrat name("ma3ert", 2);
		std::cout << name;
		std::cout << "===============" << std::endl;
		Bureaucrat name2("walo", 0);
		std::cout << "===============" << std::endl;
		Bureaucrat name1("sbardila", 190);
		std::cout << "===============" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}