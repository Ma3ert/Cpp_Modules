/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:03:19 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/15 12:20:12 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
						// SUCCESSFUL TEST
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
						// NO SPAN FOUND TEST
	std::cout << std::endl;
	try
	{
		Span noSpan;
		noSpan.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
						// NO SPACE LEFT TEST
	std::cout << std::endl;
	try
	{
		Span noSpace(2);
		noSpace.addNumber(6);
		noSpace.addNumber(3);
		noSpace.addNumber(17);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
						// ADD SET OF NUMBERS TEST
	std::cout << std::endl;
	try
	{
		int intTable[] = {1, 2, 3, 4};
		std::vector<int> intVector(intTable, intTable + 4);
		Span intTableSpan(5);
		intTableSpan.addNumbers(intVector.begin(), intVector.end());
		std::cout << intTableSpan.shortestSpan() << std::endl;
		std::cout << intTableSpan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}