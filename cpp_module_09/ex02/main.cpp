/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:08:55 by Ma3ert            #+#    #+#             */
/*   Updated: 2023/04/13 13:54:39 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac, char **av)
{
	if (ac <= 2)
	{
		std::cout << "Bad Input \n";
		return (1);
	}
	try
	{
		PmergeMe test(ac - 1, av + 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}