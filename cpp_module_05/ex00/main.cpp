/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:20:57 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/10/30 07:23:40 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat name("ma3ert", 2);
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