/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:20:57 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/31 09:14:51 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream	&operator << (std::ostream &out, const Bureaucrat &param)
{
	out << param.getName() << ", bureacrat grade " << param.getGrade() << std::endl;
	return (out);
}

int main()
{
	try
	{
		Bureaucrat name("ma3ert", 2);
		std::cout << name;
		std::cout << "===============" << std::endl;
		Bureaucrat name2("walo", 1);
		std::cout << "===============" << std::endl;
		name2.inc();
		Bureaucrat name1("sbardila", 110);
		std::cout << "===============" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}