/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:40:08 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/12 23:30:35 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> intArray(4);
	Array<char> charArray(5);
	
	try
	{
		intArray[2] = 1;
		intArray[0] = 1;
		charArray[-1];
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << intArray.size() << std::endl;
	std::cout << charArray.size() << std::endl;
}