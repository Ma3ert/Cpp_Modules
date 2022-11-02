/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:20:57 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/02 10:35:10 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat	first("name", 21);
		Form 		ff("form", 22, 21);
		first.signForm(ff);
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
		first.signForm(ff);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "======================\n";
	
}