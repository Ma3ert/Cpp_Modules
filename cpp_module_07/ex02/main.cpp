/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:40:08 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/13 18:45:22 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
	Array<int> intArray(4);
	Array<int> intArray2;
	Array<char> charArray(5);
	const Array<double> doubleArray(5);

	intArray2 = intArray;
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

	try
	{
		charArray[0] = 'a';
		charArray[100] = '2';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << intArray[0] << std::endl;
	std::cout << charArray[0] << std::endl;
	std::cout << intArray.size() << std::endl;
	std::cout << charArray.size() << std::endl;
}

// int main(int, char**)
// {
//     Array<int> numbers(12);
//     int* mirror = new int[12];
//     srand(time(NULL));
//     for (int i = 0; i < 12; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < 12; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[12] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < 12; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }