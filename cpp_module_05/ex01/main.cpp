/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:20:57 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/01 13:21:36 by Ma3ert           ###   ########.fr       */
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