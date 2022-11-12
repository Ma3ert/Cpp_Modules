/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ma3ert <yait-iaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:07:20 by Ma3ert            #+#    #+#             */
/*   Updated: 2022/11/12 15:15:19 by Ma3ert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void ft_ft(T &arg, T toSet)
{
	arg = toSet;
}

template <typename T>
void iter(T *array, int lenght, void (*f)(T &, T))
{
	for (int i = 0; i < lenght; ++i)
		f(array[i], 97);
}

int main()
{
	int intTab[] = {1, 2, 3, 4};
	char charTab[] = {'a', 'b', 'c'};

	std::cout << "==============int test===============" << std::endl;

	for (int i = 0; i < 4; ++i)
		std::cout << intTab[i] << " ";
	std::cout << std::endl;

	iter(&intTab[0], 3, ft_ft);

	for (int i = 0; i < 4; ++i)
		std::cout << intTab[i] << " ";

	std::cout << "\n==============char test===============\n";

	for (int i = 0; i < 3; ++i)
		std::cout << charTab[i] << " ";
	std::cout << std::endl;

	iter(&charTab[0], 3, ft_ft);

	for (int i = 0; i < 3; ++i)
		std::cout << charTab[i] << " ";
	return (0);
}