/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:27:58 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/14 18:55:28 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	
	try
	{
		int tab[] = {1, 2, 3, 4, 5};
		std::vector<int> table(tab, tab + 5);
		int	res;
		res = easyfind<std::vector<int> >(table, 2);
		std::cout << "I found it !!!\n";
		std::cout << "your result is: " << res << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		int tab[] = {1, 2, 3, 4, 5};
		std::deque<int> table(tab, tab + 5);
		int	res;
		res = easyfind<std::deque<int> >(table, 12);
		std::cout << "I found it !!!\n";
		std::cout << "your result is: " << res << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}